// ReRap Version 0.9
// Copyright 2011 Matthew Mikolay.
//
// This file is part of ReRap.
//
// ReRap is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// ReRap is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with ReRap.  If not, see <http://www.gnu.org/licenses/>.

#include "invalidinit.h"

/*** Constructor ***/
InvalidInitException::InvalidInitException(unsigned int pLineNum, unsigned int pColNum, unsigned char pType)
{
	setLineNumber(pLineNum);
	setColumnNumber(pColNum);
	setType(pType);
	updateMessage();
}

/*** Set the object type ***/
void InvalidInitException::setType(unsigned char pType)
{
	type = pType;
}

/*** Get the object type ***/
unsigned char InvalidInitException::getType()
{
	return type;
}

/*** Update the message ***/
void InvalidInitException::updateMessage()
{
	setMessage("Invalid initilization of" + objectToString(type) + " object occurred.");
}

/*** Destructor ***/
InvalidInitException::~InvalidInitException() throw()
{
}

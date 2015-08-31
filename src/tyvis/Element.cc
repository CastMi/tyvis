// Copyright (c) Clifton Labs, Inc.  All Rights Reserved.

// CLIFTON LABS MAKES NO REPRESENTATIONS OR WARRANTIES ABOUT THE
// SUITABILITY OF THE SOFTWARE, EITHER EXPRESS OR IMPLIED, INCLUDING BUT
// NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
// PARTICULAR PURPOSE, OR NON-INFRINGEMENT.  CLIFTON LABS SHALL NOT BE
// LIABLE FOR ANY DAMAGES SUFFERED BY LICENSEE AS A RESULT OF USING, RESULT
// OF USING, MODIFYING OR DISTRIBUTING THIS SOFTWARE OR ITS DERIVATIVES.

// By using or copying this Software, Licensee agrees to abide by the
// intellectual property laws, and all other applicable laws of the U.S.,
// and the terms of this license.

// You may modify, distribute, and use the software contained in this
// package under the terms of the "GNU LIBRARY GENERAL PUBLIC LICENSE"
// version 2, June 1991. A copy of this license agreement can be found in
// the file "LGPL", distributed with this archive.

#include "Element.hh"
#include "PhysicalLiteral.hh"

Element::Element( const TypeInfo &initTypeInfo, 
		  const string &initName ) :
  ObjectBase( initTypeInfo, initName ){}

Element::Element( const Element &that ) :
  ObjectBase( that ){}

Element &
Element::operator=( const Element &that ){
  ObjectBase::operator=(that);
  return *this;
}

bool
Element::operator==( const Element &that ) const {
  return ObjectBase::operator==( that );
}

Element::~Element(){}

RValue *
Element::clone() const {
  return new Element( *this );
}

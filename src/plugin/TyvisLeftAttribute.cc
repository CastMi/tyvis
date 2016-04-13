
// Copyright (c) 1996-2003 The University of Cincinnati.
// All rights reserved.

// UC MAKES NO REPRESENTATIONS OR WARRANTIES ABOUT THE SUITABILITY OF THE
// SOFTWARE, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
// IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE,
// OR NON-INFRINGEMENT.  UC SHALL NOT BE LIABLE FOR ANY DAMAGES SUFFERED BY
// LICENSEE AS A RESULT OF USING, RESULT OF USING, MODIFYING OR
// DISTRIBUTING THIS SOFTWARE OR ITS DERIVATIVES.

// By using or copying this Software, Licensee agrees to abide by the
// intellectual property laws, and all other applicable laws of the U.S.,
// and the terms of this license.

// You may modify, distribute, and use the software contained in this
// package under the terms of the "GNU LIBRARY GENERAL PUBLIC LICENSE"
// version 2, June 1991. A copy of this license agreement can be found in
// the file "LGPL", distributed with this archive.

// Authors: Philip A. Wilsey    philip.wilsey@ieee.org
//          Dale E. Martin      dmartin@cliftonlabs.com

//---------------------------------------------------------------------------

#include "TyvisLeftAttribute.hh"
#include "TyvisScalarTypeDefinition.hh"
#include "TyvisConstantDeclaration.hh"
#include "TyvisFunctionDeclaration.hh"
#include "tyvis.hh"

const string &
TyvisLeftAttribute::_get_cc_attribute_name() const {
  static const string retval("left");
  return retval;
}

TyvisDeclaration *
TyvisLeftAttribute::_build_implicit_declaration( TyvisTextLiteral *decl_name,
						 TyvisTypeDefinition *decl_type ){
  // This code was blatantly stolen from TyvisRightAttribute - fixes need 
  // to occur there as well.
  TyvisDeclaration *retval;

  if( _get_suffix() == NULL ){
    TyvisConstantDeclaration *const_decl = _build_constant_declaration( decl_name, decl_type );

    ASSERT( decl_type->is_scalar_type() == TRUE );

    const_decl->IIRBase_ConstantDeclaration::set_value( dynamic_cast<TyvisScalarTypeDefinition *>(decl_type)->_get_base_type_left() );

    retval = const_decl;
  }
  else{
    TyvisFunctionDeclaration *func_decl = _build_function_declaration( decl_name, decl_type );

    retval = func_decl;
  }

  return retval;
}

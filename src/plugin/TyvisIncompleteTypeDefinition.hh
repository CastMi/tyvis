#ifndef TYVIS_INCOMPLETE_TYPE_DEFINITION_HH
#define TYVIS_INCOMPLETE_TYPE_DEFINITION_HH
// Copyright (c) 1996-2000 The University of Cincinnati.  
// All rights reserved.

// UC MAKES NO REPRESENTATIONS OR WARRANTIES ABOUT THE SUITABILITY OF 
// THE SOFTWARE, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
// TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
// PARTICULAR PURPOSE, OR NON-INFRINGEMENT.  UC SHALL NOT BE LIABLE
// FOR ANY DAMAGES SUFFERED BY LICENSEE AS A RESULT OF USING,
// RESULT OF USING, MODIFYING OR DISTRIBUTING THIS SOFTWARE OR ITS
// DERIVATIVES.

// By using or copying this Software, Licensee agrees to abide by the
// intellectual property laws, and all other applicable laws of the
// U.S., and the terms of this license.


// You may modify, distribute, and use the software contained in this package
// under the terms of the "GNU LIBRARY GENERAL PUBLIC LICENSE" version 2,
// June 1991. A copy of this license agreement can be found in the file
// "LGPL", distributed with this archive.

// Authors: Philip A. Wilsey	phil.wilsey@uc.edu
//          Dale E. Martin	dmartin@ece.uc.edu
//          Timothy J. McBrayer tmcbraye@ece.uc.edu
//          Malolan Chetlur     mal@ece.uc.edu
//          Krishnan Subramani  skrish@ece.uc.edu
//          Umesh Kumar V. Rajasekaran urajasek@ece.uc.edu
//          Radharamanan Radhakrishnan  ramanan@ece.uc.edu
//          Narayanan Thondugulam nthondug@ece.uc.edu

//---------------------------------------------------------------------------

#include "savant/IIRBase_IncompleteTypeDefinition.hh"
#include "TyvisTypeDefinition.hh"

/**
   This class is a SAVANT extension to the IIR.  It is used to be a
   placeholder type definition for an incomplete type declaration.
*/
class TyvisIncompleteTypeDefinition : public virtual TyvisTypeDefinition, public virtual IIRBase_IncompleteTypeDefinition {
public:
  TyvisIncompleteTypeDefinition() {}
  virtual ~TyvisIncompleteTypeDefinition() {}

  const std::string _get_cc_type_info() { abort(); return string("ERROR");}
};
#endif

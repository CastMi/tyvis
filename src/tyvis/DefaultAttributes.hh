// Copyright (c) Ohio Board of Regents and the University of Cincinnati.  
// All Rights Reserved.

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

#include "tyvis/tyvis-config.h"
#include "tyvis/Types.hh"
#include "tyvis/PhysicalLiteral.hh"
#include "tyvis/VHDLVTime.hh"

//The following structure has the default attributes of a signal 
struct DefaultAttributes {
  DefaultAttributes();
  DefaultAttributes(const DefaultAttributes&);
  DefaultAttributes& operator=(const DefaultAttributes& val);

  bool event;
  bool active;
  VHDLVTime last_event;
  VHDLVTime last_active;
  enum { INT, DOUBLE, INT64 } sigtype;
  union {
    int inttype;
    double floattype;
    LONG physicaltype;
  } last_value;
};

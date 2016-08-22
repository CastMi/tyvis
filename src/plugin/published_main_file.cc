// Copyright (c) 2001 Clifton Labs, Inc.
// All rights reserved. 

// CLIFTON LABS MAKES NO REPRESENTATIONS OR WARRANTIES ABOUT THE
// SUITABILITY OF THE SOFTWARE, EITHER EXPRESS OR IMPLIED, INCLUDING BUT
// NOT LIMITED TO THE IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
// PARTICULAR PURPOSE, OR NON-INFRINGEMENT.  CLIFTON LABS SHALL NOT BE
// LIABLE FOR ANY DAMAGES SUFFERED BY LICENSEE AS A RESULT OF USING,
// MODIFYING OR DISTRIBUTING THIS SOFTWARE OR ITS DERIVATIVES.

// By using or copying this Software, Licensee agrees to abide by the
// intellectual property laws, and all other applicable laws of the
// U.S., and the terms of this license.


// You may modify, distribute, and use the software contained in this package
// under the terms of the "GNU LIBRARY GENERAL PUBLIC LICENSE" version 2,
// June 1991. A copy of this license agreement can be found in the file
// "LGPL", distributed with this archive.

// Author: Dale E. Martin          dmartin@cliftonlabs.com

//---------------------------------------------------------------------------

#include "published_main_file.hh"
#include "savant/IIR.hh"

published_main_file::published_main_file( const string &directory,
      IIR *node,
      ios::openmode mode ) :
   published_cc_file( directory, 
         "main",
         node,
         mode ) {
      add_include( "warped.hpp", true );
      add_include( "tclap/ValueArg.h", true );
      *this << "int" << NL()
         << OS("main( int argc, char **argv ){")
         << "// In this vector you can add custom parameters" << NL()
         << "std::vector<TCLAP::Arg*> args;" << NL()
         << OS("warped::Simulation sim {")
         << "\"Digital Simulation\", argc, argv, args"
         << CS("};")
         << "std::vector<warped::LogicalProcess*> object_pointers;" << NL();
   }

published_main_file::~published_main_file(){
   *this << "sim.simulate(object_pointers);"
      << CS("}");
}

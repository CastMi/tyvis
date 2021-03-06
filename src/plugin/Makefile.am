# Process this file with automake to produce Makefile.in

# Copyright (c) 2003-2007 The University of Cincinnati.  
# All rights reserved.

# UC MAKES NO REPRESENTATIONS OR WARRANTIES ABOUT THE SUITABILITY OF THE
# SOFTWARE, EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
# IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE,
# OR NON-INFRINGEMENT.  UC SHALL NOT BE LIABLE FOR ANY DAMAGES SUFFERED BY
# LICENSEE AS A RESULT OF USING, RESULT OF USING, MODIFYING OR DISTRIBUTING
# THIS SOFTWARE OR ITS DERIVATIVES.

# By using or copying this Software, Licensee agrees to abide by the
# intellectual property laws, and all other applicable laws of the U.S.,
# and the terms of this license.

# You may modify, distribute, and use the software contained in this
# package under the terms of the "GNU LIBRARY GENERAL PUBLIC LICENSE"
# version 2, June 1991. A copy of this license agreement can be found in
# the file "LGPL", distributed with this archive.

# Authors: Philip A. Wilsey	philip.wilsey@ieee.org
# 	    Dale E. Martin	dmartin@cliftonlabs.com

#---------------------------------------------------------------------------

include $(top_srcdir)/Makefile.am.common

lib_LTLIBRARIES = libtyvisplugin.la

libtyvisplugin_la_LDFLAGS = \
	-module \
	-avoid-version

libtyvisplugin_la_LIBADD = \
	-laire \
	-lsavantutils \
	-lclutils \
	-lltdl

libtyvisplugin_la_SOURCES = \
	Tyvis.hh \
	Tyvis.cc \
	TyvisAbsoluteOperator.cc \
	TyvisAbsoluteOperator.hh \
	TyvisAboveAttribute.cc \
	TyvisAboveAttribute.hh \
	TyvisAccessTypeDefinition.cc \
	TyvisAccessTypeDefinition.hh \
	TyvisAcrossAttribute.cc \
	TyvisAcrossAttribute.hh \
	TyvisActiveAttribute.cc \
	TyvisActiveAttribute.hh \
	TyvisActiveAttribute.hh \
	TyvisAdditionOperator.cc \
	TyvisAdditionOperator.hh \
	TyvisAdditionOperators.hh \
	TyvisAggregate.cc \
	TyvisAggregate.hh \
	TyvisAliasDeclaration.cc \
	TyvisAliasDeclaration.hh \
	TyvisAllocator.cc \
	TyvisAllocator.hh \
	TyvisAndOperator.cc \
	TyvisAndOperator.hh \
	TyvisArchitectureDeclaration.cc \
	TyvisArchitectureDeclaration.hh \
	TyvisArchitectureStatement.cc \
	TyvisArchitectureStatement.hh \
	TyvisArchitectureStatementList.cc \
	TyvisArchitectureStatementList.hh \
	TyvisArrayNatureDefinition.cc \
	TyvisArrayNatureDefinition.hh \
	TyvisArraySubnatureDefinition.cc \
        TyvisArraySubnatureDefinition.hh \
	TyvisArraySubtypeDefinition.cc \
	TyvisArraySubtypeDefinition.hh \
	TyvisArrayTypeDefinition.cc \
	TyvisArrayTypeDefinition.hh \
	TyvisAscendingAttribute.cc \
	TyvisAscendingAttribute.hh \
	TyvisAssertionStatement.cc \
	TyvisAssertionStatement.hh \
	TyvisAssociationElement.cc \
	TyvisAssociationElement.hh \
	TyvisAssociationElementByExpression.cc \
	TyvisAssociationElementByExpression.hh \
	TyvisAssociationElementOpen.cc \
	TyvisAssociationElementOpen.hh \
	TyvisAssociationList.cc \
	TyvisAssociationList.hh \
	TyvisAttribute.cc \
	TyvisAttribute.hh \
	TyvisAttributeDeclaration.cc \
	TyvisAttributeDeclaration.hh \
	TyvisAttributeSpecification.cc \
	TyvisAttributeSpecification.hh \
	TyvisAttributeSpecificationList.cc \
	TyvisAttributeSpecificationList.hh \
	TyvisBaseAttribute.cc \
	TyvisBaseAttribute.hh \
	TyvisBitStringLiteral.cc \
	TyvisBitStringLiteral.hh \
	TyvisBlockConfiguration.cc \
	TyvisBlockConfiguration.hh \
	TyvisBlockStatement.cc \
	TyvisBlockStatement.hh \
	TyvisBranchQuantityDeclaration.cc \
        TyvisBranchQuantityDeclaration.hh \
	TyvisBreakElement.cc \
	TyvisBreakElement.hh \
	TyvisBreakList.cc \
	TyvisBreakList.hh \
	TyvisBreakStatement.cc \
	TyvisBreakStatement.hh \
	TyvisCaseStatement.cc \
	TyvisCaseStatement.hh \
	TyvisCaseStatementAlternative.cc \
	TyvisCaseStatementAlternative.hh \
	TyvisCaseStatementAlternativeByChoices.cc \
	TyvisCaseStatementAlternativeByChoices.hh \
	TyvisCaseStatementAlternativeByExpression.cc \
	TyvisCaseStatementAlternativeByExpression.hh \
	TyvisCaseStatementAlternativeByOthers.cc \
	TyvisCaseStatementAlternativeByOthers.hh \
	TyvisCaseStatementAlternativeList.cc \
	TyvisCaseStatementAlternativeList.hh \
	TyvisCharacterLiteral.cc \
	TyvisCharacterLiteral.hh \
	TyvisChoice.cc \
	TyvisChoice.hh \
	TyvisChoiceList.cc \
	TyvisChoiceList.hh \
	TyvisComment.cc \
	TyvisComment.hh \
	TyvisCommentList.cc \
	TyvisCommentList.hh \
	TyvisComponentConfiguration.cc \
	TyvisComponentConfiguration.hh \
	TyvisComponentDeclaration.cc \
	TyvisComponentDeclaration.hh \
	TyvisComponentInstantiationStatement.cc \
	TyvisComponentInstantiationStatement.hh \
	TyvisConcatenationOperator.cc \
	TyvisConcatenationOperator.hh \
	TyvisConcurrentAssertionStatement.cc \
	TyvisConcurrentAssertionStatement.hh \
	TyvisConcurrentBreakStatement.cc \
	TyvisConcurrentBreakStatement.hh \
	TyvisConcurrentConditionalSignalAssignment.cc \
	TyvisConcurrentConditionalSignalAssignment.hh \
	TyvisConcurrentGenerateForStatement.cc \
	TyvisConcurrentGenerateForStatement.hh \
	TyvisConcurrentGenerateIfStatement.cc \
	TyvisConcurrentGenerateIfStatement.hh \
	TyvisConcurrentProcedureCallStatement.cc \
	TyvisConcurrentProcedureCallStatement.hh \
	TyvisConcurrentSelectedSignalAssignment.cc \
	TyvisConcurrentSelectedSignalAssignment.hh \
	TyvisConcurrentStatement.cc \
	TyvisConcurrentStatement.hh \
	TyvisConditionalWaveform.cc \
	TyvisConditionalWaveform.hh \
	TyvisConditionalWaveformList.cc \
	TyvisConditionalWaveformList.hh \
	TyvisConfigurationDeclaration.cc \
	TyvisConfigurationDeclaration.hh \
	TyvisConfigurationItem.cc \
	TyvisConfigurationItem.hh \
	TyvisConfigurationItemList.cc \
	TyvisConfigurationItemList.hh \
	TyvisConfigurationSpecification.cc \
	TyvisConfigurationSpecification.hh \
	TyvisConstantDeclaration.cc \
	TyvisConstantDeclaration.hh \
	TyvisConstantInterfaceDeclaration.cc \
	TyvisConstantInterfaceDeclaration.hh \
	TyvisContributionAttribute.cc \
	TyvisContributionAttribute.hh \
	TyvisDeclaration.cc \
	TyvisDeclaration.hh \
	TyvisDeclarationList.cc \
	TyvisDeclarationList.hh \
	TyvisDelayedAttribute.cc \
	TyvisDelayedAttribute.hh \
	TyvisDesignFile.cc \
	TyvisDesignFile.hh \
	TyvisDesignFileList.cc \
	TyvisDesignFileList.hh \
	TyvisDesignUnitList.cc \
	TyvisDesignUnitList.hh \
	TyvisDesignator.cc \
	TyvisDesignator.hh \
	TyvisDesignatorByAll.cc \
	TyvisDesignatorByAll.hh \
	TyvisDesignatorByOthers.cc \
	TyvisDesignatorByOthers.hh \
	TyvisDesignatorExplicit.cc \
	TyvisDesignatorExplicit.hh \
	TyvisDesignatorList.cc \
	TyvisDesignatorList.hh \
	TyvisDisconnectSpecification.cc \
	TyvisDisconnectSpecification.hh \
	TyvisDivisionOperator.cc \
	TyvisDivisionOperator.hh \
	TyvisDotAttribute.cc \
	TyvisDotAttribute.hh \
	TyvisDrivingAttribute.cc \
	TyvisDrivingAttribute.hh \
	TyvisDrivingValueAttribute.cc \
	TyvisDrivingValueAttribute.hh \
	TyvisDyadicOperator.cc \
	TyvisDyadicOperator.hh \
	TyvisElementDeclaration.cc \
	TyvisElementDeclaration.hh \
	TyvisElementDeclarationList.cc \
	TyvisElementDeclarationList.hh \
	TyvisElsif.cc \
	TyvisElsif.hh \
	TyvisEntityClassEntry.cc \
	TyvisEntityClassEntry.hh \
	TyvisEntityClassEntryList.cc \
	TyvisEntityClassEntryList.hh \
	TyvisEntityDeclaration.cc \
	TyvisEntityDeclaration.hh \
	TyvisEntityNameList.cc \
	TyvisEntityNameList.hh \
	TyvisEnumerationLiteral.cc \
	TyvisEnumerationLiteral.hh \
	TyvisEnumerationLiteralList.cc \
	TyvisEnumerationLiteralList.hh \
	TyvisEnumerationSubtypeDefinition.cc \
	TyvisEnumerationSubtypeDefinition.hh \
	TyvisEnumerationTypeDefinition.cc \
	TyvisEnumerationTypeDefinition.hh \
	TyvisEqualityOperator.cc \
	TyvisEqualityOperator.hh \
	TyvisEventAttribute.cc \
	TyvisEventAttribute.hh \
	TyvisExitStatement.cc \
	TyvisExitStatement.hh \
	TyvisExponentiationOperator.cc \
	TyvisExponentiationOperator.hh \
	TyvisExpression.cc \
	TyvisExpression.hh \
	TyvisFileDeclaration.cc \
	TyvisFileDeclaration.hh \
	TyvisFileInterfaceDeclaration.cc \
	TyvisFileInterfaceDeclaration.hh \
	TyvisFileTypeDefinition.cc \
	TyvisFileTypeDefinition.hh \
	TyvisFloatingPointLiteral.cc \
	TyvisFloatingPointLiteral.hh \
	TyvisFloatingPointLiteral32.cc \
	TyvisFloatingPointLiteral32.hh \
	TyvisFloatingPointLiteral64.cc \
	TyvisFloatingPointLiteral64.hh \
	TyvisFloatingSubtypeDefinition.cc \
	TyvisFloatingSubtypeDefinition.hh \
	TyvisFloatingTypeDefinition.cc \
	TyvisFloatingTypeDefinition.hh \
	TyvisForLoopStatement.cc \
	TyvisForLoopStatement.hh \
	TyvisFreeQuantityDeclaration.cc \
	TyvisFreeQuantityDeclaration.hh \
	TyvisFunctionCall.cc \
	TyvisFunctionCall.hh \
	TyvisFunctionDeclaration.cc \
	TyvisFunctionDeclaration.hh \
	TyvisGenericList.cc \
	TyvisGenericList.hh \
	TyvisGreaterThanOperator.cc \
	TyvisGreaterThanOperator.hh \
	TyvisGreaterThanOrEqualOperator.cc \
	TyvisGreaterThanOrEqualOperator.hh \
	TyvisGroupConstituent.cc \
	TyvisGroupConstituent.hh \
	TyvisGroupDeclaration.cc \
	TyvisGroupDeclaration.hh \
	TyvisGroupTemplateDeclaration.cc \
	TyvisGroupTemplateDeclaration.hh \
	TyvisHighAttribute.cc \
	TyvisHighAttribute.hh \
	TyvisIdentifier.cc \
	TyvisIdentifier.hh \
	TyvisIdentifierList.cc \
	TyvisIdentifierList.hh \
	TyvisIdentityOperator.cc \
	TyvisIdentityOperator.hh \
	TyvisIfStatement.cc \
	TyvisIfStatement.hh \
	TyvisImageAttribute.cc \
	TyvisImageAttribute.hh \
	TyvisIncompleteTypeDefinition.hh \
	TyvisIndexedName.cc \
	TyvisIndexedName.hh \
	TyvisInequalityOperator.cc \
	TyvisInequalityOperator.hh \
	TyvisInstanceNameAttribute.cc \
	TyvisInstanceNameAttribute.hh \
	TyvisIntegerLiteral.cc \
	TyvisIntegerLiteral.hh \
	TyvisIntegerLiteral32.cc \
	TyvisIntegerLiteral32.hh \
	TyvisIntegerLiteral64.cc \
	TyvisIntegerLiteral64.hh \
	TyvisIntegerSubtypeDefinition.cc \
	TyvisIntegerSubtypeDefinition.hh \
	TyvisIntegerTypeDefinition.cc \
	TyvisIntegerTypeDefinition.hh \
	TyvisInterfaceDeclaration.cc \
	TyvisInterfaceDeclaration.hh \
	TyvisInterfaceList.cc \
	TyvisInterfaceList.hh \
	TyvisLabel.cc \
	TyvisLabel.hh \
	TyvisLastActiveAttribute.cc \
	TyvisLastActiveAttribute.hh \
	TyvisLastEventAttribute.cc \
	TyvisLastEventAttribute.hh \
	TyvisLastValueAttribute.cc \
	TyvisLastValueAttribute.hh \
	TyvisLeftAttribute.cc \
	TyvisLeftAttribute.hh \
	TyvisLeftOfAttribute.cc \
	TyvisLeftOfAttribute.hh \
	TyvisLengthAttribute.cc \
	TyvisLengthAttribute.hh \
	TyvisLessThanOperator.cc \
	TyvisLessThanOperator.hh \
	TyvisLessThanOrEqualOperator.cc \
	TyvisLessThanOrEqualOperator.hh \
	TyvisLibraryClause.cc \
	TyvisLibraryClause.hh \
	TyvisLibraryDeclaration.cc \
	TyvisLibraryDeclaration.hh \
	TyvisLibraryUnit.cc \
	TyvisLibraryUnit.hh \
	TyvisLibraryUnitList.cc \
	TyvisLibraryUnitList.hh \
	TyvisList.cc \
	TyvisList.hh \
	TyvisLiteral.cc \
	TyvisLiteral.hh \
	TyvisLogicalOperators.hh \
	TyvisLowAttribute.cc \
	TyvisLowAttribute.hh \
	TyvisLTFAttribute.cc \
	TyvisLTFAttribute.hh \
	TyvisModulusOperator.cc \
	TyvisModulusOperator.hh \
	TyvisMonadicOperator.cc \
	TyvisMonadicOperator.hh \
	TyvisMultiplicationOperator.cc \
	TyvisMultiplicationOperator.hh \
	TyvisMultiplicationOperators.cc \
	TyvisMultiplicationOperators.hh \
	TyvisName.cc \
	TyvisName.hh \
	TyvisNameList.cc \
	TyvisNameList.hh \
	TyvisNandOperator.cc \
	TyvisNandOperator.hh \
	TyvisNatureDeclaration.cc \
        TyvisNatureDeclaration.hh \
        TyvisNatureDefinition.cc \
        TyvisNatureDefinition.hh \
	TyvisNegationOperator.cc \
	TyvisNegationOperator.hh \
	TyvisNextStatement.cc \
	TyvisNextStatement.hh \
	TyvisNorOperator.cc \
	TyvisNorOperator.hh \
	TyvisNotOperator.cc \
	TyvisNotOperator.hh \
	TyvisNullStatement.cc \
	TyvisNullStatement.hh \
	TyvisObjectDeclaration.cc \
	TyvisObjectDeclaration.hh \
	TyvisOperator.cc \
	TyvisOperator.hh \
	TyvisOrOperator.cc \
	TyvisOrOperator.hh \
	TyvisOthersInitialization.cc \
	TyvisOthersInitialization.hh \
	TyvisPackageBodyDeclaration.cc \
	TyvisPackageBodyDeclaration.hh \
	TyvisPackageDeclaration.cc \
	TyvisPackageDeclaration.hh \
	TyvisPathNameAttribute.cc \
	TyvisPathNameAttribute.hh \
	TyvisPhysicalLiteral.cc \
	TyvisPhysicalLiteral.hh \
	TyvisPhysicalSubtypeDefinition.cc \
	TyvisPhysicalSubtypeDefinition.hh \
	TyvisPhysicalTypeDefinition.cc \
	TyvisPhysicalTypeDefinition.hh \
	TyvisPhysicalUnit.cc \
	TyvisPhysicalUnit.hh \
	TyvisPortList.cc \
	TyvisPortList.hh \
	TyvisPosAttribute.cc \
	TyvisPosAttribute.hh \
	TyvisPredAttribute.cc \
	TyvisPredAttribute.hh \
	TyvisProcedureCallStatement.cc \
	TyvisProcedureCallStatement.hh \
	TyvisProcedureDeclaration.cc \
	TyvisProcedureDeclaration.hh \
	TyvisProcedureReturnTypeDefinition.hh \
	TyvisProcessStatement.cc \
	TyvisProcessStatement.hh \
	TyvisQualifiedExpression.cc \
	TyvisQualifiedExpression.hh \
	TyvisQuantityDeclaration.cc \
	TyvisQuantityDeclaration.hh \
	TyvisQuietAttribute.cc \
	TyvisQuietAttribute.hh \
	TyvisROLOperator.cc \
	TyvisROLOperator.hh \
	TyvisROROperator.cc \
	TyvisROROperator.hh \
	TyvisRangeAttribute.cc \
	TyvisRangeAttribute.hh \
	TyvisRangeTypeDefinition.cc \
	TyvisRangeTypeDefinition.hh \
	TyvisRecordTypeDefinition.cc \
	TyvisRecordTypeDefinition.hh \
	TyvisReferenceAttribute.cc \
	TyvisReferenceAttribute.hh \
	TyvisRelationalOperators.cc \
	TyvisRelationalOperators.hh \
	TyvisRemainderOperator.cc \
	TyvisRemainderOperator.hh \
	TyvisReportStatement.cc \
	TyvisReportStatement.hh \
	TyvisReturnStatement.cc \
	TyvisReturnStatement.hh \
	TyvisReverseRangeAttribute.cc \
	TyvisReverseRangeAttribute.hh \
	TyvisRightAttribute.cc \
	TyvisRightAttribute.hh \
	TyvisRightOfAttribute.cc \
	TyvisRightOfAttribute.hh \
	TyvisSLAOperator.cc \
	TyvisSLAOperator.hh \
	TyvisSLLOperator.cc \
	TyvisSLLOperator.hh \
	TyvisSRAOperator.cc \
	TyvisSRAOperator.hh \
	TyvisSRLOperator.cc \
	TyvisSRLOperator.hh \
	TyvisScalarNatureDefinition.cc \
        TyvisScalarNatureDefinition.hh \
	TyvisScalarTypeDefinition.cc \
	TyvisScalarTypeDefinition.hh \
	TyvisSelectedName.cc \
	TyvisSelectedName.hh \
	TyvisSelectedNameByAll.cc \
	TyvisSelectedNameByAll.hh \
	TyvisSelectedWaveform.cc \
	TyvisSelectedWaveform.hh \
	TyvisSelectedWaveformList.cc \
	TyvisSelectedWaveformList.hh \
	TyvisSensitizedProcessStatement.cc \
	TyvisSensitizedProcessStatement.hh \
	TyvisSequentialStatement.cc \
	TyvisSequentialStatement.hh \
	TyvisSequentialStatementList.cc \
	TyvisSequentialStatementList.hh \
	TyvisSharedVariableDeclaration.cc \
	TyvisSharedVariableDeclaration.hh \
	TyvisShiftOperators.cc \
	TyvisShiftOperators.hh \
	TyvisSignalAssignmentStatement.cc \
	TyvisSignalAssignmentStatement.hh \
	TyvisSignalDeclaration.cc \
	TyvisSignalDeclaration.hh \
	TyvisSignalInterfaceDeclaration.cc \
	TyvisSignalInterfaceDeclaration.hh \
	TyvisSignature.cc \
	TyvisSignature.hh \
	TyvisSimpleName.cc \
	TyvisSimpleName.hh \
	TyvisSimpleNameAttribute.cc \
	TyvisSimpleNameAttribute.hh \
	TyvisSimpleSimultaneousStatement.cc \
	TyvisSimpleSimultaneousStatement.hh \
	TyvisSimultaneousElsif.cc \
	TyvisSimultaneousElsif.hh \
	TyvisSimultaneousIfStatement.cc \
	TyvisSimultaneousIfStatement.hh \
	TyvisSimultaneousStatement.cc \
	TyvisSimultaneousStatement.hh \
	TyvisSliceName.cc \
	TyvisSliceName.hh \
	TyvisSourceQuantityDeclaration.cc \
        TyvisSourceQuantityDeclaration.hh \
	TyvisStableAttribute.cc \
	TyvisStableAttribute.hh \
	TyvisStatement.cc \
	TyvisStatement.hh \
	TyvisString.hh \
	TyvisStringLiteral.cc \
	TyvisStringLiteral.hh \
	TyvisSubprogramDeclaration.cc \
	TyvisSubprogramDeclaration.hh \
	TyvisSubtractionOperator.cc \
	TyvisSubtractionOperator.hh \
	TyvisSubtypeDeclaration.cc \
	TyvisSubtypeDeclaration.hh \
	TyvisSuccAttribute.cc \
	TyvisSuccAttribute.hh \
	TyvisTerminalDeclaration.cc \
	TyvisTerminalDeclaration.hh \
	TyvisTerminalInterfaceDeclaration.cc \
	TyvisTerminalInterfaceDeclaration.hh \
	TyvisTextLiteral.cc \
	TyvisTextLiteral.hh \
	TyvisThroughAttribute.cc \
	TyvisThroughAttribute.hh \
	TyvisTransactionAttribute.cc \
	TyvisTransactionAttribute.hh \
	TyvisTuple.cc \
	TyvisTuple.hh \
	TyvisTypeConversion.cc \
	TyvisTypeConversion.hh \
	TyvisTypeDeclaration.cc \
	TyvisTypeDeclaration.hh \
	TyvisTypeDefinition.cc \
	TyvisTypeDefinition.hh \
	TyvisUnitList.cc \
	TyvisUnitList.hh \
	TyvisUseClause.cc \
	TyvisUseClause.hh \
	TyvisUserAttribute.cc \
	TyvisUserAttribute.hh \
	TyvisValAttribute.cc \
	TyvisValAttribute.hh \
	TyvisValueAttribute.cc \
	TyvisValueAttribute.hh \
	TyvisVariableAssignmentStatement.cc \
	TyvisVariableAssignmentStatement.hh \
	TyvisVariableDeclaration.cc \
	TyvisVariableDeclaration.hh \
	TyvisVariableInterfaceDeclaration.cc \
	TyvisVariableInterfaceDeclaration.hh \
	TyvisWaitStatement.cc \
	TyvisWaitStatement.hh \
	TyvisWaveformElement.cc \
	TyvisWaveformElement.hh \
	TyvisWaveformList.cc \
	TyvisWaveformList.hh \
	TyvisWhileLoopStatement.cc \
	TyvisWhileLoopStatement.hh \
	TyvisXnorOperator.cc \
	TyvisXnorOperator.hh \
	TyvisXorOperator.cc \
	TyvisXorOperator.hh \
	TyvisZTFAttribute.cc \
	TyvisZTFAttribute.hh \
	tyvis_interface.cc \
	tyvis_interface.hh \
	tyvis_plugin_class_factory.cc \
	tyvis_plugin_class_factory.hh \
	TyvisStandardPackage.hh \
	PublishData.cc \
	PublishData.hh \
	publish_modifiers.cc \
	publish_modifiers.hh \
	published_cc_file.cc \
	published_cc_file.hh \
	published_file.cc \
	published_file.hh \
	published_header_file.cc \
	published_header_file.hh \
	published_makefile.hh \
	published_makefile.cc

IEEE_INPUT_DIR = $(libdir)/savant/lib/ieee._savant_lib

IEEE_VHDL_FILES = \
	$(IEEE_INPUT_DIR)/std_logic_1164.vhd \
	$(IEEE_INPUT_DIR)/timing_p.vhd \
	$(IEEE_INPUT_DIR)/timing_b.vhd \
	$(IEEE_INPUT_DIR)/numeric_bit.vhd \
	$(IEEE_INPUT_DIR)/numeric_std.vhd \
	$(IEEE_INPUT_DIR)/prmtvs_p.vhd \
	$(IEEE_INPUT_DIR)/prmtvs_b.vhd \
	$(IEEE_INPUT_DIR)/memory_p.vhd \
	$(IEEE_INPUT_DIR)/memory_b.vhd \
	$(IEEE_INPUT_DIR)/std_logic_unsigned.vhd \
	$(IEEE_INPUT_DIR)/std_logic_signed.vhd \
	$(IEEE_INPUT_DIR)/std_logic_textio.vhd \
	$(IEEE_INPUT_DIR)/attributes.vhd \
	$(IEEE_INPUT_DIR)/std_logic_misc.vhd \
	$(IEEE_INPUT_DIR)/math_complex.vhd \
	$(IEEE_INPUT_DIR)/math_real.vhd

IEEE_OUTPUT_DIR = $(top_srcdir)/src/ieee._savant_lib

# all-local: $(IEEE_OUTPUT_DIR)

#clean-local:
#	rm -rf $(IEEE_OUTPUT_DIR)

$(IEEE_OUTPUT_DIR): $(bindir)/scram libtyvisplugin.la
	SAVANTROOT=$(bindir) $(bindir)/scram --design-library-name ieee --publish-cc  $(IEEE_VHDL_FILES)

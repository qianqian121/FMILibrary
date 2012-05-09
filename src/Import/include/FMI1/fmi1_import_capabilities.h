/*
    Copyright (C) 2012 Modelon AB

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, version 3 of the License.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef FMI1_IMPORT_CAPABILITIES_H
#define FMI1_IMPORT_CAPABILITIES_H

#ifdef __cplusplus
extern "C" {
#endif

#include "FMI1/fmi1_import.h"
	/**
		\file fmi1_import_capabilities.h
		Functions to retrieve capability flags.
	*/
	/**
	\addtogroup fmi1_import
	@{
	\addtogroup fmi1_import_capabilities Functions to retrieve capability flags.
	The functions accept a pointer to ::fmi1_import_capabilities_t returned by fmi1_import_get_capabilities().
	They return the flags as specified by the FMI 1.0 standard. Default values are returned for model-exachange FMUs.
	@}
	\addtogroup fmi1_import_capabilities
	@{
	*/
	/** \brief Retrieve  canHandleVariableCommunicationStepSize flag. */
FMILIB_EXPORT int fmi1_import_get_canHandleVariableCommunicationStepSize(fmi1_import_capabilities_t* );
	/** \brief Retrieve  canHandleEvents flag. */
FMILIB_EXPORT int fmi1_import_get_canHandleEvents(fmi1_import_capabilities_t* );
	/** \brief Retrieve  canRejectSteps flag. */
FMILIB_EXPORT int fmi1_import_get_canRejectSteps(fmi1_import_capabilities_t* );
	/** \brief Retrieve  canInterpolateInputs flag. */
FMILIB_EXPORT int fmi1_import_get_canInterpolateInputs(fmi1_import_capabilities_t* );
	/** \brief Retrieve  maxOutputDerivativeOrder. */
FMILIB_EXPORT unsigned int fmi1_import_get_maxOutputDerivativeOrder(fmi1_import_capabilities_t* );
	/** \brief Retrieve  canRunAsynchronuously flag. */
FMILIB_EXPORT int fmi1_import_get_canRunAsynchronuously(fmi1_import_capabilities_t* );
	/** \brief Retrieve  canSignalEvents flag. */
FMILIB_EXPORT int fmi1_import_get_canSignalEvents(fmi1_import_capabilities_t* );
	/** \brief Retrieve  canBeInstantiatedOnlyOncePerProcess flag. */
FMILIB_EXPORT int fmi1_import_get_canBeInstantiatedOnlyOncePerProcess(fmi1_import_capabilities_t* );
	/** \brief Retrieve  canNotUseMemoryManagementFunctions flag. */
FMILIB_EXPORT int fmi1_import_get_canNotUseMemoryManagementFunctions(fmi1_import_capabilities_t* );
/** 
@}
*/

#ifdef __cplusplus
}
#endif
#endif /* FMI1_IMPORT_CAPABILITIES_H */

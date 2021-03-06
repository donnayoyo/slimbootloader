/** @file

  Copyright (c) 2016, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef _SOC_INIT_LIB_H_

/**
  Enables the execution by writing to the MSR.
**/
VOID
EnableCodeExecution (
  VOID
  );

/**
  Disable watch dog timer (Halt TCO timer).
**/
VOID
DisableWatchDogTimer (
  VOID
  );

/**
  Get size of global nvs area.

  @param[in] none

  @retval    UINT32     Size of global nvs area.

**/
UINT32
EFIAPI
GetAcpiGnvsSize (
  VOID
  );

/**
 Update GPIO address and length to global NVS data.

 @param [in] GnvsIn Pointer to Global NVS data.
 **/
VOID
EFIAPI
SocUpdateAcpiGnvs (
  IN VOID  *Gnvs
  );

/**
  Get cpu tsc frequency.

  @retval   cpu TSC frequency
**/
UINT32
EFIAPI
GetCpuTscFreqency (
  VOID
  );

/**
  Update reset reason.
**/
VOID
EFIAPI
UpdateResetReason (
  VOID
  );

#endif

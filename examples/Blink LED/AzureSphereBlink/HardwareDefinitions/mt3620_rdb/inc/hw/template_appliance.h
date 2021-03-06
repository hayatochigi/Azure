/* Copyright (c) Microsoft Corporation. All rights reserved.
   Licensed under the MIT License. */

// This file defines the mapping from the MT3620 reference development board (RDB) to the
// 'template appliance' abstraction used by the templates.
// Some peripherals are on-board on the RDB, while other peripherals must be attached
// externally if needed.
// See https://aka.ms/AzureSphereHardwareDefinitions for more information on how to use
// hardware abstractions to enable apps to work across multiple hardware variants.

// This file is autogenerated from ../../template_appliance.json.  Do not edit it directly.

#pragma once
#include "mt3620_rdb.h"

// MT3620 RDB: LED 1 (red channel)
#define LED1_RED MT3620_RDB_LED1_RED

// MT3620 RDB: LED 2 (green channel)
#define LED2_GREEN MT3620_RDB_LED2_GREEN

// MT3620 RDB: LED 3 (blue channel)
#define LED3_BLUE MT3620_RDB_LED3_BLUE


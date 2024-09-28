/******************************************************************************\
**
**  This file is part of the Poseidon Kernel, and is made available under
**  the terms of the GNU General Public License version 2.
**
**  Copyright (C) 2018-2024 - The Poseidon Authors
**
\******************************************************************************/

#pragma once

#define CPU_TRAMPOLINE_START    (0x10000)

void start_ap(void);
void cpu_start_all_aps(void);
void cpu_remap_bsp(void);

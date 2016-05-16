//
// Created by pengk on 2016/5/6.
//

#ifndef DROIDANTI_ANTI_DEBUG_H
#define DROIDANTI_ANTI_DEBUG_H

#include "common.h"

pid_t anti_debug_getTracePid();

bool anti_debug_parent();

bool anti_debug_tracepid();

bool anti_debug_ptrace(void);

bool anti_debug_ptrace_traceme(void);

#endif //DROIDANTI_ANTI_DEBUG_H

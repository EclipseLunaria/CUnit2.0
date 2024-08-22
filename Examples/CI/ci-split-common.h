/*
 * Fixture funcs that can be shared and reused
 */

#include <stdio.h>
#include "CUnit/CUnit.h"

#ifndef CUNIT_CI_SPLIT_COMMON_H
#define CUNIT_CI_SPLIT_COMMON_H

void shared_setup_function(void);
int shared_setup_suite(void);

#endif

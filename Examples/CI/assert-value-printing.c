/**
 * Simple CICD example with no setup/teardown
 *
 *  CUnit - A Unit testing framework library for C.
 *  Copyright (C) 2001       Anil Kumar
 *  Copyright (C) 2004-2006  Anil Kumar, Jerry St.Clair
 *  Copyright (C) 2024       Ian Norton
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 */

#include "CUnit/CUnitCI.h"


static void test_simple_eq1(void) {
    CU_ASSERT_EQUAL_VALUE_TYPE(1, 1, int, "%d");
}

static void test_simple_cmp1(void) {
    CU_ASSERT_EQUAL_CMP_TYPE("red", "red", strcmp, char *, "%s");
}

CUNIT_CI_RUN(CU_MAIN_EXE_NAME,
             CUNIT_CI_TEST(test_simple_eq1),
             CUNIT_CI_TEST(test_simple_cmp1)
             );

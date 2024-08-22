#include "CUnit/CUnitCI.h"
#include "ci-split-common.h"


static void test_red_foo(void) {
    fprintf(stderr, "foo is red\n");
}

static void test_red_baa(void) {
    fprintf(stderr, "baa is red\n");
}

CU_CI_AUTO_SUITE(suite_red,
            CUNIT_CI_TEST(test_red_baa),
            CUNIT_CI_TEST(test_red_foo)
            )

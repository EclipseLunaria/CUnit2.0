#include "CUnit/CUnitCI.h"
#include "ci-split-common.h"

CU_TEST_SETUP() { shared_setup_function(); }
CU_SUITE_SETUP() { return shared_setup_suite(); }


static void test_green_foo(void) {
    fprintf(stderr, "foo is green\n");
}

static void test_green_baa(void) {
    fprintf(stderr, "baa is green\n");
}


CU_CI_AUTO_SUITE(suite_green,
            CUNIT_CI_TEST(test_green_baa),
            CUNIT_CI_TEST(test_green_foo)
            );

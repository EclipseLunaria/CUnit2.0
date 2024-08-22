#include "CUnit/CUnitCI.h"
#include "ci-split-common.h"

static void test_blue_foo(void) {
  fprintf(stderr, "foo is blue\n");
}

CU_CI_AUTO_SUITE(suite_blue,
            CUNIT_CI_TEST(test_blue_foo)
)

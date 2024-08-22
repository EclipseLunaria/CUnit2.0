#include "ci-split-suite_orange.h"


CU_TEST_SETUP() {
  fprintf(stderr, "open the bottle\n");
}

static void test_orange_juice(void) {
  fprintf(stderr, "drink orange\n");
}

CU_CI_SUITE(suite_orange,
            CUNIT_CI_TEST(test_orange_juice)
            )

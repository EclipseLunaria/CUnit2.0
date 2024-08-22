#include "ci-split-suite_yellow.h"

CU_SUITE_SETUP() {
  fprintf(stderr, "open picnic box..\n");
  return CUE_SUCCESS;
}

static void test_yellow_jacket(void) {
  fprintf(stderr, "Buzz Buzz\n");
}

static void test_yellow_cheese(void) {
  fprintf(stderr, "Yum\n");
}

CU_CI_SUITE(suite_yellow,
            CUNIT_CI_TEST(test_yellow_jacket),
            CUNIT_CI_TEST(test_yellow_cheese)
            )

/*
 * Demonstrate explicit registration of tests in other object files
 */
#include "CUnit/CUnitCI.h"
#include "ci-split-suite_orange.h"
#include "ci-split-suite_yellow.h"


int main(int argc, char** argv)
{
  CU_CI_FIXTURE_QUIET();
  CU_CI_USE_SUITE(suite_orange);
  CU_CI_USE_SUITE(suite_yellow);
  return CU_CI_RUN_SUITES();
}

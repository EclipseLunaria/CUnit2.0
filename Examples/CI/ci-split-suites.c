#include "CUnit/CUnitCI.h"
#include "ci-split-suite_green.h"
#include "ci-split-suite_red.h"


int main(int argc, char** argv)
{
    CU_CI_USE_SUITE(suite_green);
    CU_CI_USE_SUITE(suite_red);
    return CU_CI_RUN_SUITES();
}

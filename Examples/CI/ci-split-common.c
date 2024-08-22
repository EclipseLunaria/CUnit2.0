#include "ci-split-common.h"

void shared_setup_function(void) {
    fprintf(stderr, "about to run test %s\n", CU_get_current_test()->pName);
}

int shared_setup_suite(void) {
    fprintf(stderr, "about to run suite %s\n", CU_get_current_suite()->pName);
    return CUE_SUCCESS;
}

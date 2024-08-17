//
// Created by Ian Norton on 2024-08-17.
//

#include "ci-split-suite_red.h"

static void test_red_foo(void) {
    fprintf(stderr, "foo is red\n");
}

static void test_red_baa(void) {
    fprintf(stderr, "baa is red\n");
}


CU_CI_SUITE(suite_red,
            CU_NAMED_TEST(test_red_baa),
            CU_NAMED_TEST(test_red_foo),
            );

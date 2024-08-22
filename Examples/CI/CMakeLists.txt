project(CI-Examples C)

add_executable(cicd-pass-setupfuncs
        cicd-pass-setupfuncs.c
        )
target_link_libraries(
        cicd-pass-setupfuncs
        cunit
)

add_executable(cicd-pass-plain
        cicd-pass-plain.c
        )
target_link_libraries(
        cicd-pass-plain
        cunit
)

add_executable(cicd-multi-suite
        cicd-multi-suite.c
        )
target_link_libraries(
        cicd-multi-suite
        cunit
)

add_executable(cicd-skips
        cicd-skips.c
        )
target_link_libraries(
        cicd-skips
        cunit
)

add_executable(cicd-skip-suite
        cicd-skip-suite.c
        )
target_link_libraries(
        cicd-skip-suite
        cunit
)

add_executable(assert-value-printing
        assert-value-printing.c
)
target_link_libraries(
        assert-value-printing
        cunit
)

add_test(NAME
  cicd-pass-plain COMMAND $<TARGET_FILE:cicd-pass-plain>)
add_test(NAME
  cicd-multi-suite COMMAND $<TARGET_FILE:cicd-multi-suite>)
add_test(NAME
  cicd-pass-setupfuncs COMMAND $<TARGET_FILE:cicd-pass-setupfuncs>)
add_test(NAME
  cicd-skips COMMAND $<TARGET_FILE:cicd-skips>)
add_test(NAME
  cicd-skip-suite COMMAND $<TARGET_FILE:cicd-skip-suite>)
add_test(NAME
  assert-value-printing COMMAND $<TARGET_FILE:assert-value-printing>)

add_executable(ci-split-suites
        ci-split-common.c
        ci-split-suite_green.c
        ci-split-suite_red.c
        ci-split-suite_blue.c
        ci-split-suites.c
)
target_link_libraries(ci-split-suites
        cunit
)
add_test(NAME
  ci-split-suites COMMAND
    $<TARGET_FILE:ci-split-suites>)

add_executable(ci-split-noauto
  ci-split-common.c
  ci-split-suite_orange.c
  ci-split-suite_yellow.c
  ci-split-noauto.c
)
target_link_libraries(ci-split-noauto
  cunit
)
add_test(NAME
  ci-split-noauto COMMAND
  $<TARGET_FILE:ci-split-noauto>)

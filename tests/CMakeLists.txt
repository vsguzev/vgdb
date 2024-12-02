add_executable(${PROJECT_NAME}_tests test_main.cpp)

target_link_libraries(${PROJECT_NAME}_tests
  PRIVATE
    ${PROJECT_NAME}
    fibonacci
    gtest
    gtest_main
    gmock
)

enable_testing()
add_test(NAME ${PROJECT_NAME}_tests COMMAND ${PROJECT_NAME}_tests)

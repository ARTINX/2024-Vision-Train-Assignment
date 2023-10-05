add_library(simple_string "String.cpp")

add_executable(string_test "StringTest.cpp")

target_link_libraries(string_test PRIVATE simple_string)

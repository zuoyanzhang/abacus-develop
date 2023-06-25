# add_subdirectory(integrate)
# if(ENABLE_DEEPKS)
# 	add_subdirectory(deepks)
# endif()

#project
project(tests)
#cmake最低版本
cmake_minimum_required(VERSION 3.0)
IF(BUILD_TESTING)
	add_subdirectory(test)
endif()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
add_executable(result ./test/test.cpp)
target_link_libraries(result gtest gtest_main)
# add_test(
# 	TARGET test
# 	SOURCES test.cpp
# )


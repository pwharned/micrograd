cmake_minimum_required(VERSION 3.10)
project(minigradcpp)

enable_testing()


set( SOURCE_PATH "${PROJECT_SOURCE_DIR}/src" )
set( INCLUDE_PATH "${PROJECT_SOURCE_DIR}/include" )

set(TEST_PATH "${PROJECT_SOURCE_DIR}/test")

file(GLOB_RECURSE TPPS "${TEST_PATH}/*.cpp")

file( GLOB_RECURSE HPPS "${INCLUDE_PATH}/*.hpp" )
file( GLOB_RECURSE CPPS "${SOURCE_PATH}/*.cpp" )

add_executable(tests ${TPPS} ${HPPS})
add_test(NAME MyTest COMMAND tests)

add_executable(main ${CPPS} ${HPPS} )


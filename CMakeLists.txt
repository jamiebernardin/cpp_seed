cmake_minimum_required(VERSION 3.7)
project(cpp_seed)

set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES src/main.cpp src/Foo.cpp include/Foo.h test/footest.cpp include/stack.h test/stacktest.cpp)
set(LIBS ~/dev/projects/cpp_seed/lib/libgtest.a)
include_directories(
        include
)

add_executable(cpp_seed ${SOURCE_FILES})

target_link_libraries(cpp_seed ${LIBS})
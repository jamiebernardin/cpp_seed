#include <iostream>
#include "../include/foo.h"
#include "../include/gtest/gtest.h"

using cpp_seed::Foo;

int main(int argc, char** argv) {
//    Foo foo = Foo();
//    foo.sayFoo();
//    return 0;
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
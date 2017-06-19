//
// Created by Jamie Bernardin on 6/18/17.
//
// Tests the Set method.

#include "../include/foo.h"
#include "../include/gtest/gtest.h"


using cpp_seed::Foo;

TEST(Foo, sayFoo) {
  Foo f;
  ASSERT_EQ(f.sayFoo(), "foo");
}

TEST(Foo, favoriteNumber) {
    Foo f;
    ASSERT_EQ(f.favoriteNum(), 3.1415927);
}

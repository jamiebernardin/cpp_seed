//
// Created by Jamie Bernardin on 6/19/17.
//
#include "../include/stack.h"
#include "../include/gtest/gtest.h"
#include <string>

using cpp_seed::Stack;

class StackTest : public ::testing::Test {
protected:
    virtual void SetUp() {
    }
    // virtual void TearDown() {}
    void init() {
        empty();
        fill();
    }
    void fill() {
        intStack_.push(1);
        intStack_.push(2);
        strStack_.push("foo");
        strStack_.push("bar");
    }
    void empty() {
        while (!intStack_.empty()) intStack_.pop();
        while (!strStack_.empty()) strStack_.pop();
    }
    Stack<int> intStack_;
    Stack<std::string> strStack_;

};

TEST_F(StackTest, topTest) {
    init();
    EXPECT_EQ(2, intStack_.top());
    EXPECT_EQ("bar", strStack_.top());
}

TEST_F(StackTest, popTest) {
    init();
    intStack_.pop();
    strStack_.pop();
    EXPECT_EQ(1, intStack_.top());
    EXPECT_EQ("foo", strStack_.top());
    intStack_.push(2);
    strStack_.push("bar");
}

TEST_F(StackTest, emptyTest) {
    empty();
    EXPECT_TRUE(intStack_.empty());
    EXPECT_TRUE(strStack_.empty());
}

TEST_F(StackTest, pushTest) {
    init();
    intStack_.push(3);
    strStack_.push("baz");
    EXPECT_EQ(intStack_.top(), 3);
    EXPECT_EQ(strStack_.top(), "baz");
}
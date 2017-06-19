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
        _intStack.push(1);
        _intStack.push(2);
        _strStack.push("foo");
        _strStack.push("bar");
    }
    void empty() {
        while (!_intStack.empty()) _intStack.pop();
        while (!_strStack.empty()) _strStack.pop();
    }
    Stack<int> _intStack;
    Stack<std::string> _strStack;

};

TEST_F(StackTest, topTest) {
    init();
    EXPECT_EQ(2, _intStack.top());
    EXPECT_EQ("bar", _strStack.top());
}

TEST_F(StackTest, popTest) {
    init();
    _intStack.pop();
    _strStack.pop();
    EXPECT_EQ(1, _intStack.top());
    EXPECT_EQ("foo", _strStack.top());
    _intStack.push(2);
    _strStack.push("bar");
}

TEST_F(StackTest, emptyTest) {
    empty();
    EXPECT_TRUE(_intStack.empty());
    EXPECT_TRUE(_strStack.empty());
}

TEST_F(StackTest, pushTest) {
    init();
    _intStack.push(3);
    _strStack.push("baz");
    EXPECT_EQ(_intStack.top(), 3);
    EXPECT_EQ(_strStack.top(), "baz");
}
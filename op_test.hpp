#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "Add.hpp"
#include "Sub.hpp"
#include "Mult.hpp"
#include "Div.hpp"
#include "Pow.hpp"
#include "Rand.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(AddTest, AddEvaluatePositive) {  //add +
    Add* test = new Add(8.0, 4.0);
    EXPECT_DOUBLE_EQ(test->evaluate(), 12.0);
}

TEST(AddTest, OpEvaluateNegative) { //add -
    Add* test = new Op(8.0, -4.0);
    EXPECT_DOUBLE_EQ(test->evaluate(), 4.0);
}

TEST(SubTest, SubEvaluatePositive) { //sub +
    Sub* test = new Sub(8.0, 4.0);
    EXPECT_DOUBLE_EQ(test->evaluate(), 4.0);
}

TEST(SubTest, SUbEvaluateNegative) { //sub -
    Sub* test = new Sub(8.0, 3.0);
    EXPECT_DOUBLE_EQ(test->evaluate(), 11.0);
}

TEST(MultTest, MultEvaluatePositive) { //Mult +
    Mult* test = new Mult(8.0, 3.0);
    EXPECT_DOUBLE_EQ(test->evaluate(), 24.0);
}
TEST(MultTest, MultEvaluateDecimal) { //Mult .5
    Mult* test = new Mult(8.0, 0.5);
    EXPECT_DOUBLE_EQ(test->evaluate(), 4.0);
}
TEST(DivTest, DivEvaluateNegative) { //Div -
    Div* test = new Div(8.0, -2.0);
    EXPECT_DOUBLE_EQ(test->evaluate(), -4.0);
}
TEST(DivTest, DivEvaluateDecimal) { //Div .5
    Div* test = new Div(8.0, 0.5);
    EXPECT_DOUBLE_EQ(test->evaluate(), 16.0);
}
TEST(PowTest, PowEvaluatePostive) { //Pow +
    Pow* test = new Pow(8.0, 3.0);
    EXPECT_DOUBLE_EQ(test->evaluate(), 64.0);
}

TEST(RandTest, RandEvaluateNumber) { //rand
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

#endif //__OP_TEST_HPP__

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
    Base* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(AddTest, AddEvaluatePositive) {  //add +	
	Base* num1 = new Op(8.0);
	Base* num2 = new Op(4.0);
	
    Add* test = new Add(num1, num2);
    EXPECT_DOUBLE_EQ(test->evaluate(), 12.0);
}

TEST(AddTest, OpEvaluateNegative) { //add -
	Base* num1 = new Op(8.0);
	Base* num2 = new Op(-4.0);
    Add* test = new Add(num1, num2);
    EXPECT_DOUBLE_EQ(test->evaluate(), 4.0);
}

TEST(SubTest, SubEvaluatePositive) { //sub +
	Base* num1 = new Op(8.0);
	Base* num2 = new Op(4.0);
    Sub* test = new Sub(num1, num2);
    EXPECT_DOUBLE_EQ(test->evaluate(), 4.0);
}

TEST(SubTest, SUbEvaluateNegative) { //sub -
	Base* num1 = new Op(8.0);
	Base* num2 = new Op(-3.0);
	
    Sub* test = new Sub(num1, num2);
    EXPECT_DOUBLE_EQ(test->evaluate(), 11.0);
}

TEST(MultTest, MultEvaluatePositive) { //Mult +
	Base* num1 = new Op(8.0);
	Base* num2 = new Op(3.0);
	
    Mult* test = new Mult(num1, num2);
    EXPECT_DOUBLE_EQ(test->evaluate(), 24.0);
}
TEST(MultTest, MultEvaluateDecimal) { //Mult .5
	Base* num1 = new Op(8.0);
	Base* num2 = new Op(0.5);
	
    Mult* test = new Mult(num1, num2);
    EXPECT_DOUBLE_EQ(test->evaluate(), 4.0);
}
TEST(DivTest, DivEvaluateNegative) { //Div -
	Base* num1 = new Op(8.0);
	Base* num2 = new Op(-2.0);
    Div* test = new Div(num1, num2);
    EXPECT_DOUBLE_EQ(test->evaluate(), -4.0);
}
TEST(DivTest, DivEvaluateDecimal) { //Div .5
	Base* num1 = new Op(8.0);
	Base* num2 = new Op(0.5);
    Div* test = new Div(num1, num2);
    EXPECT_DOUBLE_EQ(test->evaluate(), 16.0);
}
TEST(PowTest, PowEvaluatePostive) { //Pow +
	Base* num1 = new Op(4.0);
	Base* num2 = new Op(3.0);
    Pow* test = new Pow(num1, num2);
    EXPECT_DOUBLE_EQ(test->evaluate(), 64.0);
} 

TEST(RandTest, RandEvaluateNonZero) {
	Rand* test = new Rand();
	EXPECT_TRUE( (test->evaluate() >= 0) && (test->evaluate() <= 100));
}
#endif //__OP_TEST_HPP__

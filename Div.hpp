#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "op.hpp"
#include "base.hpp"
#include <string>

class Div : public Base {
	private:
		double value1;
		double value2;
	public:
		Div(double val1, double val2) : Base() { value1 = val1; value2 = val2;}
		
		virtual double evaluate() { return value1 / value2; }
		virtual std::string stringify() { return "(" + value1->stringify() + "/" + value2->stringify() + ")"; }
};

#endif //__DIV_HPP__

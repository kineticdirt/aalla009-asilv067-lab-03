#ifndef __DIV_HPP__
#define __DIV_HPP__

#include "op.hpp"
#include "base.hpp"
#include <string>

class Div : public Base {
	private:
		Op* value1;
		Op* value2;
	public:
		Div(Op* val1, Op* val2) : Base() { value1 = val1; value2 = val2;}
		
		virtual double evaluate() { return value1->evaluate() / value2->evaluate(); }
		virtual std::string stringify() { return "(" + value1->stringify() + "/" + value2->stringify() + ")"; }
};

#endif //__DIV_HPP__

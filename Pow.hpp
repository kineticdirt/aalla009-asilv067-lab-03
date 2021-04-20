#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include "op.hpp"
#include <string>

class Pow : public Base {
	private:
		Base* value1;
		Base* value2;
	public:
		Pow(Base* val1, Base* val2) : Base() { 
			value1 = val1;
			value2 = val2;
		}

		virtual double evaluate() { 
			if(value2->evaluate() == 0.0){
				return 1;
			} else if((int)(value2->evaluate()) % 2 == 0){
				return evaluate(value1->evaluate(), value2->evaluate()/2) * evaluate(value1->evaluate(), value2->evaluate()/2);
			} else {
				return value1->evaluate() * evaluate(value1->evaluate(), value2->evaluate()/2) * evaluate(value1->evaluate(), value2->evaluate()/2);
			}
		}
		double evaluate(double val1, double val2){
			if(val2 == 0.0){
				return 1;
			} else if((int)(val2) % 2 == 0){
				return evaluate(val1, val2/2) * evaluate(val1, val2/2);
			} else {
				return val1 * evaluate(val1, val2/2) * evaluate(val1, val2/2);
			}
		}
		virtual std::string stringify() {return "(" + value1->stringify() + "**" + value2->stringify() + ")";}//added the"; atthe end
};

#endif 

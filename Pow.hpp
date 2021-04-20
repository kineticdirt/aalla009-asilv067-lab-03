#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"
#include <string>

class Pow : public Base {
	private:
		double value1;
		double value2;
	public:
		Pow(double val1, double val2) : Base() { 
			value1 = val1;
			value2 = val2;
		}

		virtual double evaluate() { 
			if(value2->evaluate() == 0.0){
				return 1;
			} else if(value2->evaluate() % 2.0 == 0.0){
				return evaluate(value1, (value2/2) * evaluate(value1, (value2/2);
			} else {
				return value1 * evaluate(value1, (value2/2)) * evaluate(value1), (value2/2));
			}
		}
		virtual std:string stringify() {return "(" + value1->stringify() + "**" + value2->stringify() + ")";}//added the"; atthe end
};

#endif 

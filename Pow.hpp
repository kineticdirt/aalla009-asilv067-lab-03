#ifndef __POW_HPP__
#define __SUB_HPP__

#include "base.hpp"
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
			if(value2 == 0){
				return 1;
			} else if(value2 % 2==0){
				return evaluate(value1, value2/2) * evaluate(value1, value2/2);
			} else {
				return value1 * evaluate(value1, value2/2) * evaluate(value1, value2/2);
			}
		}
		virtual std:string stringify() {return "(" + value1->stringify() + "**" + value2->stringify() + ")}
};


#ifndef __MULT_HPP__
#define __MULT_HPP__
#include "base.hpp"
#include "op.hpp"
#include <string>

class Mult : public Base {
        private:
        	double value1;
                double value2;
        public:
                Mult(double val1, double val2) : Base() { value1 = val1; value2 = val2;}
                virtual double evaluate() { return (value1) * (value2);}
                virtual std::string stringify() { return "(" + value1->stringify() + "*" + value2->stringify() + ")"; }
};

#endif //__MULT_HPP__

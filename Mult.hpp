#ifndef __MULT_HPP__
#define __MULT_HPP__
#include "base.hpp"
#include "op.hpp"
#include <string>

class Mult : public Base {
        private:
        	Op* value1;
                Op* value2;
        public:
                Mult(Op* val1, Op* val2) : Base() { value1 = val1; value2 = val2;}
                virtual double evaluate() { return (value1->evaluate()) * (value2->evaluate());}
                virtual std::string stringify() { return "(" + value1->stringify() + "*" + value2->stringify() + ")"; }
};

#endif //__MULT_HPP__

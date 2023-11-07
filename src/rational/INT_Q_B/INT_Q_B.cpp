#include "INT_Q_B.h"

#include "../RED_Q_Q/RED_Q_Q.h"

Rational* INT_Q_B::get(Rational* operationObject) const {
    RED_Q_Q red;
    Natural checkDenominator = red.get(operationObject)->getDenominator();
    if (checkDenominator.len() == 1 && checkDenominator.get(0) == 1){
        return new Rational(Integer("1"));
    }
    else {
        return new Rational(Integer("0"));
    }
}

bool INT_Q_B::get_bool(Rational* operationObject) const {
    RED_Q_Q red;
    Natural checkDenominator = red.get(operationObject)->getDenominator();
    return (checkDenominator.len() == 1 && checkDenominator.get(0) == 1);
}

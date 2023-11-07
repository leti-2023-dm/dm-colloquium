#include "TRANS_Q_Z.h"

#include "../RED_Q_Q/RED_Q_Q.h"
#include "../INT_Q_B/INT_Q_B.h"

Integer* TRANS_Q_Z::get_Z(Rational* operationObject) const {
    RED_Q_Q red;
    Rational* redObject = red.get(operationObject);
    INT_Q_B z;
    if (z.get_bool(redObject)){
        Integer* Numerator;
        *Numerator = redObject->getNumerator();
        return Numerator;
    }
    else {
        throw std::invalid_argument("\nDenominator must be \"1\" to use TRANS_Q_Z_obj.get_Z(Rational* operationObject)\n");
    }
}

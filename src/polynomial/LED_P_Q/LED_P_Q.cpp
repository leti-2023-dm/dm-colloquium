#include "LED_P_Q.h"

Algebra *LED_P_Q::get(Algebra *operationObject) const
{
    auto *objectPolynomial = dynamic_cast<Polynomial *>(operationObject);

    return get(objectPolynomial);
}

/**
 * The function returns a Rational object that represents the coefficient of the highest degree term in
 * a Polynomial object.
 *
 * @param operand The "operand" parameter is a pointer to an object of type Polynomial.
 *
 * @return A pointer to a Rational object.
 */
Rational *LED_P_Q::get(Polynomial *operand)
{
    return new Rational(operand->get(operand->deg()));
}
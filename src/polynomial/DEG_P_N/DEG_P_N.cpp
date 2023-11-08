#include "DEG_P_N.h"

Algebra *DEG_P_N::get(Algebra *operationObject) const
{
    auto *objectPolynomial = dynamic_cast<Polynomial *>(operationObject);

    return get(objectPolynomial);
}

/**
 * The function returns the degree of a polynomial as a natural number.
 * 
 * @param operand A pointer to an object of type Polynomial.
 * 
 * @return The code is returning a new instance of the Natural class, which is created using the degree
 * of the Polynomial operand.
 */
Natural *DEG_P_N::get(Polynomial *operand)
{
    return new Natural(std::to_string(operand->deg()));
}
#include "DER_P_P.h"

/**
 * The function takes a polynomial as input and returns its derivative.
 * 
 * @param operand The parameter "operand" is a pointer to an object of type Polynomial.
 * 
 * @return a pointer to a Polynomial object.
 */
Polynomial *DER_P_P::get(Polynomial *operand) const
{
    size_t n = operand->deg();

    Rational coef = operand->get(n);
    std::vector<Rational> vec(n - 1, coef);
    Polynomial *result = new Polynomial(vec);

    for (size_t i = 1; i <= n; i++)
    {
        Rational r = operand->get(i);
        Integer numerator = r.getNumerator();
        Integer newNumerator(std::to_string(std::stoi(numerator.toString()) * i));
        Rational newRational(newNumerator, r.getDenominator());
        result->set(i - 1, newRational);
    }
    return result;
}
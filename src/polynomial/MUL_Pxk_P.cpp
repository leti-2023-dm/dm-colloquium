#include "MUL_Pxk_P.h"

/**
 * The function takes as input the first polynomial and the second polynomial of the form x^k and returns their multiplication result
 * 
 * @param firstOperand A pointer to the first polynomial operand.
 * @param secondOperand A pointer to the polynomial with degree k.
 * 
 * @return a pointer to the polynomial of the multiplication result.
 */
Polynomial *MUL_Pxk_P::get(Polynomial *firstOperand, Polynomial *secondOperand) const
{
    size_t n = firstOperand->deg();
    size_t k = secondOperand->deg();

    std::vector<Rational> vec(n + k + 1);
    Polynomial *result = new Polynomial(vec);

    size_t i;
    for (i = 0; i < k; i++)
        result->set(i, secondOperand->get(i));
    for (size_t j = i; j <= n + k; j++)
        result->set(j, firstOperand->get(j-k));

    return result;
}
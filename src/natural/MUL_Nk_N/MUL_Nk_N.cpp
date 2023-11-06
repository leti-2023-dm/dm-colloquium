#include "MUL_Nk_N.h"
#include <limits>
#include <exception>

Natural* MUL_Nk_N::get(Natural* firstOperand, Natural* secondOperand) const {
    size_t secondLength = 0;
    size_t count = 1;
    for (size_t i = 0; i < secondOperand->len(); i++) {
        if (std::numeric_limits<size_t>::max() / 10 >= count && 
            std::numeric_limits<size_t>::max() / (secondOperand->get(i) * 10) >= count) {
        secondLength += secondOperand->get(i) * count;
        count *= 10;
        } else {
            throw std::overflow_error("Overflow occurred during multiplication.");
        }
    }
    std::string resultStr = firstOperand->toString() + std::string(secondLength, '0');
    return new Natural(resultStr);
}
#include "MUL_Nk_N.h"
#include <limits>
#include <exception>

Natural* MUL_Nk_N::get(Natural* firstOperand, Natural* secondOperand) const {
    size_t secondLength = 0;
    size_t count = 1;
    for (size_t i = 0; i < secondOperand->len(); i++) {
        if (secondOperand->get(i) != 0) {
            if (std::numeric_limits<size_t>::max() / 10 >= count && 
                std::numeric_limits<size_t>::max() / (secondOperand->get(i) * 10) >= count) {
            secondLength += secondOperand->get(i) * count;
            
            } else {
                throw std::overflow_error("Overflow occurred during multiplication.");
            }
        }
        count *= 10;
    }
    std::vector<uint8_t> number(secondLength, 0);
    for (size_t i = 0; i < firstOperand->len(); i++) number.push_back(firstOperand->get(i));
    return new Natural(number);
}

Natural *MUL_Nk_N::get(Natural *firstOperand, size_t secondOperand) const {
    auto secOp = new Natural(std::to_string(secondOperand));
    return get(firstOperand, secOp);
}

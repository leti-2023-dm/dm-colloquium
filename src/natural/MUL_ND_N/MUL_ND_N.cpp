#include "MUL_ND_N.h"

Natural* MUL_ND_N::get(Natural* firstOperand, Natural* secondOperand) const {
    if (secondOperand->get(0) == 0) {
        return new Natural("0");
    } else if (secondOperand->get(0) == 1) {
        return firstOperand;
    } else {
        std::vector<uint8_t> number (firstOperand->len() + 1);
        uint8_t last_n = 0, first_n = 0, tmp = 0;
        uint8_t digit = secondOperand->get(0);
        for (size_t i = 0; i < firstOperand->len(); i++) {
            tmp = firstOperand->get(i) * digit + first_n;
            if (tmp > 9) {
                last_n = tmp % 10;
                first_n = tmp / 10;
                number[i] = last_n;
            } else {
                first_n = 0;
                number[i] = tmp;
            }
        }
        number[number.size() - 1] = first_n;
        return new Natural(number);
    }
}
#include "MUL_ND_N.h"

Natural* MUL_ND_N::get(Natural* firstOperand, Natural* secondOperand) const {
    if (secondOperand->get(0) == 0) {
        return new Natural("0");
    } else if (secondOperand->get(0) == 1) {
        return firstOperand;
    } else {
        std::string res;
        res.reserve(firstOperand->len() + 1);
        uint8_t last_n = 0, first_n = 0, tmp = 0;
        uint8_t num = secondOperand->get(0);
        for (size_t i = 0; i < firstOperand->len(); i++) {
            tmp = firstOperand->get(i) * num + first_n;
            if (tmp > 9) {
                last_n = tmp % 10;
                first_n = tmp / 10;
                res = std::to_string(last_n) + res;
            } else {
                first_n = 0;
                res = std::to_string(tmp) + res;
            }
        }
        res = std::to_string(first_n) + res;
        return new Natural(res);
    }
}
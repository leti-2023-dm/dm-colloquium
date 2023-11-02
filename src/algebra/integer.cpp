#include "integer.h"

Integer::Integer(std::string_view string_number) : number_(Natural("0")), sign_(false) {
    char first_char = string_number[0];
    if(!isdigit(first_char) && first_char != '-') {
        throw std::invalid_argument("First character in string is not digit or a sign.");
    } else {
        if(first_char == '-') {
            sign_ = true;
            string_number.remove_prefix(1); // deleting sign char in string
        }

        number_ = Natural(string_number);
    }
}

Integer::Integer(const Natural& number, bool sign) : number_(number), sign_(sign) {}

void Integer::set(size_t index, uint8_t digit) {
    number_.set(index, digit);
}

uint16_t Integer::get(size_t index) const {
    return number_.get(index);
}

Natural Integer::getNatural() const {
    return number_;
}

void Integer::changeSign() {
    sign_ = false;
}

size_t Integer::len() const {
    return number_.len();
}

std::string Integer::toString() {
    std::string str;
    str.reserve(number_.len() + 1);

    if(sign_) {
        str += "-";
    }
    str += number_.toString();

    return str;
}

bool Integer::hasSign() const {
    return sign_;
}
#include "natural.h"

bool Natural::validateIndex(size_t index) const {
    if(index < len_) {
        return true;
    }

    return false;
}

bool Natural::validateIndex(size_t index, size_t limit) const {
    if(index < limit) {
        return true;
    }

    return false;
}

Natural::Natural(std::string_view string_number) {
    // validate string
    if(!std::all_of(string_number.begin(), string_number.end(), ::isdigit)) {
        throw std::invalid_argument("\nGiven string representation contains one or more symbols that are not digits\n");
    } else {
        len_ = string_number.size();

        for(size_t i = 1; i <= len_; i++) {
            // numbers are stored in reverse order (by architecture)
            number_.push_back(static_cast<uint8_t>(string_number[len_ - i] - '0'));
        }

        deleteLeadingZeroes();
    }
}

Natural::Natural(const Natural& other) : len_(other.len_) {
    number_ = other.number_;
}

Natural::Natural(const Natural& other, size_t startInd, size_t endInd) : len_(other.len_) {
    if(!validateIndex(startInd, other.len_) || !validateIndex(endInd, other.len_)) {
        len_ = 0;
    } else {
        // if user gave indices where endInd < startInd, but they were valid (greater or equal than 0 and less than size_)
        auto tmp = std::max(startInd, endInd);
        startInd = std::min(startInd, endInd);
        endInd = tmp;

        len_ = endInd - startInd;
        std::copy(other.number_.begin() + static_cast<int>(startInd),
                  other.number_.begin() + static_cast<int>(endInd),
                  back_inserter(number_));
    }
}

// return 0 if index is invalid
uint16_t Natural::get(size_t index) const {
    if(validateIndex(index)) {
        // number is stored in reverse order, so calculating index
        return static_cast<uint16_t>(number_[index]);
    }

    return 0;
}

size_t Natural::len() const {
    return len_;
}

void Natural::set(size_t index, uint8_t digit) {
    if(validateIndex(index) && digit <= 9) {
        // number is stored in reverse order, so calculating index
        number_[index] = digit;
    }
}

std::string Natural::toString() {
    std::string str;
    str.reserve(len_ + 1);

    for(size_t i = 1; i <= len_; i++) {
        str += std::to_string(number_[len_ - i]);
    }

    return str;
}

void Natural::deleteLeadingZeroes() {
    size_t last = len_ - 1;
    while(last != 0 && number_[last] == 0) {
        if(number_[last] == 0) {
            number_.pop_back();
            last -= 1;
        }
    }

    len_ = number_.size();
}

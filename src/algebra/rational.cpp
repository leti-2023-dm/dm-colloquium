#include "rational.h"

Rational::Rational(const Integer& numerator, const Natural& denominator) : numerator_(numerator), denominator_(Natural("1")) {
    if(denominator.len() == 1 && denominator.get(0) == 0) {
        throw std::invalid_argument("\n0 denominator was given to a Rational class constructor\n");
    }

    if(numerator_.len() == 1 && numerator_.get(0) == 0) {
        denominator_ = Natural("1");
    } else {
        denominator_ = denominator;
    }
}

Rational::Rational(const Integer& numerator) : numerator_(numerator), denominator_(Natural("1")) {}

Rational::Rational(const Natural& numerator) : numerator_(Integer(numerator, false)), denominator_(Natural("1")) {}

void Rational::setNumerator(const Integer& numerator) {
    if(numerator.len() == 1 && numerator.get(0) == 0) {
        // if we set numerator to a zero then denominator automatically becomes equal to 1
        denominator_ = Natural("1");
    }
    numerator_ = numerator;
}

void Rational::setDenominator(const Natural& denominator) {
    // we don't set denominator when numerator or denominator is equal to zero
    if(!(denominator.len() == 1 && denominator.get(0) == 0) &&
        !(numerator_.len() == 1 && numerator_.get(0) == 0)) {
        denominator_ = denominator;
    }
}

const Integer& Rational::getNumerator() const {
    return numerator_;
}

const Natural& Rational::getDenominator() const {
    return denominator_;
}

std::string Rational::toString() const {
    std::string str; str.reserve(denominator_.len() + numerator_.len() + 1);
    str += numerator_.toString();

    // print the denominator only if numerator has non-zero value and if denominator is not equal to 1
    if(!(numerator_.len() == 1 && numerator_.get(0) == 0) &&
        !(denominator_.len() == 1 && denominator_.get(0) == 1)) {
        str += "/";
        str += denominator_.toString();
    }
    return str;
}

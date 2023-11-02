#include "rational.h"

Rational::Rational(const Integer& numerator, const Natural& denominator) : numerator_(numerator), denominator_(denominator) {}

Rational::Rational(const Integer& numerator) : numerator_(numerator), denominator_(Natural("1")) {}

Rational::Rational(const Natural& numerator) : numerator_(Integer(numerator, false)), denominator_(Natural("1")) {}

void Rational::setNumerator(const Integer& numerator) {
    numerator_ = numerator;
}

void Rational::setDenominator(const Natural& denominator) {
    denominator_ = denominator;
}

Integer Rational::getNumerator() const {
    return numerator_;
}

Natural Rational::getDenominator() const {
    return denominator_;
}

std::string Rational::toString() {
    std::string str; str.reserve(denominator_.len() + numerator_.len() + 1);
    str += numerator_.toString();
    str += "/";
    str += denominator_.toString();
    return str;
}



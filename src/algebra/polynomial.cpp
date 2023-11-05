#include "polynomial.h"

Polynomial::Polynomial(const Natural &number) : deg_(0) {
    coefficients_.emplace_back(number);
}

Polynomial::Polynomial(const Integer &number) : deg_(0) {
    coefficients_.emplace_back(number);
}

Polynomial::Polynomial(const Rational &number) : deg_(0) {
    coefficients_.push_back(number);
}

Polynomial::Polynomial(const std::vector<Rational> &coefficients) : deg_(coefficients.size() - 1) {
    coefficients_ = coefficients;
    deleteLeadingZeroes();
}

void Polynomial::deleteLeadingZeroes() {
    // checking if rationals are zeroes
    while(deg_ != 0 && (coefficients_[deg_].getNumerator().getNatural().len() == 1 &&
            coefficients_[deg_].getNumerator().getNatural().get(0) == 0)) {
        coefficients_.pop_back();
        deg_ -= 1;
    }
}

void Polynomial::set(size_t index, const Rational& coefficient) {
    if(index <= deg_) {
        coefficients_[index] = coefficient;
        deleteLeadingZeroes();
    }
}

const Rational& Polynomial::get(size_t index) const {
    if(index <= deg_) {
        return coefficients_[index];
    } else {
        throw std::invalid_argument("\nInvalid index was given in a get method of Polynomial class\n");
    }
}

size_t Polynomial::deg() const {
    return deg_;
}

std::string Polynomial::toString() const {
    std::string str;
    size_t ind = 0;

    // method which add braces in output of coefficients if they have negative sign (e.g. x^2 + -x + 1 -> x^2 + (-x) + 1)
    auto add_braces = [] (const Rational& num) {
        std::string formatted;

        if(num.getNumerator().hasSign()) {
            formatted = '(' + num.toString() + ')';
        } else {
            formatted = num.toString();
        }

        return formatted;
    };

    while(ind <= deg_) {

        const Rational& coefficient = coefficients_[deg_ - ind];
        const Integer& numerator = coefficient.getNumerator();

        // we don't output monomials with zero coefficients
        if(!(numerator.len() == 1 && numerator.get(0) == 0)) {
            std::string tmp;

            if(deg_ - ind == 0) {
                tmp = add_braces(coefficient);
            } else {
                tmp = add_braces(coefficient) + " * x^" + std::to_string(deg_ - ind) + " + ";
            }
            str += tmp;
        }
        ind += 1;
    }

    return str;
}

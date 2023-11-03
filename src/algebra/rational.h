#ifndef LONG_OPERATIONS_RATIONAL_H
#define LONG_OPERATIONS_RATIONAL_H
#include "algebra.h"
#include "natural.h"
#include "integer.h"

class Rational: public Algebra {
    Integer numerator_;

    Natural denominator_;

public:
    Rational(const Integer& numerator, const Natural& denominator);

    explicit Rational(const Natural& numerator);

    explicit Rational(const Integer& numerator);

    Rational(const Rational& rational) = default;

    void setNumerator(const Integer& numerator);

    void setDenominator(const Natural& natural);

    [[nodiscard]] Integer getNumerator() const;

    [[nodiscard]] Natural getDenominator() const;

    std::string toString() override;
};
#endif //LONG_OPERATIONS_RATIONAL_H
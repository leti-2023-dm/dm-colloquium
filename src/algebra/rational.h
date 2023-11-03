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

    [[nodiscard]] const Integer& getNumerator() const;

    [[nodiscard]] const Natural& getDenominator() const;

    [[nodiscard]] std::string toString() const override;
};
#endif //LONG_OPERATIONS_RATIONAL_H

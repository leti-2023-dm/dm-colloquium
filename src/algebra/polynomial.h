#ifndef LONG_OPERATIONS_POLYNOMIAL_H
#define LONG_OPERATIONS_POLYNOMIAL_H
#include <vector>
#include <format>
#include "./natural.h"
#include "./rational.h"
#include "./integer.h"


class Polynomial : public Algebra {
    std::vector<Rational> coefficients_;

    size_t deg_;

public:
    explicit Polynomial(const Natural& number);

    explicit Polynomial(const Integer& number);

    explicit Polynomial(const Rational& number);

    Polynomial(const Polynomial& polynomial) = default;

    explicit Polynomial(const std::vector<Rational>& coefficients);

    void set(size_t index, const Rational& coefficient);

    [[nodiscard]] const Rational& get(size_t index) const;

    [[nodiscard]] size_t deg() const;

    void deleteLeadingZeroes();

    [[nodiscard]] std::string toString() const override;
};


#endif //LONG_OPERATIONS_POLYNOMIAL_H

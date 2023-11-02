#ifndef LONG_OPERATIONS_INTEGER_H
#define LONG_OPERATIONS_INTEGER_H
#include <cstdint>
#include <string_view>
#include <stdexcept>
#include "natural.h"
#include "algebra.h"

class Integer: public Algebra {
    bool sign_;

    Natural number_;

public:
    explicit Integer(std::string_view string_number);

    Integer(const Natural& number, bool sign);

    Integer(const Integer& other) = default;

    void set(size_t index, uint8_t digit);

    [[nodiscard]] uint16_t get(size_t index) const;

    [[nodiscard]] Natural getNatural() const;

    void changeSign();

    [[nodiscard]] bool hasSign() const;

    [[nodiscard]] size_t len() const;

    std::string toString() override;
};


#endif //LONG_OPERATIONS_INTEGER_H

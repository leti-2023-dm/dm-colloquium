#ifndef LONG_OPERATIONS_NATURAL_H
#define LONG_OPERATIONS_NATURAL_H
#include <vector>
#include <cstdint>
#include <sstream>
#include <algorithm>
#include <stdexcept>
#include "algebra.h"


class Natural: public Algebra {
    std::vector<uint8_t> number_;

    size_t len_;

    [[nodiscard]] bool validateIndex(size_t index) const;

    [[nodiscard]] bool validateIndex(size_t index, size_t limit) const;

    void deleteLeadingZeroes();

public:
    explicit Natural(std::string_view string_number);

    Natural(const Natural& other);

    Natural(const Natural& other, size_t startInd, size_t endInd);

    void set(size_t index, uint8_t digit);

    [[nodiscard]] uint16_t get(size_t index) const;

    [[nodiscard]] size_t len() const;

    [[nodiscard]] std::string toString() const override;
};


#endif //LONG_OPERATIONS_NATURAL_H

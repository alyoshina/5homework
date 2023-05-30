#include "max.h"

#include <limits>
#include <stdexcept>

Max::Max() 
    : is_empty{true}
    , m_max{std::numeric_limits<double>::lowest()} 
{}

Max::~Max() {}

void Max::update(double next) {
    is_empty = false;
    if (next > m_max) {
        m_max = next;
    }
}

double Max::eval() const {
    if (is_empty) {
        throw std::invalid_argument("Max value is undefined.");
    }
    return m_max;
}

std::string Max::name() const {
    return "max";
}
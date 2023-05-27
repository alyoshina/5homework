#include "min.h"

#include <limits>
#include <stdexcept>

Min::Min()
    : is_empty{true} 
    , m_min{std::numeric_limits<double>::max()}
{}

Min::~Min() {}

void Min::update(double next) {
    is_empty = false;
    if (next < m_min) {
        m_min = next;
    }
}

double Min::eval() const {
    if (is_empty) {
        throw std::invalid_argument("Min value is undefined.");
    }
    return m_min;
}

std::string Min::name() const {
    return "min";
}
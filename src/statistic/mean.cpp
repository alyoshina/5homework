#include "mean.h"

#include <stdexcept>

Mean::Mean() 
    : m_count(0)
    , m_sum(0)
    {}


Mean::~Mean() {}

void Mean::update(double next) {
    m_count++;
    m_sum += next;
}

double Mean::eval() const {
    if (!m_count) {
        throw std::invalid_argument("Mean value is undefined. Division by zero.");
    }
    
    return m_sum / m_count;
}

std::string Mean::name() const {
    return "mean";
}

int Mean::count() const {
    return m_count;
}
#include "pct.h"

#include <cmath>
#include <string>
#include <iostream>
#include <algorithm>
#include <stdexcept>

Pct::Pct(int pct) 
    : m_pct(pct)
{}

Pct::~Pct() {}

void Pct::update(double next) {
    m_data.push_back(next);
}

double Pct::eval() const {
    if (!m_data.size()) {
        throw std::invalid_argument("Pct value is undefined.");
    }

    std::sort(m_data.begin(), m_data.end());
    double int_part{0};
    double fr_part = std::modf((m_data.size() + 1) * m_pct / 100, &int_part);
    return m_data[int_part - 1] + fr_part * (m_data[int_part] - m_data[int_part - 1]);    
}

std::string Pct::name() const {
    return  std::string("pct") + std::to_string(m_pct);
}
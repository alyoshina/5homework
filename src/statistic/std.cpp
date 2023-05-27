#include "std.h"

#include <cmath>
#include <numeric>
#include <stdexcept>

Std::Std() 
{}

Std::~Std() {}

void Std::update(double next) {
    Mean::update(next);
    m_data.push_back(next);
}

double Std::eval() const {
    size_t data_count = m_data.size();
    if (!data_count) {
        throw std::invalid_argument("Std value is undefined.");
    }

    double mean_val = mean();
    double sum = std::accumulate(m_data.begin(), 
                    m_data.end(), 
                    0, 
                    [&, mean_val](double a, double b) {
                        return a + std::pow(b - mean_val, 2);
                    });

    return std::sqrt(sum / data_count);
}

std::string Std::name() const {
    return "std";
}

double Std::mean() const {
    return Mean::eval();
}
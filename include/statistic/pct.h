#pragma once

#include "istatistics.h"

#include <vector>

class Pct : public IStatistics {
public:
	Pct(int pct = 90);

    virtual ~Pct();

	void update(double next) override;

	double eval() const override;

	std::string name() const override;

private:
    int m_pct;

    mutable std::vector <double> m_data;
};
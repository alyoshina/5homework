#pragma once

#include "istatistics.h"

class Min : public IStatistics {
public:
	Min();

    virtual ~Min();

	void update(double next) override;

	double eval() const override;

	std::string name() const override;
	
private:
	bool is_empty;
	double m_min;
};

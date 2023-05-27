#pragma once

#include "istatistics.h"

class Mean : public IStatistics {
public:
	Mean();

    virtual ~Mean();

	void update(double next) override;

	double eval() const override;

	std::string name() const override;

protected:
    int count() const;

private:
	int m_count;
	
    double m_sum;
};
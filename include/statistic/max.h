#pragma once

#include "istatistics.h"

class Max : public IStatistics {
public:
	Max();

	virtual ~Max();

	void update(double next) override;

	double eval() const override;

	std::string name() const override;

private:
	bool is_empty;
	double m_max;
};

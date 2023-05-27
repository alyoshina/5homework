#pragma once

#include "mean.h"
#include <vector>

class Std : public Mean {
public:
	Std();
    
    virtual ~Std();

	void update(double next) override;

	double eval() const override;

	std::string name() const override;

private:
    double mean() const;
	
    std::vector <double> m_data;

};
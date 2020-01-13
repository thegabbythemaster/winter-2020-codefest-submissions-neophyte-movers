#ifndef HYDRO_HPP_
#define HYDRO_HPP_

#include "EnergyTypes.hpp"

class Hydro: public EnergyTypes
{
    public:
    	Hydro();
   		virtual string Description() const override;
		virtual string ListProsCons() const override;

	private:
		const int NUM_PROS = 3;
		const int NUM_CONS = 3;
		string pros[NUM_PROS];
		string cons[NUM_CONS];
};


#endif
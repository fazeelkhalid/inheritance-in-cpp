#ifndef Sundae_H
#define Sundae_H
#include"IceCream.h"

class Sundae:public IceCream{
private:
	int SundaeCost;
public:
	Sundae() :IceCream() {
		SundaeCost = 0;
	}
	Sundae(int sCost, int ICost, char* name) :IceCream(ICost,name) {
		this->SundaeCost = sCost;
	}
	int getcost() {
		return (SundaeCost + IceCream::getcost());
	}
	int gettex() {
		int tex = getcost() * 2;
		return (tex / 100);
	}
	~Sundae() {

	}
};
#endif
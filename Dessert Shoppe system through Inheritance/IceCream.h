#ifndef IceCreame_H
#define IceCreame_H

#include"DessertItem.h"
class IceCream:public DessertItem {
private:
	int Icecost;
public:
	
	IceCream():DessertItem() {
		Icecost = 0;
	}
	IceCream(int cost, char *name) :DessertItem(name) {
		this->Icecost = cost;
	}
	virtual int getcost() {
		return Icecost;
	}
	virtual int gettex() {
		int tex = getcost() * 2;
		return (tex / 100);
	}
	~IceCream() {

	}
};

#endif // !IceCreame_H

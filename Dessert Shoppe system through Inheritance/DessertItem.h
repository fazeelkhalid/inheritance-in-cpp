#ifndef DessertItem_H
#define DessertItem_H
#include<iostream>
using namespace std;
class DessertItem {
private:
	char* name;
public:
	DessertItem() {
		name = NULL;
	}
	DessertItem(char *Name) {
		name = Name;
	}
	void printName() {
		if (name != NULL) {
			cout << "\nName : " << name;
		}
		else {
			cout << "name not set";
		}
	}
	virtual int getcost() = 0;
	virtual int gettex() = 0;
	~DessertItem() {

	}
};
#endif // !DessertItem_H

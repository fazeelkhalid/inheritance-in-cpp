#define Cookies_H
#include<iostream>
#include"DessertItem.h"
class Cookies:public DessertItem {
private:
	int totalCookies;
	int pricePerDz;
public:
	Cookies(){
		totalCookies = 0;
		pricePerDz = 0;
	}
	Cookies(int totalCookies, int price, char*Name):DessertItem(Name) {
		this->totalCookies = totalCookies;
		this->pricePerDz = price;
	}
	int getcost() {
		int price = pricePerDz / 12;//price per cookies
		return (totalCookies*price);
	}
	int gettex() {
		int tex = getcost() * 2;
		return (tex / 100);
	}
	~Cookies() {
	}
};
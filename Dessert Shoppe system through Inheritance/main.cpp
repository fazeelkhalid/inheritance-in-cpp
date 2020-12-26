#include<iostream>
#include"DessertItem.h"
#include"Cookies.h"
#include"IceCream.h"
#include"Sundae.h"
using namespace std;
int main() {
	int itemCount = 0;
	const int purchaseOrder = 20; // total item that user can buy
	DessertItem* itemList[purchaseOrder]; //20 pointers of base class type, at most 20 objects
	 //can be added
	char addMore = 'y';
	int userChoice;

	cout << "\n\n.............................................";
	cout << "\n\nWant to add more items press y : ";
	cin >> addMore; //enter y for yes

	while (addMore == 'y'|| addMore == 'Y' && itemCount< purchaseOrder) {
		system("CLS");
		cout << "\n\t\tChoose Item you want to add";
		cout << "\n1 : for enter cookies";
		cout << "\n2 : for enter iceCream";
		cout << "\n3 : for enter Sundae\n----->>";
		cin >> userChoice;
		if (userChoice == 1) {
			int totalCookies = -1;
			int pricePerDz = -1;
			while (totalCookies <= 0) {
				cout << "\nNumber of cookies : ";
				cin >> totalCookies;
			}
			while (pricePerDz <= 0) {
				cout << "\nEnter price per Dz : ";
				cin >> pricePerDz;
			}
			char name[36];
			cout << "Enter name withOut space: ";
			cin >> name;
			itemList[itemCount++] = new Cookies(totalCookies, pricePerDz,name); //making base class pointer
			 //point cookie object
		}
		else if (userChoice == 2) {
			int cost = -1;
			while (cost <= 0) {
				cout << "\nEnter Icecream cost :";
				cin >> cost;
			}
			char name[36];
			cout << "Enter name without space : ";
			cin >> name;
			itemList[itemCount++] = new IceCream(cost, name);//making base class pointer
			//point IceCream object
		}
		else if (userChoice == 3) {
			int Icecost = -1;
			while (Icecost <= 0) {
				cout << "\nEnter Icecream cost :";
				cin >> Icecost;
			}
			int  toppingCost = -1;
			while (toppingCost <= 0) {
				cout << "\nEnter topping cost : ";
				cin >> toppingCost;
			}
			char name[36];
			cout << "Enter name without space : ";
			cin >> name;
			itemList[itemCount++] = new Sundae(toppingCost,Icecost,name);//making base class pointer
			 //point Sundae object
		}

		cout << "\n\n.............................................";
		cout << "\n\nWant to add more items press y : ";
		cin >> addMore; //enter y for yes
	}
	int TotalCost = 0; // total cost withOut tex
	for (int i = 0; i < itemCount; i++) {
		TotalCost += itemList[i]->getcost();
	}
	cout << "\nTotal cost : "<<TotalCost;

	int TotalTax = 0;
	for (int i = 0; i < itemCount; i++) {
		TotalTax += itemList[i]->gettex();
	}
	cout << "\nTotal Tex : " << TotalTax;

}
#pragma once
#include<iostream>
using namespace std;
class Clothing_Store
{
private:
	int item;
	int number;
	float price;
	int opt;
	int size;
public:
	Clothing_Store() : item(0), number(0), price(0) {}
	Clothing_Store(int item, int number, float price) : item(item), number(number), price(price) {}
	~Clothing_Store() {}
	void set_item(int item)
	{
		this->item = item;
	}
	int get_item()
	{
		return item;
	}
	void set_number(int number)
	{
		this->number = number;
	}
	int get_number()
	{
		return number;
	}
	void set_price(float price)
	{
		if (price > 0)
		{
			this->price = price;
		}
		else
		{
			cout << "Error.404" << endl;
		}
	}
	float get_price()
	{
		return price;
	}
	virtual void input()
	{
			cout << "Please Input item that you choose: ";
			cin >> item;
			cout << "How many item that you've choosen? ";
			cin >> number;
			cout << "Enter the price: ";
			cin >> price;
	}
	virtual void output()
	{
		cout << endl;
		cout << "Item that you've choosen: " << item << endl;
		if (item <= 1)
		{
			cout << "You have choosen " << number << " item" << endl;
		}
		else if(item > 1)
		{
			cout << "You have choosen " << number << " items" << endl;
		}
		cout << "The Cost of it: " << price << endl << endl ;
	}
};




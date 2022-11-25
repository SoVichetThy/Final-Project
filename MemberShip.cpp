#pragma once
#include<iostream>
#include"Customer.cpp"
using namespace std;
class Membership: public Customer 
{
private:
	float discount;
	int price;
	int quantity;
	float payment;
public:
	Membership() : Customer(), discount(0),price(0), quantity(0), payment(0) {};

	Membership(string name, int id, float discount, int quantity, float payment, int price) :
		Customer(name, discount), discount(discount) {};
	void set_discount(float discount)
	{
		this->discount = discount;
	}
	float get_discount()
	{
		return discount;
	}
	void set_price(int price)
	{
		this->price = price;
	}
	int get_price()
	{
		return price;
	}
	void set_quantity(int quantity)
	{
		this->quantity = quantity;
	}
	int get_quantity()
	{
		return quantity;
	}
	void set_payment(float payment)
	{
		this->payment = payment;
	}
	float get_payment()
	{
		return payment;
	}
	float total_payment(float discount)
	{
		return payment = quantity * price * (100 - discount) / 100;
	}
	
	void input()
	{
		Customer::Customer_input();
		cout << "Please Input Price: ";
		cin >> price;
		cout << "Please Input Quantity: ";
		cin >> quantity;
		cout << "Please Input Discount: ";
		cin >> discount;

	}
	void output()
	{
		Customer::Customer_output();
		cout << "Price: " << price << endl;
		cout << "Quantity: " << quantity << endl;
		cout << "Discount: " << discount << endl;
		cout << total_payment(discount) << endl;
	}
};
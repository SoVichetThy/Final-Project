#pragma once
#include<iostream>
using namespace std;
class Customer
{
private: 
	string Customer_name;
	int Customer_id;
public: 
	Customer(): Customer_name("Unknown"), Customer_id(0){}
	Customer(string Customer_name, int Customer_id): Customer_name(Customer_name), Customer_id(Customer_id){}
	~Customer()
	{
		cout << endl;
		cout << "Object Destroyed" << endl << endl;
	}
	void set_Customer_name(string Customer_name)
	{
		this->Customer_name = Customer_name;
	}
	string get_Customer_name()
	{
		return Customer_name;
	}
	void set_Customer_id(int Customer_id)
	{
		this->Customer_id = Customer_id;
	}
	int get_Customer_id()
	{
		return Customer_id;
	}
	virtual void Customer_input()
	{
		cout << endl;
		cout << "Please Input Customer Name: ";
		cin >> Customer_name;
		cout << "Please Input Customer ID: ";
		cin >> Customer_id;
	}
	virtual void Customer_output()
	{
		cout << endl;
		cout << "Customer_Name: " <<"\t\t\t" << Customer_name << endl;
		cout << "Customer_ID: " <<"\t\t\t" << Customer_id << endl;
	}
};
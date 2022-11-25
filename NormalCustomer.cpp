#pragma once
#include<iostream>
#include"Customer.cpp"
#include"Membership.cpp"
using namespace std;
class Normal_Customer : public Customer
{
public:
	void input()
	{
		Customer::Customer_input();
	}
	void output()
	{
		Customer::Customer_output();
	}
};

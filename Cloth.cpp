#pragma once
#include<iostream>
#include<iomanip>
#include<fstream>
#include"Customer.cpp"
using namespace std;
class Cloth
{
private: 
	string name;
	Customer* customers[100];
	int count = 0;
public:
	Cloth(): name("Unknown"){}
	Cloth(string name): name(name){}
	int findCustomerById(int Customer_id)
	{
		for (int i = 0; i < count; i++)
		{
			if (customers[i]->get_Customer_id()==Customer_id)
			{
				return i;
			}
		}
		return -1;
	}
	Customer* getCustomerById(int Customer_id)
	{
		Customer* customer = nullptr;
		for (int i = 0; i < count; i++)
		{
			if (customers[i]->get_Customer_id()==Customer_id)
			{
				return customers[i];
			}
		}
		return customer;
	}
	void addCustomer(Customer* customer)
	{
		customers[count] = new Customer();
		customers[count] = customer;
		count++;
	}
	void editCustomer(int Customer_Id)
	{
		string name;
		int found = findCustomerById(Customer_Id);
		if (found != -1)
		{
			cout << "Enter a new Customer name: ";
			cin >> name;
			customers[found]->set_Customer_name(name);
			cout << "Account has been edited" << endl; 
		}
		else
		{
			cout << "Not Found... Please Try Again !" << endl;
		}
	}
	void deleteCustomer(int Customer_Id)
	{
		int found = findCustomerById(Customer_Id);
		if (found != -1)
		{
			for (int i = found; i < count; i++)
			{
				customers[i] = customers[i + 1];
			}
			count--;
			cout << "Account has been deleted" << endl;
		}
		else
		{
			cout << "Not Found" << endl;
		}
	}
	void searchCustomerById(int Customer_id)
	{
		int found = findCustomerById(Customer_id);
		if (found != -1)
		{
			customers[found]->Customer_output();
		}
		else
		{
			cout << "Search Not Found." << endl;
		}

	}
	void sortCustomerbyId()
	{
		Customer* temp;
		for (int i = 0; i < count - i - 1; i++)
		{
			for (int j = 0; j < count -i - 1; j++)
			{
				if (customers[j]->get_Customer_id() > customers[j+1]->get_Customer_id())
				{
					temp = customers[j];
					customers[j] = customers[j + 1];
					customers[j + 1] = temp;
				}
			}
		}
	}
	void viewAllCustomer()
	{
		cout << "Customer No " << setw(10) << " " << "Customer name " << setw(10) << " " << " Items " << endl;
		for (int i = 0; i < count; i++)
		{
			cout << "      " <<"\t" << customers[i]->get_Customer_id() << setw(10) << "\t" << customers[i]->get_Customer_name() << endl;
		}
	}
};
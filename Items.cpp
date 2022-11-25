#pragma once
#include<iostream>
using namespace std;
class Item_in_store
{
public:

	int suit;
	int gym_cloth;
	int jacket;
	int shirt;

	void Display_item()
	{
		cout << "These are the items in my shop: " << endl;
		cout << "===============================" << endl;
		cout << "\n 1. Suit. ";
		cout << "\n\n\n 2. Gym_Clothes. ";
		cout << "\n\n\n 3. Hoodies. ";
		cout << "\n\n\n 4. Shirt. " << endl;
	}
	
};
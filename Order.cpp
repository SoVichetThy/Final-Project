//#include<iostream>
//using namespace std;
//class Order
//{
//private:
//	int price;
//	int quantity;
//	float discount;
//	float payment;
//public:
//	Order() : price(0), quantity(0), discount(0),payment(0) {};
//	Order(int price, int quantity, float discount) : price(price), quantity(quantity), discount(discount),payment(payment) {};
//	~Order()
//	{
//		cout << "Object Destroyed" << endl;
//	}
//	void set_price(int price)
//	{
//		this->price = price;
//	}
//	int get_price()
//	{
//		return price;
//	}
//	void set_quantity(int quantity)
//	{
//		this->quantity = quantity;
//	}
//	int get_quantity()
//	{
//		return quantity;
//	}
//	void set_discount(int discount)
//	{
//		this->discount = discount;
//	}
//	int get_discount()
//	{
//		return discount;
//	}
//	void set_payment(float payment)
//	{
//		this->payment = payment;
//	}
//	float get_payment()
//	{
//		return payment;
//	}
//	float total_payment(float discount)
//	{
//		return payment = quantity * price * (100-discount)/100;
//	}
//	void input()
//	{
//		cout << "Please Input Price: ";
//		cin >> price;
//		cout << "Please Input Quantity: ";
//		cin >> quantity;
//		cout << "Please Input Discount: ";
//		cin >> discount;
//	}
//	void output()
//	{
//		cout << "Price: " << price << endl;
//		cout << "Quantity: " << quantity << endl;
//		cout << "Discount: " << discount << endl;
//		cout << total_payment(discount) << endl;
//	}
//};
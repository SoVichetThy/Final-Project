#include<iostream>
#include"Customer.cpp"
#include"ClothingStore.cpp"
#include"NormalCustomer.cpp"
#include"Membership.cpp"
#include"Usermanagement.cpp"
#include"User.cpp"
#include"Cloth.cpp"
#include"Items.cpp"
using namespace std;
class RunApp
{
public:
	void runrun()
	{
		char ch;
		int num = 0;
		int op = 0;
		Cloth cloth;
		UserManager  userManager;
		User user;
		do
		{
			cout << "==================================================" << endl;
			cout << "\n\n\n\t  Admin Menu" << endl;
			cout << "\n\n\t1. Add New User" << endl;
			cout << "\n\n\t2. View All User" << endl;
			cout << "\n\n\t3. Edit User" << endl;
			cout << "\n\n\t4. Delete User" << endl;
			cout << "\n\n\t0. Exit" << endl;
			cout << "\n\n\tPlease Choose Option 0 - 4 :  ";
			cin >> ch;
			switch (ch)
			{
			case '1': {
				User user;
				user.inputUser();
				userManager.addUser(user);
				break;
			}
			case '2':
				userManager.viewUser();
				break;
			case '3': {
				string username;
				cout << "Enter username:";
				cin >> username;
				userManager.editUser(username);
				break;
			}
			case '4': {
				string username;
				cout << "Enter username:";
				cin >> username;
				userManager.deleteUser(username);
				break;
			}
			default:
				cout << "\a";
			}
			cin.ignore();
			cin.get();
		} while (ch != '0');
	}
	void run()
	{
		char ch;
		int num = 0;
		int op = 0;
		Cloth cloth("Sovichet");
		Normal_Customer* normal_customer = nullptr;
		Membership* membership = nullptr;
		char choice;
		enum accountType { NORMAL_CUSTOMER = 1, MEMBERSHIP = 2 };
		enum menuType
		{
			NEW_ACCOUNT = '1', CHECKING_ITEM = '2', VIEW_ALL_ACCOUNT = '3',
			DELETE_ACCOUNT = '4', EDIT_ACCOUNT = '5', SEARCH_ACCOUNT = '6',
			SORT_ACCOUNT = '7', EXIT = '0'
		};
		do
		{
		
			cout << "\n\n\n\tMAIN MENU";
			cout << "\n\n\t1. NEW ACCOUNT";
			cout << "\n\n\t2. CHECK ITEM";
			cout << "\n\n\t3. VIEW ALL CUSTOMER ";
			cout << "\n\n\t4. DELETE CUSTOMER";
			cout << "\n\n\t5. MODIFY CUSTOMER";
			cout << "\n\n\t6. SEARCH CUSTOMER";
			cout << "\n\n\t0. EXIT";
			cout << "\n\n\tSelect Your Option (0-6) ";
			cin >> ch;
	
			switch (ch)
			{
			case menuType::NEW_ACCOUNT:
				do
				{
					cout << "Menu " << endl;
					cout << " 1. Normal_Customer " << endl;
					cout << " 2. Membership_Customer " << endl;
					cout << "Please Pick Between (1 & 2): ";
					cin >> op;
					switch (op)
					{
					case accountType::NORMAL_CUSTOMER:
						normal_customer = new Normal_Customer();
						normal_customer->input();
						cloth.addCustomer(normal_customer);
						break;

					case accountType::MEMBERSHIP:
						membership = new Membership();
						membership->Customer_input();
						cloth.addCustomer(membership);
						break;

					default:
						cout << "" << endl;
						break;
					}
					cout << "Do you want to continue(y/n)";
					cin >> choice;
				} while (choice != 'n');
				break;

			case menuType::CHECKING_ITEM:
				Item_in_store item;
				item.Display_item();
				break;

			case menuType::VIEW_ALL_ACCOUNT:
				cloth.viewAllCustomer();
				break;

			case menuType::DELETE_ACCOUNT:
				int opt;
				char ask;
				cout << "\n\nEnter The No. Customer: ";
				cin >> num;
				cout << "Are you sure that you want to delete??" << endl;
				cout << "Please Choose Option: (1 for 'yes' && 2 for 'no'. ";
				cin >> opt;
				do
				{
					cloth.deleteCustomer(num);
					cout << "Do you want to delete this !! (y,n) ";
					cin >> ask;
				} while (ask != 'y');
				break;
			case menuType::EDIT_ACCOUNT:
				cout << "\n\nEnter The No. Customer: ";
				cin >> num;
				cloth.editCustomer(num);
				break;
			case menuType::SEARCH_ACCOUNT:
				cout << "Enter The No. Customer: ";
				cin >> num;
				cloth.searchCustomerById(num);

				break;

			case menuType::EXIT:
				cout << "\t\tI Really Aprreciate For Using My Clothing System" << endl;
				system("cls");
				break;
			default:cout << "\a";
			}
			cin.ignore();
			cin.get();
		}
	   while (ch != '0');
	}


};

#include<iostream>
#include"User.cpp"
#include"Usermanagement.cpp"
#include"Run.cpp"
using namespace std;
int main()
{
	RunApp app;
	UserManager usermanagement;
	string username;
	string password;
	do
	{
		cout << "   [ CLOTHING STORE ]" << endl;
		cout << "==========================" << endl;
		cout << "Welcome to log in Section: " << endl;
		cout << "==========================" << endl << endl;
		cout << "Enter UserName: ";
		cin >> username;
		cout << "Please Enter Password: ";
		cin >> password;

		User* user = usermanagement.authenticateUser(username, password);
		if (user != nullptr)
		{
			if (user -> getType()== "ADMIN")
			{
				app.runrun();
			}
			else if (user -> getType()=="NORMAL")
			{
				app.run();
			}
			else
			{
				cout << "Error.404" << endl;
			}
		}
	} while (true);
return 0;
}
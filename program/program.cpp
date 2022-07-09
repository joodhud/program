#include "functions.cpp";


int main()
{
	setlocale(LC_ALL, "rus");


	string username, password, fileusername, filepassword;
	int userchoice; int kal;
	
	bool login = false;
	float height = 0, weight = 0;
	string path = "data.txt";



	cout << "Do you have an account?" << endl << "1.Yes" << endl << "2.No" << endl; cin >> userchoice;



	switch (userchoice)
	{
	case 1:
		cin.ignore();
		cout << "Enter your personal data:" << endl;
	cout << "Username:"; getline(cin, username);
		cout << "Password:"; getline(cin, password);
		readFile(path, fileusername, filepassword, username, weight, height);
		if (username == fileusername && password == filepassword)
		{
			login = true;
			cout << "You are succesfully logined!!!" << endl;
			cout << height << "Рост" << endl;
			cout << weight << "Вес" << endl;
		}
		break;


	case 2:
		cin.ignore();
		cout << "Create your account:" << endl;
		cout << "New username:"; getline(cin, username);
		cout << "New password:"; getline(cin, password);

		cout << "Enter you height:"; cin >> height;
		cout << "Enter you weight:"; cin >> weight;

		writeFile(path, username, password, height, weight);
		login = true;
		break;
	default:
		break;
	}
}
#include "functions.h"

struct edible
{
	string name;
	float kkal = 0;
};

void writeFile(string path, string username, string password, float weight, float height)
{
	ofstream f;
	f.open(path, fstream::app);
	if (f.is_open())
	{
		f << username << ' ';
		f << password << ' ';
		f << height << ' ';
		f << weight << "\n";
	}
	else
		cout << "File is not found" << endl;
	f.close();

}

void readFile(string path, string& fileusername, string& filepassword, string username, float& weight, float& height)
{
	ifstream f;
	string stringweight, stringheight;
	f.open(path);
	if (f.is_open())
	{
		while (fileusername != username)
			f >> fileusername;
		f >> filepassword;
		f >> stringweight; weight = stof(stringweight);
		f >> stringheight; height = stof(stringheight);
	}
	else
		cout << "File is not found" << endl;
	f.close();
}

void Show(vector <edible> &v)
{
	const int size = 56;
	cout << "#" << setw(25) << "Name" << setw(25) << "Kkal\n";
	cout << "----------------------------------------------------" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << i + 1 << setw(25) << v[i].name;
		cout << setw(25) << v[i].kkal << "\n";
	}
}

void readDishes(string path, vector<edible> &v)
{
	edible dish;
	ifstream f; string stringkal;
	const int size = 56;
	f.open(path);
	if (f.is_open())
	{
		for (int i = 0; i < size; i++)
		{
			v.push_back(dish);
			f >> v[i].name;
			f >> stringkal; v[i].kkal = stof(stringkal);
		}
	}
	else
		cout << "File is not found" << endl;
	f.close();
}

void BMI(float height, float weight)
{
	float index = (weight / ((height / 100) * (height / 100)));
	if (index < 16)
	{
		cout << "Severe underweight\n";
	}
	else if (16 < index && index < 18.5)
	{
		cout << "Underweight\n";
	}
	else if (18.5 < index && index < 25)
	{
		cout << "Body weight norm\n";
	}
	else if (25 < index && index < 30)
	{
		cout << "Overweight\n";
	}
	else if (30 < index && index < 35)
	{
		cout << "Obesity 1 degree\n";
	}
	else if (35 < index && index < 40)
	{
		cout << "Obesity 2 degree\n";
	}
	else
		cout << "Obesity 3 degree\n";
	cout << "You'r BMI is:" << index << endl;
}


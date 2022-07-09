#pragma once

using namespace std;

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <iomanip>


#define writeData writeFile(string path, string username, string password, float weight, float height)
#define readData readFile(string path, string& fileusername, string& filepassword, string username, float& weight, float& height)
#define ShowDishes Show(vector <edible> &v)
#define Dishes readDishes(string path, vector<edible> &v)
#define IMT BMI(float height, float weight)
#include<iostream>
#include<string>
using namespace std;

void main()
{
	string name;
	cout << "Hello world\n";
	cout << "What is your name?\n";
	cin >> name;
	cout << "Hello " << name << " " << char(1) << endl;
	system("pause");
}
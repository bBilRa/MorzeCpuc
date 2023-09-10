#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <Windows.h>
#include "replace.cpp"
#include "transform.cpp"
using namespace std;


int main()
{
	setlocale(0, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string s;

	cout << "Введите текст: ";
	cin >> s;
	cout << s;
	Transform tr;
	s = tr.trans(s);
	cout << endl << s;
	return 0;
}

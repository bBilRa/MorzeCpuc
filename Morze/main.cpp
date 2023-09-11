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
	int x;
	string tran = "Морзе";
	bool bu = true;
	do
	{

		while (tran == "Морзе")
		{
			cout << "Введите текст перевода с русского; с морзы; или meny: ";
			getline(cin, s);
			if (s != "meny") {
				Transform tr;
				s = tr.trans(s);

				cout << endl << s << endl;
			}
			else if (s == "meny")
			{
				cout << "Добро пожаловать в МЕНЮ, вот что вы можете сделать:" << endl;
				cout << "1)Завершить программу" << endl << "Ваш вариант: ";
				cin >> x;
				switch (x)
				{
				case 1:
					tran = "0";
					bu = false;
					break;
				}
			}
		}
	} while (bu == false);
	return 0;
}
	

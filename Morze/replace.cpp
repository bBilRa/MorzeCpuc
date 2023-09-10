#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//рабочий вариант
class Replace
{
public:
	string replace(string text, string a, string b)
	{
		setlocale(0, "");
		int num = (int)text.length();

		string* mass = new string[text.length()];

		for (int i = 0; i < num; i++)
		{
			mass[i] = text[i];
			if (mass[i] == a)
			{
				mass[i] = b;
			}
		}
		text = "";
		for (int j = 0; j < num; j++)
		{
			text = text + mass[j];
		}

		return text;
	}
};
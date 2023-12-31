﻿#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include "replace.cpp"
using namespace std;

class Transform
{
public:
	string trans(string txt)
	{
		setlocale(0, "");
		string* alf = new string[33]{ "а","б","в","г","д","е","ж","з","и","й","к","л","м","н","о","п",
										"р","с","т","у","ф","х","ц","ч","ш","щ","ъ","ы","ь","э","ю","я"," "};
		string* morz = new string[33]{ " *- "," -*** "," *-- ", " --* "," -** "," * "," ***- "," --** "," ** "," *--- "," -*- "," *-** "," -- ",
										" -* ", " --- ", " *--* "," *-* ", " *** "," - "," **- "," **-* "," **** "," -*-* "," ---* "," ---- ",
										" --*- "," *--*-* "," -*-- "," -**-"," ***-*** "," **-- "," *-*- "," "};
		Replace rep;
		bool exists = count(begin(*alf), end(*alf), txt[0]);
		if (exists)
		{
			for (int i = 0; i < 32; i++)
			{
				txt = rep.replace(txt, (string)alf[i], (string)morz[i]);
			}
		}
		else 
		{
			txt = "not found";
		}
			


		return txt;
	};
};
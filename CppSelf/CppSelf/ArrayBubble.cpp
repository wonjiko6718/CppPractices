#include <iostream>
#include <fstream>
#include <string>
#include "ArrayBubble.h"
using namespace std;
VecArr::VecArr() // constructor
{
	VecArr_Num.push_back(20);
}
void VecArr::Vecprint() // Array Print
{
	for (int i = 0; i < VecArr_Num.size(); i++)
	{
		cout << VecArr_Num[i] << "  ";
	}
	cout << endl;
}
void VecArr::VecSort() // BubbleSort
{
	for (int j = VecArr_Num.size()-1; j > 0; j--)
	{
		for (int k = 0; k < j; k++)
		{
			if (VecArr_Num[k] > VecArr_Num[k + 1])
			{
				saveNum = VecArr_Num[k];
				VecArr_Num[k] = VecArr_Num[k+1];
				VecArr_Num[k + 1] = saveNum;
			}
		}
	}
}
int main() // main method
{
	VecArr VA_1 = VecArr(); // VA_1 Object
	VA_1.Vecprint();
	VA_1.VecSort();
	VA_1.Vecprint();

	ifstream readFile; // input File
	readFile.open("InFile\\TestFile3.txt"); // need "\\" to use directory
	if (readFile.is_open())
	{
		while (!readFile.eof())
		{
			string str;
			getline(readFile, str);
			cout << str << endl;
		}
	}
	readFile.close();
}

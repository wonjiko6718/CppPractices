#pragma once
#include <vector>
using namespace std;

class VecArr
{
public:
	VecArr(); // constructor
	void Vecprint(); // print Vector Array List
	void VecSort(); // Bubble Sort method

	int saveNum = 0;
	vector<int>VecArr_Num{ 10, 40, 30 ,80, 70, 60, 4, 3, 6, 8};
};

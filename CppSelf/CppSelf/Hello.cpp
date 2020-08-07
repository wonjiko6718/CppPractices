#include <iostream>
#include "Hello.h"
using namespace std;

Numuse::Numuse(int innum) // class Constructor override
{
	SampleNum = innum + 1;
	printf("User Innum+1 = %d \n", SampleNum);
	SampleNum--;
	fingerNum = &SampleNum;
	SampleNum += *fingerNum + 1; // plus PointerNum
	SaveNum = *fingerNum;
}
int main()
{
	cout << "Welcome to Practice \n" << endl;
	Numuse n1 = Numuse(5); // call new object
	cout << n1.fingerNum << endl; // print fingeNum address
	cout << n1.SampleNum << endl; // print SampleNum + fingerNum value
	cout << n1.SaveNum << endl; // print SaveNum Pointer Value = SampleNum

	return 0;
}
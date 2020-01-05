#include <iostream>
#include<vector>
using namespace std;

int main()
{
    cout << "배열 의 크기값을 입력해 주세요:" << endl;
    int userChoice = 0;
    int count = 0;
    cin >> userChoice;
    cout << "선택한 배열의 크기:"<< userChoice << endl;

    vector<int> numList(userChoice);

    for (int i = 0; i < numList.size(); i++)
    {
        count++;
    }
    cout <<"만들어진 배열의 크기:" << count << endl;
    return 0;
}
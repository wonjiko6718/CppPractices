#include <iostream>
#include<vector>
using namespace std;

int main()
{
    cout << "�迭 �� ũ�Ⱚ�� �Է��� �ּ���:" << endl;
    int userChoice = 0;
    int count = 0;
    cin >> userChoice;
    cout << "������ �迭�� ũ��:"<< userChoice << endl;

    vector<int> numList(userChoice);

    for (int i = 0; i < numList.size(); i++)
    {
        count++;
    }
    cout <<"������� �迭�� ũ��:" << count << endl;
    return 0;
}
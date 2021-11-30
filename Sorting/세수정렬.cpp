#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int arrNum[3];

int main()
{
	cin >> arrNum[0] >> arrNum[1] >> arrNum[2];

	sort(arrNum, arrNum + 3);

	for (int i = 0; i < 3; i++)
	{
		cout << arrNum[i] << " ";
	}

	return 0;
}
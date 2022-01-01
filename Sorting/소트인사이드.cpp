#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int N;
int Answer;

int main()
{
	cin >> N;

	string sNum = to_string(N);
	vector<char> vecTemp;

	for (int i = 0; i < sNum.size(); i++)
	{
		vecTemp.push_back(sNum[i]);
	}

	sort(sNum.begin(), sNum.end(), greater<int>());

	string sTemp = "";
	for (int i = 0; i < sNum.size(); i++)
	{
		sTemp += sNum[i];
	}

	Answer = stoi(sTemp);

	cout << Answer << '\n';

	return 0;
}
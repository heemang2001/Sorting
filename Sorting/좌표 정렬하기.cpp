#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int N;
vector<pair<int, int>> vecNum;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		pair<int, int> pTemp;
		cin >> pTemp.first >> pTemp.second;
		vecNum.push_back(pTemp);
	}

	sort(vecNum.begin(), vecNum.end());

	for (auto iter : vecNum)
	{
		cout << iter.first << " " << iter.second << '\n';
	}

	return 0;
}
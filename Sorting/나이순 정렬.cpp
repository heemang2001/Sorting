#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int N;

bool cmp(pair<pair<int, string>,int> p1, pair<pair<int, string>, int> p2)
{
	if (p1.first.first == p2.first.first)
	{
		return p1.second < p2.second;
	}

	return p1.first.first < p2.first.first;
}

int main()
{
	cin >> N;

	vector<pair<pair<int, string>, int>> vecTemp;

	int nTemp = 0;

	for (int i = 0; i < N; i++)
	{
		pair<int, string> pTemp;
		cin >> pTemp.first >> pTemp.second;
		vecTemp.push_back({ pTemp , nTemp++});
	}

	sort(vecTemp.begin(), vecTemp.end(), cmp);

	for (int i = 0; i < N; i++)
	{
		cout << vecTemp[i].first.first << " " << vecTemp[i].first.second << '\n';
	}

	return 0;
}
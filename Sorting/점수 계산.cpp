#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
	return p1.first > p2.first;
}

int main()
{
	vector<pair<int, int>> vecScore;

	for (int i = 1; i <= 8; i++)
	{
		int nTemp;
		cin >> nTemp;
		vecScore.push_back({ nTemp,i });
	}

	sort(vecScore.begin(), vecScore.end(), cmp);

	int sum = 0;
	vector<int> vecNum;

	for (int i = 0; i < 5; i++)
	{
		sum += vecScore[i].first;
		vecNum.push_back(vecScore[i].second);
	}
		
	sort(vecNum.begin(), vecNum.end());

	cout << sum << '\n';
	
	for (int i = 0; i < 5; i++)
	{
		cout << vecNum[i] << " ";
	}

	return 0;
}
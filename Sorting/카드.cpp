#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int N;
long long Answer;

bool cmp(pair<long long, long long> p1, pair<long long, long long> p2)
{
	if (p1.second == p2.second)
	{
		return p1.first < p2.first;
	}

	return p1.second > p2.second;
}

int main()
{
	cin >> N;

	unordered_map<long long, long long> hashCard;

	for (int i = 0; i < N; i++)
	{
		long long lTemp;
		cin >> lTemp;
		hashCard[lTemp]++;
	}

	vector<pair<long long, long long>> vecTemp(hashCard.begin(), hashCard.end());
	sort(vecTemp.begin(), vecTemp.end(), cmp);

	Answer = vecTemp.front().first;

	cout << Answer << '\n';

	return 0;
}
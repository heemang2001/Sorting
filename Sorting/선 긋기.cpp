#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

#define MAX_MIN -1000000001

int N;
int Answer;

bool cmp(pair<int, int> p1, pair<int, int> p2)
{
	if (p1.first == p2.first)
	{
		return p1.second < p2.second;
	}

	return p1.first < p2.first;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	vector<pair<int, int>> vecTemp;

	for (int i = 0; i < N; i++)
	{
		pair<int, int> pTemp;
		cin >> pTemp.first >> pTemp.second;
		vecTemp.push_back(pTemp);
	}

	sort(vecTemp.begin(), vecTemp.end(), cmp);

	int start = MAX_MIN;
	int end = MAX_MIN;
	int lenth = 0;

	for (int i = 0; i < vecTemp.size(); i++)
	{
		if (vecTemp[i].first > end)
		{
			start = vecTemp[i].first;
			end = vecTemp[i].second;
			lenth = abs(end - start);
			Answer += lenth;
		}

		else if(vecTemp[i].first <= end)
		{
			start = end;

			if (vecTemp[i].second > start)
			{
				end = vecTemp[i].second;
				lenth = abs(end - start);
				Answer += lenth;
			}

			else
			{
				continue;
			}			
		}
	}

	cout << Answer << '\n';

	return 0;
}
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int N;
int Answer;

int main()
{
	cin >> N;

	map<int, pair<bool, int>> visited; // {숫자, {좋은 수 여부, 현재 숫자 인덱스}}
	vector<int> vecTemp(N);

	for (int i = 0; i < N; i++)
	{
		cin >> vecTemp[i];

		visited[vecTemp[i]] = { false, i };
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			int sum = vecTemp[i] + vecTemp[j];

			if (visited.count(sum))
			{
				// 반드시 다른 숫자의 합
				if (visited[sum].second == i || visited[sum].second == j)
				{
					continue;
				}

				visited[sum].first = true;
			}
		}
	}	

	for (int i = 0; i < N; i++)
	{
		if (visited[vecTemp[i]].first == true)
		{
			Answer++;
		}
	}

	cout << Answer << "\n";

	return 0;	
}
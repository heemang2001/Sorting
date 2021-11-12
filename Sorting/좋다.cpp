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

	map<int, pair<bool, int>> visited; // {����, {���� �� ����, ���� ���� �ε���}}
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
				// �ݵ�� �ٸ� ������ ��
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
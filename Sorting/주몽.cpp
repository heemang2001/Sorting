#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int N, M;
int Answer;
bool bVisited[15001];

int main()
{
	cin >> N >> M;

	vector<int> vecTemp(N);

	for (int i = 0; i < N; i++)
	{
		int nTemp;
		cin >> nTemp;
		vecTemp[i] = nTemp;
	}

	sort(vecTemp.begin(), vecTemp.end());

	for (int i = 0; i < vecTemp.size(); i++)
	{
		for (int j = i+1; j < vecTemp.size(); j++)
		{
			int sum = vecTemp[i] + vecTemp[j];

			if (!bVisited[i] && !bVisited[j] && sum == M)
			{
				bVisited[i] = true;
				bVisited[j] = true;
				Answer++;
				break;
			}
		}
	}

	cout << Answer << '\n';

	return 0;
}
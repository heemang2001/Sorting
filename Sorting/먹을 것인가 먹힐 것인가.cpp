#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int T;
vector<int> vecAnswer;

int main()
{
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int N, M;
		cin >> N >> M;

		vector<int> vecA;
		vector<int> vecB;

		for (int i = 0; i < N; i++)
		{
			int nTemp;
			cin >> nTemp;
			vecA.push_back(nTemp);
		}

		for (int i = 0; i < M; i++)
		{
			int nTemp;
			cin >> nTemp;
			vecB.push_back(nTemp);
		}

		sort(vecA.begin(), vecA.end(), greater<int>());
		sort(vecB.begin(), vecB.end(), greater<int>());

		int Answer = 0;
		for (int i = 0; i < vecA.size(); i++)
		{
			int size_M = M;

			for (int j = 0; j < vecB.size(); j++)
			{
				if (vecA[i] > vecB[j])
				{
					Answer += size_M;
					break;
				}

				else
				{
					size_M--;
					continue;
				}
			}
		}

		vecAnswer.push_back(Answer);
	}

	for (int i = 0; i < vecAnswer.size(); i++)
	{
		cout << vecAnswer[i] << '\n';
	}

	return 0;
}
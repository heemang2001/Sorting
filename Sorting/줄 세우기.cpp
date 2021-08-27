#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

#define MAX 32001

int N, M;
vector<int> vecStudent[MAX];
int arrInDegree[MAX];
int arrAnswer[MAX];

void topologySort()
{
	queue<int> q;

	// 진입 차수가 0인 노드를 큐에 삽입
	for (int i = 1; i <= N; i++)
	{
		if (arrInDegree[i] == 0)
		{
			q.push(i);
		}
	}

	// 정렬이 완전히 수행하려면 정확히 N개의 노드 방문
	for (int i = 1; i <= N; i++)
	{
		// N개를 방문하기 전에 큐가 비어버리면 사이클 발생
		if (q.empty())
		{
			return;
		}

		int x = q.front();
		q.pop();
		arrAnswer[i] = x;

		for (int i = 0; i < vecStudent[x].size(); i++)
		{
			int y = vecStudent[x][i];

			// 새롭게 진입차수 0이 된 정점을 큐에 삽입
			if (--arrInDegree[y] == 0)
			{
				q.push(y);
			}
		}
	}

	for (int i = 1; i <= N; i++)
	{
		cout << arrAnswer[i] << ' ';
	}
}

int main()
{
	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		int nTemp1;
		int nTemp2;

		cin >> nTemp1 >> nTemp2;

		vecStudent[nTemp1].push_back(nTemp2);

		// 진입차수 ++
		arrInDegree[nTemp2]++;
	}

	// 위상정렬
	topologySort();

	return 0;
}
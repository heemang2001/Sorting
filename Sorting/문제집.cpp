#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int N, M; // ������ ��, ������ ���� ������ ����

// 1. N���� ������ ��� Ǯ��� �Ѵ�.
// 2. ���� Ǫ�� ���� ���� ������ �ִ� ������, ���� Ǫ�� ���� ���� ������ �ݵ�� ���� Ǯ��� �Ѵ�.
// 3. �����ϸ� ���� �������� Ǯ��� �Ѵ�.

void topologicalSort(vector<vector<int>>& problem, vector<int>& edgeCnt)
{
	priority_queue<int, vector<int>, greater<int>> pq;

	// ���� ��ȣ�� �־��ش�.
	for (int i = 1; i <= N; i++)
	{
		if (edgeCnt[i] == 0)
		{
			pq.push(i);
		}
	}

	for (int i = 1; i <= N; i++)
	{
		int p = pq.top();
		pq.pop();

		cout << p << ' ';

		for (auto nextP : problem[p])
		{
			// nextP ������ �ִ� ������
			edgeCnt[nextP]--;

			if (edgeCnt[nextP] == 0)
			{
				pq.push(nextP);
			}				
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;

	vector<vector<int>> problem(N + 1, vector<int>());
	vector<int> edgeCnt(N + 1);

	int a, b;

	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;
		problem[a].push_back(b);
		edgeCnt[b]++; // ������ �������� ī��Ʈ �÷���
	}

	topologicalSort(problem, edgeCnt);

	return 0;
}
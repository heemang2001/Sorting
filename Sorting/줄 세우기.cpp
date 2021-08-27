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

	// ���� ������ 0�� ��带 ť�� ����
	for (int i = 1; i <= N; i++)
	{
		if (arrInDegree[i] == 0)
		{
			q.push(i);
		}
	}

	// ������ ������ �����Ϸ��� ��Ȯ�� N���� ��� �湮
	for (int i = 1; i <= N; i++)
	{
		// N���� �湮�ϱ� ���� ť�� �������� ����Ŭ �߻�
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

			// ���Ӱ� �������� 0�� �� ������ ť�� ����
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

		// �������� ++
		arrInDegree[nTemp2]++;
	}

	// ��������
	topologySort();

	return 0;
}
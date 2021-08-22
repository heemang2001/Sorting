#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int N;
int answer;

vector<pair<int, int>> vecClass;
priority_queue<pair<int, int>> pq;
priority_queue<int> room;

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int nTemp1;
		int nTemp2;

		cin >> nTemp1 >> nTemp2;

		vecClass.push_back({ nTemp1, nTemp2 });
	}

	sort(vecClass.begin(), vecClass.end());

	for (int i = 0; i < N; i++)
	{
		int start = vecClass[i].first;
		int end = vecClass[i].second;

		// ���� ���ǽ� ���� �ð��� �ٸ� ���ǽ��� ������ �ð����� ũ�� �̱�
		while (!pq.empty())
		{
			if (-pq.top().first > start)
			{
				break;
			}

			room.push(pq.top().second);
			pq.pop();
		}

		// �̾��� ��, �� ���ǽ��� ������ �ֱ�
		if (!room.empty())
		{
			pq.push({ -end, room.top() });
			room.pop();
		}

		// �̾��� ��, �� ���ǽ� ������ ���ǽ� �߰�
		else
		{
			answer++;
			pq.push({ -end, answer });
		}
	}

	cout << answer << '\n';

	return 0;
}
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

		// 현재 강의실 시작 시간이 다른 강의실의 끝나는 시간보다 크면 뽑기
		while (!pq.empty())
		{
			if (-pq.top().first > start)
			{
				break;
			}

			room.push(pq.top().second);
			pq.pop();
		}

		// 뽑았을 때, 빈 강의실이 있으면 넣기
		if (!room.empty())
		{
			pq.push({ -end, room.top() });
			room.pop();
		}

		// 뽑았을 때, 빈 강의실 없으면 강의실 추가
		else
		{
			answer++;
			pq.push({ -end, answer });
		}
	}

	cout << answer << '\n';

	return 0;
}
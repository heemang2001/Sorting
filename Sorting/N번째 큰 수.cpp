#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <queue>

using namespace std;

int N;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;

	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			int nTemp;
			cin >> nTemp;
			pq.push(nTemp);

			if (pq.size() > N)
			{
				pq.pop();
			}
		}
	}

	cout << pq.top() << '\n';

	return 0;
}
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int N;
int answer;

int main()
{
	cin >> N;

	vector<int> vecA;
	vector<int> vecB;

	for (int i = 0; i < N; i++)
	{
		int nTemp;
		cin >> nTemp;
		vecA.push_back(nTemp);
	}

	for (int i = 0; i < N; i++)
	{
		int nTemp;
		cin >> nTemp;
		vecB.push_back(nTemp);
	}

	sort(vecA.begin(), vecA.end(), greater<int>());
	sort(vecB.begin(), vecB.end());

	for (int i = 0; i < N; i++)
	{
		answer += vecA[i] * vecB[i];
	}

	cout << answer << '\n';

	return 0;
}
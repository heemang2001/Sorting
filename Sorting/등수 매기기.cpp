#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int N;
long long Answer;

int main()
{
	cin >> N;

	vector<long long> vecTemp;

	for (int i = 0; i < N; i++)
	{
		long long nTemp;
		cin >> nTemp;
		vecTemp.push_back(nTemp);
	}

	sort(vecTemp.begin(), vecTemp.end());

	for (int i = 0; i < N; i++)
	{
		if (vecTemp[i] != i + 1)
		{
			long long differ = abs((i + 1) - vecTemp[i]);
			Answer += differ;
		}
	}

	cout << Answer << '\n';

	return 0;
}
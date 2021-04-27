#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

int main()
{
	int N, K;
	vector<int> arrA;
	vector<int> arrB;

	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		int nTemp = 0;

		cin >> nTemp;

		arrA.push_back(nTemp);
	}

	for (int i = 0; i < K; i++)
	{
		int nTemp = 0;

		cin >> nTemp;

		arrB.push_back(nTemp);
	}

	cout << "test";

	return 0;
}
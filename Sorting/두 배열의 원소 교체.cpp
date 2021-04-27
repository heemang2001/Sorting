#include <iostream>
#include <algorithm>
#include <vector>

using namespace std; 

bool compare(int n1, int n2)
{
	if (n1 > n2)
	{
		return true;
	}

	else
	{
		return false;
	}
}

int main()
{
	int N, K;
	int nValue = 0;

	vector<int> arrA;
	vector<int> arrB;

	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		int nTemp = 0;

		cin >> nTemp;

		arrA.push_back(nTemp);
	}

	for (int i = 0; i < N; i++)
	{
		int nTemp = 0;

		cin >> nTemp;

		arrB.push_back(nTemp);
	}

	sort(arrA.begin(), arrA.end());				// 배열A 오름차순 정렬
	sort(arrB.begin(), arrB.end(), compare);	// 배열B 내림차순 정렬
		
	for (int i = 0; i < K; i++)
	{
		if (arrA[i] < arrB[i])
		{
			swap(arrA[i], arrB[i]);
		}		
	}

	for (int i = 0; i < arrA.size(); i++)
	{
		nValue += arrA[i];
	}

	cout << nValue;

	return 0;
}
#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int T;

//bool BinarySearch(vector<int>& vecTemp, )
//{
//
//}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> T;

	int N;
	int M;

	for (int i = 0; i < T; i++)
	{
		cin >> N;

		vector<int> vecTemp1;
		vector<int> vecTemp2;
		vector<int> vecAnswer;

		for (int j = 0; j < N; j++)
		{
			int nTemp1;
			cin >> nTemp1;
			vecTemp1.push_back(nTemp1);
		}

		sort(vecTemp1.begin(), vecTemp1.end());

		cin >> M;

		for (int k = 0; k < M; k++)
		{
			int nTemp2;
			cin >> nTemp2;
			vecTemp2.push_back(nTemp2);
		}

		for (int a = 0; a < vecTemp2.size(); a++)
		{
			bool bSearched = binary_search(vecTemp1.begin(), vecTemp1.end(), vecTemp2[a]);

			// 찾음
			if (bSearched == true)
			{
				vecAnswer.push_back(1);
			}

			else
			{
				vecAnswer.push_back(0);
			}
		}

		for (int b = 0; b < vecAnswer.size(); b++)
		{
			cout << vecAnswer[b] << '\n';
		}
	}

	return 0;
}

// 시간 초과
//for (int a = 0; a < vecTemp2.size(); a++)
//{
//	auto iter = find(vecTemp1.begin(), vecTemp1.end(), vecTemp2[a]);
//	
//	// 찾음
//	if (iter != vecTemp1.end())
//	{
//		vecAnswer.push_back(1);
//	}

//	else
//	{
//		vecAnswer.push_back(0);
//	}
//}
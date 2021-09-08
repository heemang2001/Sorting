#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int N, M;

int main()
{
	cin >> N >> M;

	unordered_map<string, int> hashDB;
	vector<string> vecAnswer;

	for (int i = 0; i < N; i++)
	{
		string sTemp;
		cin >> sTemp;
		hashDB.insert({ sTemp, 0 });
	}

	for (int i = 0; i < M; i++)
	{
		string sTemp;
		cin >> sTemp;
		
		// 중복 존재시
		if (hashDB.count(sTemp))
		{
			vecAnswer.push_back(sTemp);
		}
	}

	sort(vecAnswer.begin(), vecAnswer.end());

	cout << vecAnswer.size() << '\n';

	for (int i = 0; i < vecAnswer.size(); i++)
	{
		cout << vecAnswer[i] << '\n';
	}

	return 0;
}

// 시간초과
//int main()
//{
//	cin >> N >> M;
//
//	vector<string> vecD;
//	vector<string> vecB;
//	vector<string> vecAnswer;
//
//	for (int i = 0; i < N; i++)
//	{
//		string sTemp;
//		cin >> sTemp;
//		vecD.push_back(sTemp);
//	}
//
//	for (int i = 0; i < M; i++)
//	{
//		string sTemp;
//		cin >> sTemp;
//		vecB.push_back(sTemp);
//	}
//
//	for (int i = 0; i < vecD.size(); i++)
//	{
//		auto it = find(vecB.begin(), vecB.end(), vecD[i]);
//
//		// 찾음
//		if (it != vecB.end())
//		{
//			vecAnswer.push_back(vecD[i]);
//		}
//	}
//
//	sort(vecAnswer.begin(), vecAnswer.end());
//
//	cout << vecAnswer.size() << '\n';
//
//	for (int i = 0; i < vecAnswer.size(); i++)
//	{
//		cout << vecAnswer[i] << '\n';
//	}
//
//	return 0;
//}
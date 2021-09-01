#include <algorithm>
#include <vector>
#include <queue>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int N;
unordered_map<string, int> hashBook;
vector<string> vecAnswer;

bool Compare(pair<string, int> p1, pair<string, int> p2)
{
	return p1.second < p2.second;
}

int main()
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		string sTemp;
		cin >> sTemp;

		// 값이 없으면
		if (hashBook.find(sTemp) == hashBook.end())
		{
			hashBook.insert({ sTemp, 1 });			
		}

		// 값이 있으면
		else
		{
			hashBook[sTemp]++;
		}		
	}

	pair<string, int> MaxValuePair = *max_element(hashBook.begin(), hashBook.end(), Compare);
	int MaxValue = MaxValuePair.second;
	
	for (auto iter = hashBook.begin(); iter != hashBook.end(); iter++)
	{
		if (iter->second == MaxValue)
		{
			vecAnswer.push_back(iter->first);
		}
	}

	sort(vecAnswer.begin(), vecAnswer.end());

	cout << vecAnswer.front() << '\n';
	
	return 0;
}
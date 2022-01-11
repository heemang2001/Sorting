#include <algorithm>
#include <vector>
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int N;

int main()
{
	cin >> N;

	vector<int> vecNum;
	vector<int> vecNum2;
	unordered_map<int, int> hashNum;

	for (int i = 0; i < N; i++)
	{
		int nTemp;
		cin >> nTemp;
		vecNum.push_back(nTemp);
		vecNum2.push_back(nTemp);
	}

	sort(vecNum2.begin(), vecNum2.end());
	vecNum2.erase(unique(vecNum2.begin(), vecNum2.end()), vecNum2.end());

	for (int i = 0; i < vecNum2.size(); i++)
	{
		hashNum.insert({ vecNum2[i],i });
	}

	for (int i = 0; i < vecNum.size(); i++)
	{
		cout << hashNum[vecNum[i]] << ' ';
	}

	return 0;
}
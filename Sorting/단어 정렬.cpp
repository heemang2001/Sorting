#include <algorithm>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int N;

bool cmp(string str1, string str2)
{
	if (str1.size() == str2.size())
	{
		return str1 < str2;
	}

	return str1.size() < str2.size();
}

int main()
{
	cin >> N;

	vector<string> vecStr;

	for (int i = 0; i < N; i++)
	{
		string sTemp;
		cin >> sTemp;
		vecStr.push_back(sTemp);
	}

	sort(vecStr.begin(), vecStr.end(), cmp);

	vecStr.erase(unique(vecStr.begin(), vecStr.end()), vecStr.end());

	for (int i = 0; i < vecStr.size(); i++)
	{
		cout << vecStr[i] << '\n';
	}

	return 0;
}
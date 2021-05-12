#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool compare(string s1, string s2)
{
	return s1 + s2 > s2 + s1;
}

string solution(vector<int> numbers)
{
	string answer = "";
	vector<string> vecString;

	for (int i = 0; i < numbers.size(); i++)
	{
		vecString.push_back(to_string(numbers[i]));
	}

	sort(vecString.begin(), vecString.end(), compare);

	for (int i = 0; i < vecString.size(); i++)
	{
		answer += vecString[i];
	}

	if (vecString[0] == "0")
	{
		answer = "0";
	}

	return answer;
}

int main()
{
	cout << solution({ 6,10,2 }) << '\n';		// 6210
	cout << solution({ 3,30,34,5,9 }) << '\n';  // 9534330

	return 0;
}
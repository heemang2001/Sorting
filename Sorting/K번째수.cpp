#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
	vector<int> answer;

	for (int j = 0; j < commands.size(); j++)
	{
		vector<int> vecTemp;
		int start = commands[j][0] - 1;
		int end = commands[j][1] - 1;
		int index = commands[j][2] - 1;

		for (int k = start; k <= end; k++)
		{
			vecTemp.push_back(array[k]);
		}

		sort(vecTemp.begin(), vecTemp.end());

		int nNum = vecTemp[index];

		answer.push_back(nNum);
	}

	return answer;
}

int main()
{
	vector<int> answer;

	answer = solution({ 1,5,2,6,3,7,4 }, { {2,5,3}, {4,4,1}, {1,7,3} });

	for (int i = 0; i < answer.size(); i++)
	{
		cout << answer[i] << ", ";
	}

	return 0;
}
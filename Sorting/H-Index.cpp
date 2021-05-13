#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

//int solution(vector<int> citations) {
//	sort(citations.begin(), citations.end(), greater<int>());
//
//	for (int i = 0; i < citations.size(); ++i) {
//		if (citations[i] < i + 1) {
//			return i;
//		}
//	}
//
//	return citations.size();
//}

int solution(vector<int> citations)
{
	int answer = 0;
	vector<int> vecTemp;

	sort(citations.begin(), citations.end());

	for (int h = 0; h <= citations.size(); h++)
	{
		int nTemp = 0;

		for (int i = 0; i < citations.size(); i++)
		{
			if (h <= citations[i])
			{
				nTemp++;
			}
		}

		if (nTemp >= h)
		{
			vecTemp.push_back(h);
		}
	}

	answer = vecTemp.back();

	return answer;
}

int main()
{
	cout << solution({ 3,0,6,1,5 }) << '\n';	// 3
	cout << solution({ 5 }) << '\n';			// 1
	cout << solution({ 22,42 }) << '\n';		// 2

	return 0;
}
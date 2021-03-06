// 선택 정렬 시간복잡도 O(n^2) 공간복잡도 O(n)
// 아이디어가 매우 간단

#include <iostream>

using namespace std;

int n = 10;
int target[10] = { 7, 5, 9, 0, 3, 1, 6, 2 ,4 ,8 };

int main()
{
	for (int  i = 0; i < n; i++)
	{
		int min_index = i;

		for (int j = i + 1; j < n; j++)
		{
			if (target[min_index] > target[j])
			{
				min_index = j;
			}
		}
		swap(target[i], target[min_index]);
	}

	for (int i = 0; i < n; i++)
	{
		cout << target[i] << ' ';
	}

	return 0;
}
// 삽입 정렬 시간복잡도 O(n^2) 공간 복잡도 O(n)
// 데이터가 거의 정렬되어 있을 때는 가장 빠름 O(n) 

#include <iostream>

using namespace std;

int n = 10;
int target[10] = { 7, 5, 9, 0, 3, 1, 6, 2 ,4 ,8 };

int main()
{
	for (int i = 1; i < n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (target[j] < target[j - 1])
			{
				swap(target[j], target[j - 1]);
			}

			else
			{
				break;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << target[i] << ' ';
	}

	return 0;
}
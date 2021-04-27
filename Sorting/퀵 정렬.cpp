// 퀵정렬 시간복잡도 : O(nlogn) , 최악일경우는 O(n^2)
// 공간복잡도 : O(n)
// 대부분의 경우 가장 적합하며, 충분히 빠름
// 표준 정렬 라이브러리는 최악의 경우도 O(nlogn)을 보장하도록 설계되어 있음

#include <iostream>

using namespace std;

int n = 10;
int target[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

void quickSort(int* target, int start, int end)
{
	if (start >= end) // 원소가 1개인 경우는 종료
	{
		return;
	}

	int pivot = start;		// 첫번째 데이터를 피벗으로 설정
	int left = start + 1;	// 피벗 오른쪽 1칸
	int right = end;		// 데이터 오른쪽 끝

	while (left <= right)
	{
		// 피벗보다 큰 데이터를 찾을 때까지 반복
		while (left <= end && target[left] <= target[pivot])
		{
			left++;
		}

		// 피벗보다 작은 데이터를 찾을 때까지 반복
		while (right > start && target[right] >= target[pivot])
		{
			right--;
		}

		// 엇갈렸다면 작은 데이터와 피벗을 교체
		if (left > right)
		{
			swap(target[pivot], target[right]);
		}

		// 엇갈리지 않았다면 작은 데이터와 큰 데이터를 교체
		else
		{
			swap(target[left], target[right]);
		}		
	}
	quickSort(target, start, right - 1);
	quickSort(target, right + 1, end);
}

int main()
{
	quickSort(target, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		cout << target[i] << ' ';
	}

	return 0;
}
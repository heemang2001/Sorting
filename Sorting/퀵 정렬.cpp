// ������ �ð����⵵ : O(nlogn) , �־��ϰ��� O(n^2)
// �������⵵ : O(n)
// ��κ��� ��� ���� �����ϸ�, ����� ����
// ǥ�� ���� ���̺귯���� �־��� ��쵵 O(nlogn)�� �����ϵ��� ����Ǿ� ����

#include <iostream>

using namespace std;

int n = 10;
int target[10] = { 7, 5, 9, 0, 3, 1, 6, 2, 4, 8 };

void quickSort(int* target, int start, int end)
{
	if (start >= end) // ���Ұ� 1���� ���� ����
	{
		return;
	}

	int pivot = start;		// ù��° �����͸� �ǹ����� ����
	int left = start + 1;	// �ǹ� ������ 1ĭ
	int right = end;		// ������ ������ ��

	while (left <= right)
	{
		// �ǹ����� ū �����͸� ã�� ������ �ݺ�
		while (left <= end && target[left] <= target[pivot])
		{
			left++;
		}

		// �ǹ����� ���� �����͸� ã�� ������ �ݺ�
		while (right > start && target[right] >= target[pivot])
		{
			right--;
		}

		// �����ȴٸ� ���� �����Ϳ� �ǹ��� ��ü
		if (left > right)
		{
			swap(target[pivot], target[right]);
		}

		// �������� �ʾҴٸ� ���� �����Ϳ� ū �����͸� ��ü
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
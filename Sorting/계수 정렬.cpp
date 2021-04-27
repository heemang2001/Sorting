// 계수정렬 시간복잡도 공간복잡도 O(N+K)
// 동일한 값을 가지는 데이터가 여러 개 등장할 때 효과적으로 사용가능
// ex) 학생 성적을 정렬해야 할 때

#include <iostream>

#define MAX_VALUE 9

using namespace std;

int n = 15;

// 모든 원소의 값이 0보다 크거나 같다고 가정
int arr[15] = { 7, 5, 9, 0, 3, 1, 6, 2, 9, 1, 4, 8, 0, 5, 2 };

// 모든 범위를 포함하는 배열 선언(모든 값은 0으로 초기화)
int cnt[MAX_VALUE + 1];

int main()
{
	for (int i = 0; i < n; i++)
	{
		cnt[arr[i]] += 1; // 각 데이터에 해당하는 인덱스의 값 증가
	}
	
	for (int i = 0; i <= MAX_VALUE; i++) // 배열에 기록된 정렬 정보 확인
	{
		for (int j = 0; j < cnt[i]; j++)
		{
			cout << i << ' '; // 띄어쓰기를 기준으로 등장한 횟수만크 인덱스 출력
		}
	}

	return 0;
}
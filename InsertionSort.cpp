// ConsoleApplication20.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
void my_sort(int arr[], int size)
{
	int tmp = 0;
	int k = 0;

	for (int i = 1; i <= size-1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (arr[i] < arr[j]) {//앞의 해당되는 인덱스가 더 작을 때 집어 넣는다.이 뒤는 값을 집어 넣는 과정
				tmp = arr[i];
				k = i-1;//k는 first index 임
				while (k >= j)
				{
					arr[k + 1] = arr[k];
					k--;
				}
				arr[j] = tmp;
				break;
			}
		}
	}
}
int main()
{
	int my_arr[] = {7,2,5,1,9,1234,32,52,5555};
	int len = sizeof(my_arr) / sizeof(int);
	my_sort(my_arr, len);
	for (int i = 0; i < len; i++)
		std::cout << my_arr[i] << " ";
    return 0;
}


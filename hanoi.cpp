#include "stdafx.h"
#include <iostream>
int hanoi(int n)
{
	if (n == 1) return 1;
	if (n == 2) return 3;
	return 2 * hanoi(n - 1) +1;
}
int main()
{
	int i = 5;
	printf("하노이 %d : %d", 4, hanoi(4));
    return 0;
}
#pragma once

#ifndef _VECTOR_H
#define _VECTOR_H

#include<iostream>
using namespace std;


/************************
* Vector에 관련된 struct *
*************************/


struct Vector
{
	int* arr = nullptr;	// 배열 가리키는 포인터
	int size = 0;		// 현재 사이즈
	int capacity = 5;	// 최대 용량
};


/*************************
* Vector에 사용되는 함수들 *
**************************/

// 비어있는 배열 할당.
void make_vector(Vector& vec);

// 데이터의 길이 반환.
int size(Vector& vec);

// 벡터의 최대 용량 반환.
int capacity(Vector& vec);

// 맨 뒤에 데이터 추가.
// 용량이 꽉 차면 배열 재할당.
void push_back(Vector& vec, int data);

// 맨 뒤에 데이터 삭제 및 값 반환.
// 너무 용량이 남으면 배열 재할당.
int pop_back(Vector& vec);

// 모든 데이터 출력
void print_all(Vector& vec);

#endif _VECTOR_H
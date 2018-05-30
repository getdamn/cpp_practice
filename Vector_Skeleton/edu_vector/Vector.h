#pragma once

#ifndef _VECTOR_H
#define _VECTOR_H

#include<iostream>
using namespace std;


/************************
* Vector�� ���õ� struct *
*************************/


struct Vector
{
	int* arr = nullptr;	// �迭 ����Ű�� ������
	int size = 0;		// ���� ������
	int capacity = 5;	// �ִ� �뷮
};


/*************************
* Vector�� ���Ǵ� �Լ��� *
**************************/

// ����ִ� �迭 �Ҵ�.
void make_vector(Vector& vec);

// �������� ���� ��ȯ.
int size(Vector& vec);

// ������ �ִ� �뷮 ��ȯ.
int capacity(Vector& vec);

// �� �ڿ� ������ �߰�.
// �뷮�� �� ���� �迭 ���Ҵ�.
void push_back(Vector& vec, int data);

// �� �ڿ� ������ ���� �� �� ��ȯ.
// �ʹ� �뷮�� ������ �迭 ���Ҵ�.
int pop_back(Vector& vec);

// ��� ������ ���
void print_all(Vector& vec);

#endif _VECTOR_H
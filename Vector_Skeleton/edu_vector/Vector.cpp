#include"Vector.h"

void make_vector(Vector& vec)
{
	vec.arr = new int[vec.capacity];
}

int size(Vector& vec)
{
	return vec.size;
}

int capacity(Vector& vec)
{
	return vec.capacity;
}

void push_back(Vector& vec, int data)
{
	if (vec.size == vec.capacity)
	{
		int *tmp_arr = new int[vec.size + 1];//���ο� �迭 �Ҵ� +1�ؼ�
		for (int i = 0; i < vec.size; i++)//���ο� �迭�� �����͸� �ű�
			tmp_arr[i] = vec.arr[i];
		tmp_arr[vec.size] = data;//������ ��ҿ� data�� ���� ����.
		delete[] vec.arr;
		vec.arr = tmp_arr;//����.arr ����
		
		vec.size++;//size, capacity 1�� ����
		vec.capacity++;
	}
	else
	{
		vec.arr[vec.size] = data;//���� �� ��ҿ� �����͸� ���� ����
		vec.size++;//������ 1 ����
	}
}

int pop_back(Vector& vec)
{
	if (vec.size > 0) {
		int ret = vec.arr[vec.size-1];
		vec.arr[vec.size] = NULL;
		vec.size--;
		return ret;
	}
	return NULL;
}

void print_all(Vector& vec)
{
	std::cout << '{';
	for (int i = 0; i < vec.size; i++) {
		std::cout << vec.arr[i];
		if (i != vec.size - 1)
			std::cout << ",";
	}
	std::cout << "}";
}
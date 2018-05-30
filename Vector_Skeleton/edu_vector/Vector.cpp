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
		int *tmp_arr = new int[vec.size + 1];//새로운 배열 할당 +1해서
		for (int i = 0; i < vec.size; i++)//새로운 배열에 데이터를 옮김
			tmp_arr[i] = vec.arr[i];
		tmp_arr[vec.size] = data;//마지막 요소에 data를 집어 넣음.
		delete[] vec.arr;
		vec.arr = tmp_arr;//벡터.arr 대입
		
		vec.size++;//size, capacity 1씩 증가
		vec.capacity++;
	}
	else
	{
		vec.arr[vec.size] = data;//제일 끝 요소에 데이터를 집어 넣음
		vec.size++;//사이즈 1 증가
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
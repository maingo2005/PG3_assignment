#include<stdio.h>
#include"string.h"
#include <string>
#include <chrono>
#include <iostream>
template<typename T>

T Move(T&& right) {
	return right;
}

int main(){

	std::chrono::system_clock::time_point stratTime, endTime;
	stratTime = std::chrono::system_clock::now();
	std::string A(100000, 'a');
	printf("100,000�������ړ��ƃR�s�[�Ŕ�r���܂����B\n");

	std::string copyConstructed(A);
	endTime = std::chrono::system_clock::now();

	auto millisec = std::chrono::duration_cast<std::chrono::microseconds>(endTime - stratTime).count();
	std::cout << " �R�s�[:" << millisec << "us\n" << std::endl;

	stratTime = std::chrono::system_clock::now();

	std::string moveConstructed(std::move(A));
	endTime = std::chrono::system_clock::now();

	auto m = std::chrono::duration_cast<std::chrono::microseconds>(endTime - stratTime).count();
	std::cout << "�ړ�:" << m << "us\n" << std::endl;
}
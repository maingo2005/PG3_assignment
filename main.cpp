#include <stdio.h>
#include <thread>
#include<Windows.h>
#include <functional>
#include <list>
#include<vector>
#include <iostream>
using namespace std;

void Output(string a){
	cout << a << "\n";
}

int main() {
	string iti = "threas1";
	string ni = "threas2";
	string san = "threas3";

	std::thread th1(Output, iti);
	th1.join();

	std::thread th2(Output, ni);
	th2.join();

	std::thread th3(Output, san);
	th3.join();

	return 0;
}
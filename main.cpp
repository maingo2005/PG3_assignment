#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

int main() {

	list<const char*> eki{ "Tokyou","kanda","Akihabara","Okachimachi","Ueno","Uguisudani",
		"Nippori","Tabata","Komagome","Sugamo","Otsuka","Ikebukuro",
		"Mejiro","Takadanobaba","Shin-Okubo","Shinjuku","Yoyogi","Harajuku",
		"Shibuya","Ebisu","Meguro","Gotanda","Osaki","Shinagawa",
		"Tamachi","Hamamatsucho","Shimbashi","Yurakucho" };

	for (list<const char*>::iterator itr = eki.begin(); itr != eki.end(); itr++)
	{
		cout << *itr << endl;

	}

	cout << endl;

	for (list<const char*>::iterator itr = eki.begin(); itr != eki.end(); itr++)
	{
		if (strcmp(*itr, "Tabata") == 0) {
			eki.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}

	for (list<const char*>::iterator itr = eki.begin(); itr != eki.end(); itr++)
	{
		cout << *itr << endl;

	}

	cout << endl;

	for (list<const char*>::iterator itr = eki.begin(); itr != eki.end(); itr++)
	{
		if (strcmp(*itr, "Tamachi") == 0) {
			eki.insert(itr, "Takanawa Geteway");
			++itr;
		}
	}

	for (list<const char*>::iterator itr = eki.begin(); itr != eki.end(); itr++)
	{
		cout << *itr << endl;

	}

	return 0;
}
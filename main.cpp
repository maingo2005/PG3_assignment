#include <stdio.h>

class Animal {
public:
	virtual void Voice() {
		printf("“®•¨\n");
	}
};

class Dog :public Animal {
public:
	void Voice() {
		printf("ƒƒ“\n");
	}
};

class Cat :public Animal {
public:
	void Voice() {
		printf("ƒjƒƒƒ“\n");
	}
};

int main() {

	Animal* animal[2] = { new Dog,new Cat };

	animal[0]->Voice();
	animal[1]->Voice();

	delete animal[0];
	delete animal[1];

	return 0;
}
#include <stdio.h>

class Isuuti {
public:
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	float size;
	float radius;
};

class Circle :public Isuuti {
public:
	void Size();
	void Draw() { printf("�ʐρ@%f\n", size); };
};

class Rectangle :public Isuuti {
public:
	void Size()override;
	void Draw() { printf("�ʐρ@%f\n", size); };
};

void Isuuti::Size() {}

void Circle::Size() {
	radius = 5.0f;
	printf("�~�̔��a�@%f\n", radius);
	size = radius * radius * 3.14f;
}

void Rectangle::Size() {
	radius = 5.0f;
	printf("�Z�`�̔��a�@%f\n", radius);
	size = radius * 2.0f * radius * 2.0f;
}

int main(void) {

	Isuuti* ishape[2] = { new Circle,new Rectangle };

	ishape[0]->Size();
	ishape[1]->Size();

	ishape[0]->Draw();
	ishape[1]->Draw();

	delete ishape[0];
	delete ishape[1];

	return 0;
}
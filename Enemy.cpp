#include "Enemy.h"
#include <stdio.h>


void Enemy::Sekkin() {
	printf("�G���ڋ߁I\n");
	printf("0�������Ă�������\n");
	scanf_s("%d", &a);
	if (a == 0) {
		index++;
	}
}

void Enemy::Syageki() {
	printf("�G���ˌ��I\n");
	printf("1�������Ă�������\n");
	scanf_s("%d", &b);
	if (b == 1) {
		index++;
	}
}

void Enemy::Ridatu() {
	printf("�G�����E�I\n");
	printf("0�������Ă�������\n");
	scanf_s("%d", &a);
	if (a == 0) {
		index++;
	}
}

void (Enemy::* Enemy::spEnemyTable[])() = {
	&Enemy::Sekkin,
	&Enemy::Syageki,
	&Enemy::Ridatu
};

void Enemy::Update() {
	(this->*spEnemyTable[index])();
}

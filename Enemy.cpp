#include "Enemy.h"
#include <stdio.h>

void Enemy::Sekkin() {
	printf("�G���ڋ�!!\n");
	if (index == 0) {
		index++;
	}
}

void Enemy::Syageki() {
	printf("�G���ˌ�!!\n");
	if (index == 0) {
		index++;
	}
}

void Enemy::Ridatu() {
	printf("�G�����E!!\n");
	if (index == 0) {
		index++;
	}
}

void Enemy::Update(){
	(this->*spEnemyTable[index])();
}

void (Enemy::* Enemy::spEnemyTable[])() = {
	&Enemy::Sekkin,
	&Enemy::Syageki,
	&Enemy::Ridatu
};

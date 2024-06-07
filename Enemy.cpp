#include "Enemy.h"
#include <stdio.h>


void Enemy::Sekkin() {
	printf("“G‚ªÚ‹ßI\n");
	printf("0‚ð‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &a);
	if (a == 0) {
		index++;
	}
}

void Enemy::Syageki() {
	printf("“G‚ªŽËŒ‚I\n");
	printf("1‚ð‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n");
	scanf_s("%d", &b);
	if (b == 1) {
		index++;
	}
}

void Enemy::Ridatu() {
	printf("“G‚ª—£’EI\n");
	printf("0‚ð‰Ÿ‚µ‚Ä‚­‚¾‚³‚¢\n");
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

#pragma once

class Enemy {
public:
	void Sekkin();//�ڋ�
	void Syageki();//�ˌ�
	void Ridatu();//���E

	static void(Enemy::* spEnemyTable[])();

	void Update();

private:
	int index = 0;
	int a = 0;
	int b = 0;
};

#pragma once

class Enemy {
public:
	void Sekkin();//�ڋ�
	void Syageki();//�ˌ�
	void Ridatu();//���E
	void Update();

	static void(Enemy::* spEnemyTable[])();
private:
	int index = 0;
};

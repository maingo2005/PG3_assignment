#pragma once

class Enemy {
public:
	void Sekkin();//Ú‹ß
	void Syageki();//ËŒ‚
	void Ridatu();//—£’E

	static void(Enemy::* spEnemyTable[])();

	void Update();

private:
	int index = 0;
	int a = 0;
	int b = 0;
};

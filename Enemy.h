#pragma once

class Enemy {
public:
	void Sekkin();//Ú‹ß
	void Syageki();//ËŒ‚
	void Ridatu();//—£’E
	void Update();

	static void(Enemy::* spEnemyTable[])();
private:
	int index = 0;
};

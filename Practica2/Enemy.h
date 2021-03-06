#ifndef _ENEMY_H_
#define _ENEMY_H_

class Enemy {
	private:
		int  m_x;
		int  m_dir;	             //1 == right / 0 == left
		char m_sprite = '@';

	public:
		Enemy();
		Enemy(int x, int dir);
		int getX() const;
		void setX(int x);
		int getDir() const;
		void setDir(int dir);
		char getSprite() const;
		~Enemy();
};

#endif

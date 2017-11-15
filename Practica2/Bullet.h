#ifndef _BULLET_H_
#define _BULLET_H_

class Bullet {

	private:
		int m_x;
		int m_dir;	//1 == right / 0 == left

	public:
		Bullet();
		Bullet(int x, int dir);
		int getX() const;
		void setX(int x);
		int getDir() const;
		void setDir(int dir);
		~Bullet();
};
#endif

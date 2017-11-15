#ifndef _MUSHROOM_H_
#define _MUSHROOM_H_

class Mushroom {
	private:
		int        m_x;
		const int  m_points = 100;

	public:
		Mushroom();
		Mushroom(int x);
		int getX() const;
		void setX(int x);
		int getPoints() const;
		~Mushroom();
};
#endif

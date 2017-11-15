#ifndef _PLAYER_H_
#define _PLAYER_H_

class Player {
	private:
		int m_x;
		int m_lives = 3;
		int m_score = 0;

	public:
		Player();
		Player(int x);
		int getX() const;
		void setX(int x);
		int getLives() const;
		void setLives(int lives);
		int getScore() const;
		void setScore(int score);
		~Player();
};

#endif

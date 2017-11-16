#ifndef _WORLD_H_
#define _WORLD_H_

#include <list>


class World {
	private:
		const unsigned int            m_world_size          = 80;
		bool                          m_end_game            = false;
		const int                     m_enemy_prob          = 25;
		const int                     m_mush_prob           = 80;
		const unsigned int            m_mush_points         = 100;
		Player*                       m_main_pj;
		std::list<Mushroom*>	      m_mush_list;
		std::list<Enemy*>	          m_enemy_list;
		std::list<Bullet*>		      m_bullet_list;

	public:
									  World();
			  bool                    getEndGame()               const;
			  void				      setEndGame(bool end_game);
		      std::list<Mushroom*>*   getListMushroom()          const;
		      std::list<Enemy*>*      getListEnemies()           const;
		      std::list<Bullet*>*     getListBullets()           const;
		      Player*				  getPlayer()                const;
			  void                    generateEnemy();
			  void                    generateMushroom();
			  void                    generateBullet(int dir);            //1 == right / 0 == left
			  void                    moveBullets();
			  void                    moveEnemies();
			  void                    checkEnemyColission();											
			  void                    checkMushroomColission();										
			  void                    checkBulletColission();
			  void                    sortBulletList();
			  void                    sortEnemyList();
			  void                    sortMushroomList();
								      ~World();

};
#endif
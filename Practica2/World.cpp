#include "stdafx.h"
#include "World.h"
#include "Bullet.h"
#include "Player.h"
#include "Enemy.h"
#include "Mushroom.h"

World::World() {
	m_main_pj = new Player(40);
}

bool World::getEndGame() const {
	return m_end_game;
}

void World::setEndGame(bool end_game) {
	m_end_game = end_game;
}

std::list<Mushroom*>* World::getListMushroom() const {
	return &m_mush_list;
}

std::list<Enemy*>* World::getListEnemies() const {
	return &m_enemy_list;
}

std::list<Bullet*>* World::getListBullets() const {
	return m_bullet_list;
}

Player * World::getPlayer() const {
	return m_main_pj;
}

void World::generateEnemy() {
}

void World::generateMushroom() {
}

void World::generateBullet(int dir) {
}

void World::moveBullets() {

}

void World::moveEnemies() {
}

void World::checkEnemyColission() {
}

void World::checkMushroomColission() {
}

void World::checkBulletColission() {
}

void World::sortBulletList() {
}

void World::sortEnemyList() {
}

void World::sortMushroomList() {
}

World::~World() {
}
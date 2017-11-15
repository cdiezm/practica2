#include "stdafx.h"
#include "Enemy.h"

Enemy::Enemy() {
	m_x = 0;
	m_dir = 0;
}

Enemy::Enemy(int x, int dir) {
	m_x = x;
	m_dir = dir;
}

int Enemy::getX() const {
	return m_x;
}

void Enemy::setX(int x) {
	m_x = x;
}

int Enemy::getDir() const {
	return m_dir;
}

void Enemy::setDir(int dir) {
	m_dir = dir;
}

Enemy::~Enemy() {
}
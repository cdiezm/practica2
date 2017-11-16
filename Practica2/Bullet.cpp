#include "stdafx.h"
#include "Bullet.h"

Bullet::Bullet() {
	m_x      = 0;
	m_dir    = 0;
	m_sprite = ' ';
}

Bullet::Bullet(int x, int dir) {
	m_x      = x;
	m_dir    = dir;
	m_sprite = (dir) ? '>': '<';
}

int Bullet::getX() const {
	return m_x;
}

void Bullet::setX(int x) {
	m_x = x;
}

int Bullet::getDir() const {
	return m_dir;
}

void Bullet::setDir(int dir) {
	m_dir = dir;
	setSprite((dir) ? '>' : '<');
}

char Bullet::getSprite() {
	return m_sprite;
}

Bullet::~Bullet() {
}

//Private Methods
void Bullet::setSprite(char sprite) {
	m_sprite = sprite;
}
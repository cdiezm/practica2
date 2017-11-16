#include "stdafx.h"
#include "Player.h"

Player::Player() {
	m_x = -1;
}

Player::Player(int x) {
	m_x = x;
}

int Player::getX() const {
	return m_x;
}

void Player::setX(int x) {
	m_x = x;
}

int Player::getLives() const {
	return m_lives;
}

void Player::setLives(int lives) {
	m_lives = lives;
}

int Player::getScore() const {
	return m_score;
}

void Player::setScore(int score) {
	m_score = score;
}

char Player::getSprite() const {
	return m_sprite;
}

Player::~Player() {
}
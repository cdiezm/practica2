#include "stdafx.h"
#include "Mushroom.h"

Mushroom::Mushroom() {
	m_x = -1;
}

Mushroom::Mushroom(int x) {
	m_x = -1;
}

int Mushroom::getX() const {
	return m_x;
}

void Mushroom::setX(int x) {
	m_x = x;
}

int Mushroom::getPoints() const {
	return m_points;
}

Mushroom::~Mushroom() {
}
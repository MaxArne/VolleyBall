#pragma once
#ifndef BALL_H

#include<string>

class Ball
{
public:
	Ball(int x_position, int y_position, std::string texturePath)
		: m_x_Position(x_position), m_y_Position(y_position), m_texturePath(texturePath){}

	int getX_Position() {
		return m_x_Position;
	}

	int getY_Position() {
		return m_y_Position;
	}

	std::string getTexturePath() {
		return m_texturePath;
	}

private:
	int m_x_Position;
	int m_y_Position;

	// Festlegen des Shapes für Box2d Simulation
	b2CircleShape circle;
	circle.m_radius=32/SCALE
	
	//Definition der Parameter des Balls/ Physikalisches Verhalten
	b2FixtureDef fdef;
	fdef.shape=&circle;
	//Elastizitätseinstellung zwischen 1 (unelastisch) bis 0 (komplett elastisch)
	fdef.restitution=0.95;
	//Einstellen der Masse pro Fläche eines Objektes und damit auch die Trägheit
	fdef.density=0.2;
	
	std::string m_texturePath;
};


#endif // !PLAYER_H

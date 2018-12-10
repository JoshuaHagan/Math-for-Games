#pragma once


class Vector2
{
private:
	float xPos;
	float yPos;

public:
	Vector2();
	Vector2(float, float);

	float Magnitude();
	float Normalize();
	float Distance(Vector2& other);

	float GetX();
	float GetY();
	//give the addition and subtraction for the vector
	Vector2 operator + (Vector2& rhs);
	Vector2 operator - (Vector2& rhs);
	//give the multiplication for the vector
	Vector2 operator * (float & rhs);
	
	bool operator == (Vector2& rhs);
	bool operator != (Vector2& rhs);
};
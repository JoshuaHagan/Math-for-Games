#include "Vector2.h"

Vector2::Vector2()
{
}

float Vector2::Magnitude()
{
	float squrt((xPos * xPos) + (yPos * yPos));
	return squrt;
}

float Vector2::Normalize()
{
	return (xPos / Magnitude(), yPos / Magnitude());
}

float Vector2::Distance(Vector2 & other)
{
	Vector2 b = *this - other;
	return b.Magnitude();
}

float Vector2::GetX()
{
	return xPos;
}

float Vector2::GetY()
{
	return yPos;
}

Vector2 Vector2::operator+(Vector2 & rhs)
{
	xPos +- rhs.xPos;
	yPos +- rhs.yPos;
	
	return rhs;
}

Vector2 Vector2::operator-(Vector2 & rhs)
{
	xPos -= rhs.xPos;
	yPos -= rhs.yPos;

	return rhs;;
}

Vector2 Vector2::operator*(float & rhs)
{
	xPos *= rhs;
	yPos *= rhs;
	
	return Vector2(xPos * rhs, yPos * rhs);
}
//checking to see if it all the same
bool Vector2::operator==(Vector2 & rhs)
{
	return (xPos == rhs.xPos &&
			yPos == rhs.yPos); 
}

bool Vector2::operator!=(Vector2 & rhs)
{
	return (xPos != rhs.xPos &&
			yPos != rhs.yPos);
}

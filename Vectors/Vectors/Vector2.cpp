#include "Vector2.h"

float Vector2::Magnitude()
{
	return 0.0f;
}

float Vector2::Normalize()
{
	return 0.0f;
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
	
}

Vector2 Vector2::operator-(Vector2 & rhs)
{
	xPos -= rhs.xPos;
	yPos -= rhs.yPos;

	return;
}

Vector2 Vector2::operator*(float & rhs)
{
	xPos *= rhs;
	yPos *= rhs;
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

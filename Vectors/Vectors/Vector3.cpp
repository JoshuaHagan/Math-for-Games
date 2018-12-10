#include "Vector3.h"

Vector3::Vector3()
{
}

float Vector3::Magnitude()
{
	float Vector3 = (xPos * xPos) + (yPos * yPos) + (zPos * zPos);
	return (xPos,yPos,zPos);
}

float Vector3::Normalize()
{
	return (xPos / Magnitude(), yPos / Magnitude(), zPos / Magnitude());;
}

float Vector3::Distance(Vector3 & other)
{
	Vector3 b = *this - other;
	return b.Magnitude();
} 

float Vector3::GetX()
{
	return xPos;
}

float Vector3::GetY()
{
	return yPos;
}

float Vector3::GetZ()
{
	return zPos;
}

Vector3 Vector3::operator+(Vector3 & rhs)
{
	xPos +- rhs.xPos;
	yPos +- rhs.yPos;
	zPos + -rhs.zPos;
	return Vector3(xPos + rhs.xPos, yPos + rhs.yPos, zPos + rhs.zPos);
}

Vector3 Vector3::operator-(Vector3 & rhs)
{
	xPos -= rhs.xPos;
	yPos -= rhs.yPos;
	zPos -= rhs.zPos;

	return Vector3(xPos - rhs.xPos, yPos - rhs.yPos, zPos - rhs.zPos);
}

Vector3 Vector3::operator*(float & rhs)
{
	xPos *= rhs;
	yPos *= rhs;
	zPos *= rhs;

	return Vector3(xPos * rhs, yPos * rhs, zPos * rhs);
}

bool Vector3::operator==(Vector3 & rhs)
{
	return (xPos == rhs.xPos && yPos == rhs.yPos &&
			zPos == rhs.zPos);
}

bool Vector3::operator!=(Vector3 & rhs)
{
	return  (xPos != rhs.xPos && yPos != rhs.yPos &&
			zPos != rhs.zPos);
}

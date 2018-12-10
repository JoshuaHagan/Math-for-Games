#include "Vector3.h"

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
}

Vector3 Vector3::operator-(Vector3 & rhs)
{
	xPos -= rhs.xPos;
	yPos -= rhs.yPos;
	zPos -= rhs.zPos;
}

Vector3 Vector3::operator*(float & rhs)
{
	xPos *= rhs;
	yPos *= rhs;
	zPos *= rhs;
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

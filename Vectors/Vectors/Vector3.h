#pragma once


class Vector3
{
private:
	float xPos;
	float yPos;
	float zPos;
public:
	Vector3();
	Vector3(float x, float y, float z);

	float Magnitude();
	float Normalize();
	float Distance(Vector3& other);

	float GetX();
	float GetY();
	float GetZ();
	//give the addition and subtraction for the vector
	Vector3 operator + (Vector3& rhs);
	Vector3 operator - (Vector3& rhs);
	//give the multiplication for the vector
	Vector3 operator * (float & rhs);

	bool operator == (Vector3& rhs);
	bool operator != (Vector3& rhs);
};
#pragma once
#include <math.h>
class Vector2D
{
public:
	Vector2D(int x, int y) {};
	~Vector2D() {};

	float GetX() { return x; }
	float GetY() { return y; }

	float SetX(float xPos) { x = xPos; }
	float SetY(float yPos) { y = yPos; }

	float Length()
	{
		return sqrt(x * x + y * y);
	}

	void Normalize()
	{
		float length = Length();

		if (length > 0)
		{
			(*this) *= 1 / length;
		}
	}

	Vector2D operator+(const Vector2D& v2) const
	{
		return Vector2D(x + v2.x, y + v2.y);
	}

	friend Vector2D& operator+=(Vector2D& v1, const Vector2D& v2)
	{
		v1.x += v2.x;
		v1.y += v2.y;

		return v1;
	}

	Vector2D operator-(const Vector2D& v2) const
	{
		return Vector2D(x - v2.x, y - v2.y);
	}

	friend Vector2D& operator-=(Vector2D& v1, const Vector2D& v2)
	{
		v1.x -= v2.x;
		v1.y -= v2.y;

		return v1;
	}

	Vector2D operator*(float scalar) const
	{
		return Vector2D(x * scalar, y * scalar);

	}

	Vector2D& operator*=(float scalar)
	{
		x *= scalar;
		y *= scalar;

		return *this;
	}

	Vector2D operator/(float scalar)
	{
		return Vector2D(x / scalar, y / scalar);
	}

	Vector2D operator/=(float scalar)
	{
		x /= scalar;
		y /= scalar;
	}

private:
	float x;
	float y;
};



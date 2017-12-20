  /// <summary>
/// Vector 3 class
/// Cliona Hayden
/// </summary>

#include "MyVector3.h"
#include <string.h>
#include <math.h>

#define PI           3.14159265358979323846

/// <summary>
/// Default constructor set all 3 values to zero
/// </summary>
MyVector3::MyVector3() :
	x{ 0.0 },
	y{ 0.0 },
	z{ 0.0 }
{
}

/// <summary>
/// default destructor
/// nothing to release because we only have
/// primitive type data
/// </summary>
MyVector3::~MyVector3()
{
}

/// <summary>
/// 
/// </summary>
/// <returns>the vector as a string surrounded by square brackets and seperated by commas</returns>
std::string MyVector3::toString()
{
	const std::string output = "[" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + "]";
	return output;	
}

MyVector3::MyVector3(double t_x, double t_y, double t_z)
{
	x = t_x;
	y = t_y;
	z = t_z;
}

MyVector3::MyVector3(sf::Vector3f t_sfVector) :
	x{ static_cast <float> (x) },
	y{ static_cast <float> (y) },
	z{ static_cast <float> (z) }

{

}

MyVector3::MyVector3(sf::Vector3i t_sfVector) 
{
	x = static_cast <int> (x);
	y = static_cast <int> (y);
	z = static_cast <int> (z);
}

MyVector3::MyVector3(sf::Vector2i t_sfVector) 
{
	x = static_cast <int> (x);
	y = static_cast <int> (y);
}

MyVector3::MyVector3(sf::Vector2u t_sfVector)
{
	x = static_cast <int> (x);
	y = static_cast <int> (y);

	if (x < 0)
	{
		x *= -1;
	}
	if (y < 0)
	{
		y *= -1;
	}
}

MyVector3::MyVector3(sf::Vector2f t_sfVector) :
	x{ static_cast <float> (x) },
	y{ static_cast <float> (y) }
{
}

bool MyVector3::operator==(const MyVector3 t_right) const
{
	if (x == t_right.x && y == t_right.y && z == t_right.z)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool MyVector3::operator!=(const MyVector3 t_right) const
{
	if (x == t_right.x && y == t_right.y && z == t_right.z)
	{
		return false;
	}
	else
	{
		return true;
	}
}

MyVector3 MyVector3::operator+(const MyVector3 t_right) const
{
	double xValue = x + t_right.x;
	double yValue = y + t_right.y;
	double zValue = z + t_right.z;
	return {xValue, yValue, zValue};
}

MyVector3 MyVector3::operator-(const MyVector3 t_right) const
{
	double xValue = x - t_right.x;
	double yValue = y - t_right.y;
	double zValue = z - t_right.z;
	return { xValue, yValue, zValue };
}

MyVector3 MyVector3::operator*(const double t_scalar) const
{
	double xValue = x * t_scalar;
	double yValue = y * t_scalar;
	double zValue = z * t_scalar;
	return { xValue, yValue, zValue };
}

MyVector3 MyVector3::operator/(const double t_divisor) const
{
	if (t_divisor != 0)
	{
		double xValue = x / t_divisor;
		double yValue = y / t_divisor;
		double zValue = z / t_divisor;
		return { xValue, yValue, zValue };
	}
	else
	{
		return { x,y,z };
	}
}

MyVector3 MyVector3::operator+=(const MyVector3 t_right)
{
	x = x + t_right.x;
	y = y + t_right.y;
	z = z + t_right.z;
	return { x, y, z };
}

MyVector3 MyVector3::operator-=(const MyVector3 t_right)
{
	x = x - t_right.x;
	y = y - t_right.y;
	z = z - t_right.z;
	return { x, y, z };
}

MyVector3 MyVector3::operator-()
{
	x *= -1;
	y *= -1;
	z *= -1;

	return{ x,y,z };
}

double MyVector3::length() const
{
	double lenght = 0.0;
	lenght = sqrt((x * x) + (y * y) + (z * z));
	return lenght;
}

double MyVector3::lengthSquared() const
{
	double lenght = 0.0;
	lenght = (x * x) + (y * y) + (z * z);
	return lenght;
}












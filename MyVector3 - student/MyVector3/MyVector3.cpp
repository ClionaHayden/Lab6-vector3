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

// basic 3d vector constructor
MyVector3::MyVector3(double t_x, double t_y, double t_z)
{
	x = t_x;
	y = t_y;
	z = t_z;
}

// 3d float vector constructor
MyVector3::MyVector3(sf::Vector3f t_sfVector) :
	x{ static_cast <float> (t_sfVector.x) },
	y{ static_cast <float> (t_sfVector.y) },
	z{ static_cast <float> (t_sfVector.z) }

{

}

// 3d integer vector constructor
MyVector3::MyVector3(sf::Vector3i t_sfVector) 
{
	x = static_cast <int> (t_sfVector.x);
	y = static_cast <int> (t_sfVector.y);
	z = static_cast <int> (t_sfVector.z);
}

// 2d integer vector constructor
MyVector3::MyVector3(sf::Vector2i t_sfVector) 
{
	x = static_cast <int> (t_sfVector.x);
	y = static_cast <int> (t_sfVector.y);
}

// 2d unsigned vector constructor
MyVector3::MyVector3(sf::Vector2u t_sfVector)
{
	x = static_cast <int> (t_sfVector.x);
	y = static_cast <int> (t_sfVector.y);

	if (x < 0)
	{
		x *= -1;
	}
	if (y < 0)
	{
		y *= -1;
	}
}

// 2d float vector constructor
MyVector3::MyVector3(sf::Vector2f t_sfVector) :
	x{ static_cast <float> (t_sfVector.x) },
	y{ static_cast <float> (t_sfVector.y) }
{
}

// returns true if both vectors are equal, otherwise false
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

// returns true if both vectors are not equal, otherwise false
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

// add two vectors and returns the resulting vector
MyVector3 MyVector3::operator+(const MyVector3 t_right) const
{
	double xValue = x + t_right.x;
	double yValue = y + t_right.y;
	double zValue = z + t_right.z;
	return {xValue, yValue, zValue};
}

// subtracts two vectors and returns the resulting vector
MyVector3 MyVector3::operator-(const MyVector3 t_right) const
{
	double xValue = x - t_right.x;
	double yValue = y - t_right.y;
	double zValue = z - t_right.z;
	return { xValue, yValue, zValue };
}

// multiplys the vector by a constant and returns the resulting vector
MyVector3 MyVector3::operator*(const double t_scalar) const
{
	double xValue = x * t_scalar;
	double yValue = y * t_scalar;
	double zValue = z * t_scalar;
	return { xValue, yValue, zValue };
}

// divides the vector by a constant and returns the resulting vector
MyVector3 MyVector3::operator/(const double t_divisor) const
{
	if (t_divisor != 0)
	{
		double xValue = x / t_divisor;
		double yValue = y / t_divisor;
		double zValue = z / t_divisor;
		return { xValue, yValue, zValue };
	}
	// return original vector if divisor is 0 
	else
	{
		return { x,y,z };
	}
}

// adds both vectors and returns and assigns the resulting vector to the variable on the left
MyVector3 MyVector3::operator+=(const MyVector3 t_right)
{
	x = x + t_right.x;
	y = y + t_right.y;
	z = z + t_right.z;
	return { x, y, z };
}

// subtracts both vectors and returns and assigns the resulting vector to the variable on the left
MyVector3 MyVector3::operator-=(const MyVector3 t_right)
{
	x = x - t_right.x;
	y = y - t_right.y;
	z = z - t_right.z;
	return { x, y, z };
}

// returns the negative of the vector
MyVector3 MyVector3::operator-()
{
	x *= -1;
	y *= -1;
	z *= -1;

	return{ x,y,z };
}

// returns the magnitude of the vector
double MyVector3::length() const
{
	double lenght = 0.0;
	lenght = sqrt((x * x) + (y * y) + (z * z));
	return lenght;
}

// returns the magnitude squared of the vector
double MyVector3::lengthSquared() const
{
	double lenghtSquared = 0.0;
	lenghtSquared = (x * x) + (y * y) + (z * z);
	return lenghtSquared;
}

// returns the dot product of two vectors
double MyVector3::dot(const MyVector3 t_other) const
{
	double dot = (x * t_other.x) + (y * t_other.y) + (z * t_other.z);
	return dot;
}

// returns the cross product of two vectors
MyVector3 MyVector3::crossProduct(const MyVector3 t_other) const
{
	double xValue = (y * t_other.z) - (z * t_other.y);
	double yValue = (z * t_other.x) - (x * t_other.z);
	double zValue = (x * t_other.y) - (y * t_other.x);
	return {xValue, yValue, zValue};
}

// returns the angle between two vectors
double MyVector3::angleBetween(const MyVector3 t_other) const
{
	double cosine = dot(t_other) / (length() * t_other.length());
	double angleInRadians = std::acos(cosine);
	double angleInDegrees = angleInRadians * (180 / PI);
	return angleInDegrees;
}

// returns the unit vector of the vector
MyVector3 MyVector3::unit() const
{
	double xValue = x / length();
	double yValue = y / length();
	double zValue = z / length();
	return {xValue, yValue, zValue};
}

// changes the values of the vector so it has a magnitude of 1
void MyVector3::normalise() 
{
	double magnitude = sqrt((x * x) + (y * y) + (z * z)); // length formula
	x /= magnitude;
	y /= magnitude;
	z /= magnitude;
}

// returns the coordinates of one vector projected onto another
MyVector3 MyVector3::projection(const MyVector3 t_other) const
{
	double projection = dot(t_other) / lengthSquared();
	return {x * projection, y * projection , z * projection };
}

// returns the rejection of one vector from another
MyVector3 MyVector3::rejection(const MyVector3 t_other) const
{
	double projection = dot(t_other) / lengthSquared();
	return {x - projection,y - projection, z - projection };
}












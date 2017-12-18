  /// <summary>
/// Vector 3 class
/// Cliona Hayden
/// </summary>
#include "MyVector3.h"
#include <string.h>
#define PI           3.14159265358979323846

/// <summary>
/// Defautl constructor set all 3 values to zero
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

MyVector3::MyVector3(double x, double y, double z)
{
}

MyVector3::MyVector3(sf::Vector3f t_sfVector) :
	x{ static_cast <float> (x) },
	y{ static_cast <float> (y) },
	z{ static_cast <float> (z) }

{

}

MyVector3::MyVector3(sf::Vector3i t_sfVector) 
{
	t_sfVector.x = (int)t_sfVector.x;
	t_sfVector.y = (int)t_sfVector.y;
	t_sfVector.z = (int)t_sfVector.z;
}








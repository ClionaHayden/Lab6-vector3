/// <summary>
/// Cliona Hayden
/// estimate
/// time spent
/// issues
/// 
/// </summary>
#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 


#include "MyVector3.h"
#include <SFML\Graphics.hpp>
#include <string>


int main()
{
	MyVector3 vectorOne{};

	std::cout << vectorOne.toString() << std::endl;
	std::cout << "Null / default constructor" << std::endl;
	std::cout << "----------------------------" << std::endl;
	
	MyVector3 vectorTwo{};

	vectorOne = { 4.0, 3.0, 5.0 };

	vectorTwo = { 4.0, 3.0, 5.0 };

	// for == and != operator
	bool result = vectorOne == vectorTwo;

	std::cout << result << std::endl;
	std::cout << 1 << std::endl;
	std::cout << "== operator" << std::endl;
	std::cout << "----------------------------" << std::endl;

	result = vectorOne != vectorTwo;
	std::cout << result << std::endl;
	std::cout << 0 << std::endl;
	std::cout << "!= operator" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// + operator
	MyVector3 vectorThree{};

	vectorOne = { 3.0, 10.0, -5.0 };

	vectorTwo = { 4.0, 3.0, 10.0 };

	vectorThree = (vectorOne + vectorTwo);

	std::cout << vectorThree.toString() << std::endl;
	std::cout << "{7 , 13 , 5}" << std::endl;
	std::cout << " + operator" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// - operator
	vectorOne = { -3.0, 10.66, 5.4 };

	vectorTwo = { -4.0, 3.0, 10.0 };

	vectorThree = (vectorOne - vectorTwo);

	std::cout << vectorThree.toString() << std::endl;
	std::cout << "{ 1 , 7.66 , -4.6}" << std::endl;
	std::cout << " - operator" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// * operator (multiplcation by scalar)

	vectorOne = { -3.0, 10.66, 5.4 };

	vectorThree = vectorOne * 4;

	std::cout << vectorThree.toString() << std::endl;
	std::cout << "{ -12 , 42.64 , 21.6}" << std::endl;
	std::cout << " * operator" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// / operator (division by constant)

	vectorOne = { -3.0, 10.66, 5.4 };

	vectorThree = vectorOne / 2.5;

	std::cout << vectorThree.toString() << std::endl;
	std::cout << "{ -1.2 , 4.264 , 2.16}" << std::endl;
	std::cout << " / operator" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// += operator

	vectorOne = { -3.0, 10.66, 5.4 };
	vectorThree = { 4.0, -3.4, 5.789};

	vectorThree += vectorOne;

	std::cout << vectorThree.toString() << std::endl;
	std::cout << "{ 1 , 7.26 , 11.189}" << std::endl;
	std::cout << " += operator" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// -= operator

	vectorThree = { 4.0, -3.4, 5.789 };
	vectorOne = { -3.0, 10.66, 5.4 };

	vectorThree -= vectorOne;

	std::cout << vectorThree.toString() << std::endl;
	std::cout << "{ 7 , -14.06 , 0.389}" << std::endl;
	std::cout << " -= operator" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// - operator (negative of vector)

	vectorThree = { 4.0, -3.4, 5.789 };

	vectorThree =  -vectorThree;

	std::cout << vectorThree.toString() << std::endl;
	std::cout << "{ -4 , 3.4 , -5.789}" << std::endl;
	std::cout << " - operator (negative)" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// lenght of vector
	double length = 0.0;

	vectorThree = { 4.0, -3.4, 5.789 };
	
	length = vectorThree.length();

	std::cout << length << std::endl;
	std::cout << "7.81489097812631" << std::endl;
	std::cout << "length" << std::endl;
	std::cout << "----------------------------" << std::endl;

	// length squared o a vector
	vectorThree = { 4.0, -3.4, 5.789 };

	length = vectorThree.lengthSquared();

	std::cout << length << std::endl;
	std::cout << "61.0725209999999942428783142161" << std::endl;
	std::cout << "length" << std::endl;
	std::cout << "----------------------------" << std::endl;

	std::system("pause");
	return EXIT_SUCCESS;
}



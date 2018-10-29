#include <iostream>

void exercise25()
{
	// 1111 1111 1111 1111 1110 0011 1000 0000
	std::cout << (~'q' << 6) << std::endl;	// -7296
}

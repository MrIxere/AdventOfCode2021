#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>

int main() {
	std::ifstream value("AoC2.txt");
	
	std::string space = " ";

	int x = 0;
	int y = 0;
	int move = 0;
	int prevMove = 0;

	while (value >> space >> move)
	{
		if (space == "forward")
		{
			x += move;
			y += move * prevMove;
		}
		if (space == "down")
		{
			prevMove += move;
		}
		if (space == "up")
		{
			prevMove -= move;
		}
	}
	value.close();
	std::cout << x * y;
	return 0;
}
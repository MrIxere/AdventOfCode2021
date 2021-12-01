#include <iostream>
#include <vector>
#include <iterator>
#include <fstream>

int main() {
	std::ifstream value("AoC1.txt");
	std::istream_iterator<int> start(value), end;
	std::vector<int> input(start, end);
    int result = 0, A, B;
    int val = input[0];
    for (int i : input)
    {
        if (i > val)
            result++;
        val = i;
    }
	std::cout << "the answer is:" << result << std::endl;
    result = 0;
    for (int i = 3; i < input.size(); i++)
    {
        A = input[i - 3] + input[i - 2] + input[i - 1];
        B = input[i - 2] + input[i - 1] + input[i];
        if (B > A)
            result++;
    }
	std::cout << "the second answer is:" << result << std::endl;
}

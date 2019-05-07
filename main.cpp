#include <iostream>
// auto only suport c++11, so compile use: g++ main.cpp -std=c++11
int main()
{
	auto increaceLb = [](int a,int b) -> int { return a + b; };
	int a = increaceLb(10,10);
	std::cout << "a is " << a ; 
	return 0;
}

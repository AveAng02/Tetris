
#include <iostream>


namespace Saffire
{
	__declspec(dllimport) void print();
}




int main()
{
	int i = 0;

	Saffire::print();

	std::cin >> i;

	return 0;
}





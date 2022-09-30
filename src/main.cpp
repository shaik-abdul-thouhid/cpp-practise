#include <iostream>
#include <string>
#include <initializer_list>
#include <cstdlib>

void (*test)(std::initializer_list<int>) = [](std::initializer_list<int> A) -> void
{
	for (auto a : A)
		std::cout << a << std::endl;
};

[[noreturn]] void exitFunction()
{
	std::cout << "Value divided by 0" << std::endl;
	exit(0);
}

[[nodiscard]] double callbackFunction(int a, int b, double (*divide)(int, int), void (*test)(std::initializer_list<int>), void (*exitFuncion)())
{
	if (b == 0)
		exitFunction();
	else
	{
		test({33, 1, 464, 13256, 12344});
		return divide(a, b);
	}
}

double divide(int a, int b) { return a / b; }

int main(
	[[maybe_unused]] int argc,
	[[maybe_unused]] char const *argv[])
{
	double result = callbackFunction(15, 0, divide, test, exitFunction);

	return 0;
}

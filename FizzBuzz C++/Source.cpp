

#include <iostream>
#include <string>

int main()
{
	//initiate loop and iterate from 1 to 100
	for (int i = 1; i < 101; i++)
	{
		//check if # is divisible by 3
		if (i % 3 == 0)
		{
			//check if # is also divisible by 5
			if (i % 5 == 0)
			{
				std::cout << "FizzBuzz\n";
			}
			//only divisible by 3
			else
			{
				std::cout << "Fizz\n";
			}
		}
		//only divisible by 5
		else if (i % 5 == 0)
		{
			std::cout << "Buzz\n";
		}
		//prints # if not divisible by 3 or 5
		else
			std::cout << i << "\n";
	}



}
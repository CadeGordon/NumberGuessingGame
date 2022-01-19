#include <iostream>
#include <cstring>
#include <time.h>



int main()
{

	int randomGuess;
	int response;

	srand(time(NULL));

	int min = 1;
	int max = 100;

	bool isCorrect = false;

	bool stinkyCheater = false;


	std::cout << "please think of a number 1-100" << std::endl;


	



	while (isCorrect == false || stinkyCheater)
	{

		if (max == min)
		{
			stinkyCheater = true;



			break;
		}


		randomGuess = rand() % (max - min) + min;

		std::cout << "is your number " << randomGuess << " ?" << std::endl;
		std::cout << "if this was your number press 1." << "if not press 2. to keep guessing" << std::endl;

		std::cin >> response;

		if (response == 1)
		{
			isCorrect = true;
		}
		else if (response == 2)
		{
			std::cout << "was your number higher or lower?" << std::endl;
			std::cout << "if the number is higher than the one you are thinking press 1." << "or if the number you are thinking is lower press 2." << std::endl;
			
			std::cin >> response;

			if (response == 1)
			{
				min = randomGuess + 1;
			}
			else if (response == 2)
			{
				max = randomGuess;
			}

		}
		
		system("cls");
	}



	if (stinkyCheater)
	{
		std::cout << "you are a naughty naughty stinky cheater" << std::endl;
	}

	return 0;


	

        
}
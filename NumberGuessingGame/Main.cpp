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

	//tell user to think of a number in range
	std::cout << "please think of a number 1-100" << std::endl;


	



	while (isCorrect == false || stinkyCheater)
	{
		//identifies if the player is cheating
		if (max == min)
		{
			stinkyCheater = true;



			break;
		}

		//selects a random number within the range
		randomGuess = rand() % (max - min) + min;

		//ask if it is the player number
		std::cout << "is your number " << randomGuess << " ?" << std::endl;
		//gets players input
		std::cout << "if this was your number press 1." << "if not press 2. to keep guessing" << std::endl;

		std::cin >> response;

		//if input is 1 then...
		if (response == 1)
		{
			//...closet the game
			isCorrect = true;
		}
		//else if...
		else if (response == 2)
		{
			//ask if the players number is higher or lower
			std::cout << "was your number higher or lower?" << std::endl;
			std::cout << "if the number is higher than the one you are thinking press 1." << "or if the number you are thinking is lower press 2." << std::endl;
			
			std::cin >> response;

			//if input is 1...
			if (response == 1)
			{
				//...add to the to the mininmum number in the range
				min = randomGuess + 1;
			}
			// else if...
			else if (response == 2)
			{
				//...
				max = randomGuess;
			}

		}
		
		system("cls");
	}
	

	//plays message if the playter cheats
	if (stinkyCheater)
	{
		std::cout << "you are a naughty naughty stinky cheater" << std::endl;
	}

	return 0;


	

        
}
#include <iostream>
#include <ctime>
using namespace std;

int roll()
{
	//Rolling a die is equivalent to generating a random number in the range [1, 6].
	//You are provided this function for rolling a die.
	//The function returns the point scored which is a random number in the range [1, 6].
	return rand() % 6 + 1;
}
int playComputer(const int computerScore)
{
	//This function plays one turn of the computer and returns the score of the turn.
	//You are required to define this function so that your program works exactly as described and prints exactly the same output.
	int computerscore=0;
	int computerroll=0;
	bool x=true;
	do
	{
	if(computerscore<20)
	{
		computerroll=roll();
		cout << "--->Rolled and got " << computerroll << " points." << endl;
		if (computerroll==1)
		{
			computerscore=0;
			break;
		}
		computerscore+=computerroll;
		cout << "\t Turn score so far = " << computerscore << " and computer total score if turn stopped here = " << computerscore+computerScore << endl;

		if(computerscore+computerScore>=100)
		{
			cout << "Computer stopping the turn because winning score is already reached." << endl;
			break;
		}
		
	}
	else
		x=false;
	}while (x);
	cout << "Computer turn stopped with a score of " << computerscore << " points." << endl;
	return computerscore;
}
int playHuman(const int humanScore)
{
	//This function plays one turn of the human and returns the score of the turn.
	//You are required to define this function so that your program works exactly as described and prints exactly the same output.
	
	
	int humanscore=0;
	int humanroll=roll();
	char choice;
	bool x=true;
	do
	{
	cout << "--->Rolled and got " << humanroll << " points." << endl;
	if (humanroll==1)
	{
		humanscore=0;
		cout << "Human turn stopped with a score of " << humanscore << " points." << endl;
		break;
	}
	else
	{
		humanscore+=humanroll;
		cout << "\t Turn score so far = " << humanscore << " and Human total score if turn stopped here = " << humanscore+humanScore << endl;
		
		if (humanscore+humanScore>=100)
		{
			cout << "Human stopping the turn because winning score is already reached." << endl;
			cout << "Human turn stopped with a score of " << humanscore << " points." << endl;
			break;
		}
		else
		{
			cout << "Do you want to roll again or stop the turn? Enter R to roll again or S to stop the turn. ";
			cin >> choice;
			if (choice == 's' || choice == 'S')
			{
				cout << "Human turn stopped with a score of " << humanscore << " points." << endl;
				x=false;
			}
			else if (choice=='r' || choice=='R')
				humanroll=roll();
		}
	}
	} while (x);
	return humanscore;
}
int main()
{
	
	cout << "This program demonstrates a game popularly known as the Game of Pigs." << endl;
	cout << "There are two players in the game: a human and a computer." << endl;
	cout << "The game is played in turns where each player plays after the other player stops." << endl;
	cout << "At each turn a player rolls a die several times and sums the points scored to compute a turn score." << endl;
	cout << "The game is won by the player who first reaches a total score of 100 points or more." << endl;
	cout << "Any of the two players can start the game. In this program the computer will start the game." << endl;
	cout << endl;
	
	cout << "The computer plays with the following rule:" << endl;
	cout << "\tIt rolls a die repeatedly where at each roll a point between 1 and 6 is scored." << endl;
	cout << "\tIf the point scored is 1, then the computer turn ends with a score of zero points for the turn." << endl;
	cout << "\tIf the point scored is not 1, then it is added to the computer turn score and the computer rolls again." << endl;
	cout << "\tThe computer will end its turn when its turn score reaches 20 points or more." << endl;
	cout << "Once the computer turn ends, then the human starts playing." << endl;
	cout << endl;
	
	cout << "The human plays with the following rule:" << endl;
	cout << "\tThe human rolls a die repeatedly where at each roll a point between 1 and 6 is scored." << endl;
	cout << "\tIf the point scored is 1, then the human turn ends with zero points for the turn." << endl;
	cout << "\tIf the point scored is not 1, then it is added to the human turn score." << endl;
	cout << "\tThe human is then asked to choose to either roll again or to stop the turn." << endl;
	cout << "\tIf the human chooses to roll again then the human rolls again otherwise the human turn ends." << endl;
	cout << "Once the human turn ends, then the computer starts playing." << endl;
	cout << endl;
	
	cout << "Any of the players will also end its turn when the players wins the game." << endl;
	system("Pause");
	

	
	//Seed the random number generator with a fixed value so that every student working on 
	//Microsoft Visual C++ 2010 Express gets the same random numbers and the same output.
	//You may change the seed value to any other non-negative integer or to time(0) in order to test your program rigorously.
	const unsigned int seedValue = 1;
	srand(seedValue);

	int humanTotalScore = 0, computerTotalScore = 0;
	while (true)
	{
		//Play Computer
		cout << endl << "Computer Playing... [Computer Total Score so far = " << computerTotalScore << "]" << endl;
		int computerTurnScore = playComputer(computerTotalScore);
		computerTotalScore += computerTurnScore;
		cout << "Computer total score so far = " << computerTotalScore << endl;
		if (computerTotalScore >= 100)
		{
			cout << "Computer Won the Game!" << endl;
			break;
		}
		system("Pause");

		//Play Human
		cout << endl << "Human Playing... [Human Total Score so far = " << humanTotalScore << "]" << endl;
		int humanTurnScore = playHuman(humanTotalScore);
		humanTotalScore += humanTurnScore;
		cout << "Human total score so far = " << humanTotalScore << endl;
		if (humanTotalScore >= 100)
		{
			cout << "Human Won the Game!" << endl;
			break;
		}
		system("Pause");
	}
	


	system("Pause");
	return 0;
}
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;


enum enWinner { Player = 1, Computer = 2, Draw = 3 };

enum enGame { Stone = 1, Paper = 2, Scissors = 3 };

struct stRoundInfo
{
	short RoundNumber = 0;
	enGame Player1Choice;
	enGame ComputerChoice;
	enWinner Winner;
	string WinnerName;
};

struct stGameRuslts
{
	short GameRounds = 0;
	short PlayerWinTime = 0;
	short computerWinTime = 0;
	short DrawTimes = 0;
	enWinner GameWinner;
	string WinnerName;
};

int RandomNumber(int From, int To)
{
	int Random = rand() % (To - From + 1) + From;
	return Random;
}

int ReadHowManyRounds()
{
	int Round = 3;

	do
	{
		cout << "How Many Rounds 1 to 10 ?" << endl;
		cin >> Round;

	} while (!(Round < 10 && Round > 1));

	return Round;
}

enGame Playr1Choice()
{
	int Choice = 0;
	cout << "Your Choice: [1]:Stone, [2]:Paper, [3]:Scissors ?";
	cin >> Choice;

	return (enGame)Choice;
}

enGame ComputerChoice()
{

	return (enGame)RandomNumber(1, 3);
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo)
{

	if (RoundInfo.ComputerChoice == RoundInfo.Player1Choice)
	{
		return enWinner::Draw;
	}

	switch (RoundInfo.Player1Choice)
	{
	case enGame::Stone:
		if (RoundInfo.ComputerChoice == enGame::Paper)
		{
			return enWinner::Computer;
		}
	case enGame::Paper:
		if (RoundInfo.ComputerChoice == enGame::Scissors)
		{
			return enWinner::Computer;
		}
	case enGame::Scissors:
		if (RoundInfo.ComputerChoice == enGame::Stone)
		{
			return enWinner::Computer;
		}
		break;
	}

	return enWinner::Player;

}

string WinnerName(enWinner Winner)
{
	if (Winner == enWinner::Computer)
	{
		return "Computer";
	}
	else if (Winner == enWinner::Player)
	{
		return "Player";
	}
	else
	{
		return "No Winner";
	}
}

string ChoiceName(enGame Choice)
{
	string arrChoice[3] = { "stone", "Paper", "Scissors" };
	return arrChoice[Choice - 1];
}
enWinner WhoWintheGame(short playerWinTime, short ComputerWinTime)
{
	if (playerWinTime > ComputerWinTime)
	{
		return enWinner::Player;
	}
	else if (playerWinTime < ComputerWinTime)
	{
		return enWinner::Computer;
	}
	else
	{
		return enWinner::Draw;
	}
}

void setScreenColor(enWinner Winner)
{
	switch (Winner)
	{
	case enWinner::Player:
		system("Color 2F");
		break;

	case enWinner::Computer:
		system("Color 4F");
		cout << "\a";
		break;
	default:
		system("color 6F");
		break;
	}
}


void PrintRondResult(stRoundInfo RoundInfo)
{
	cout << "\________Round [" << RoundInfo.RoundNumber << "]___________\n\n";
	cout << "Player Choice   : " << ChoiceName(RoundInfo.Player1Choice) << endl;
	cout << "Computer Choice : " << ChoiceName(RoundInfo.ComputerChoice) << endl;
	cout << "Round Winner    : " << RoundInfo.WinnerName << endl;
	cout << "______________________________________________\n" << endl;

	setScreenColor(RoundInfo.Winner);

}

stGameRuslts FillGameReslults(int Rounds, short Player1WinTime, short ComputerWinTime, short DrawTime)
{
	stGameRuslts GameRuslt;

	GameRuslt.GameRounds = Rounds;
	GameRuslt.computerWinTime = ComputerWinTime;
	GameRuslt.PlayerWinTime = Player1WinTime;
	GameRuslt.DrawTimes = DrawTime;
	GameRuslt.GameWinner = WhoWintheGame(Player1WinTime, ComputerWinTime);
	GameRuslt.WinnerName = WinnerName(GameRuslt.GameWinner);

	return GameRuslt;
}

stGameRuslts PlayGame(int NumberOfRounds)
{
	short Play1WinTime = 0, ComputerWinTime = 0, DrawTime = 0;

	stRoundInfo RoundInfo;

	for (short Rounds = 1; Rounds <= NumberOfRounds; Rounds++)
	{
		cout << "\nRound [" << Rounds << "]" << " begins:" << endl;

		RoundInfo.RoundNumber = Rounds;
		RoundInfo.Player1Choice = Playr1Choice();
		RoundInfo.ComputerChoice = ComputerChoice();
		RoundInfo.Winner = WhoWonTheRound(RoundInfo);
		RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

		if (enWinner::Computer == RoundInfo.Winner)
		{
			Play1WinTime++;
		}
		else if (enWinner::Computer == RoundInfo.Winner)
		{
			ComputerWinTime++;
		}
		else
		{
			DrawTime++;
		}
		PrintRondResult(RoundInfo);
	}

	return FillGameReslults(NumberOfRounds, Play1WinTime, ComputerWinTime, DrawTime);

}

string Tabs(int NumberOfTabs)
{
	string t = "";

	for (int i = 0; i < NumberOfTabs; i++)
	{
		t += "\t";
	}
	return t;
}

void ShowGameOverScreen()
{
	cout << Tabs(5) << "-----------------------------------------------------" << endl;
	cout << Tabs(6) << "+++ G a m e  O v e r +++\n";
	cout << Tabs(5) << "-----------------------------------------------------" << endl;
}

void ShowGameResults(stGameRuslts GameResult)
{
	cout << Tabs(5) << "--------------------------------------------------------------" << endl;
	cout << Tabs(5) << "_________________-_-_-_-_+[Game Results]+_-_-_-_-_-___________" << endl;
	cout << Tabs(5) << "--------------------------------------------------------------" << endl;
	cout << Tabs(5) << "Game Rounds        :" << GameResult.GameRounds << endl;
	cout << Tabs(5) << "Player1 won times  :" << GameResult.PlayerWinTime << endl;
	cout << Tabs(5) << "Computer won times :" << GameResult.computerWinTime << endl;
	cout << Tabs(5) << "Draw times         :" << GameResult.DrawTimes << endl;
	cout << Tabs(5) << "Final Winner       :" << GameResult.WinnerName << endl;
}

void ResetScreen()
{
	system("cls");
	system("color 0F");
}

void StartGame()
{
	char PlayAgin = 'Y';

	do
	{
		ResetScreen();
		stGameRuslts GameResults = PlayGame(ReadHowManyRounds());
		ShowGameOverScreen();
		ShowGameResults(GameResults);
		cout << Tabs(5) << "do you want to play again ? Y/N?";
		cin >> PlayAgin;

	} while (PlayAgin == 'Y' || PlayAgin == 'y');


}


int main()
{
	srand((unsigned)time(NULL));

	StartGame();


	return 0;
}
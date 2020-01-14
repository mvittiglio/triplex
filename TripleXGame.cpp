#include "TripleXGame.h"

#include <ctime>
#include <iostream>

#include "ldapi.h"

#include "LaunchDarklyGameDialog.h"

#include "UserInfo.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(ptr) if(ptr) { delete ptr; ptr = 0; }
#endif

TripleXGame::TripleXGame()
	: LdMobileKey("mob-e23cd11b-b158-4572-8932-50772294d932"), GameDialog(0), LdClient(0), User(0)
{
}

TripleXGame::~TripleXGame()
{
	Shutdown();
}

void TripleXGame::Init()
{
	User = new UserInfo();
	User->PromptForUsername();

	InitLaunchDarkly();

	srand(static_cast<unsigned int>(time(0)));

	GameDialog = new LaunchDarklyGameDialog(LdClient);

}

// NOTE: Must be called after user is initialized. - MV@20191217
void TripleXGame::InitLaunchDarkly()
{
	unsigned int maxwaitmilliseconds = 10 * 1000;
	LDConfig* config = LDConfigNew(LdMobileKey);
	LdClient = LDClient::Init(config, User->GetAsLdClientUser(), maxwaitmilliseconds);

	return;
}

void TripleXGame::Play()
{
	GameDialog->PrintLogo();

	while(MaxLevel > CurrentLevel)
	{
		bool bLevelCompletedSuccessfully = PlayGame(CurrentLevel);
		std::cin.clear();
		std::cin.ignore();

		if(bLevelCompletedSuccessfully)
		{
			GameDialog->PrintSuccessDialog();
			++CurrentLevel;
		}
		else
		{
			GameDialog->PrintFailureDialog();
			break;
		}

		std::cout << "\n";
	}

	bool bHackSuccessful = MaxLevel <= CurrentLevel;
	GameDialog->PrintGameOver(bHackSuccessful);

	return;
}

void TripleXGame::Shutdown()
{
	ShutdownLaunchDarkly();
	if(GameDialog)
	{
		delete GameDialog;
		GameDialog = 0;
	}
}

void TripleXGame::ShutdownLaunchDarkly()
{
		LdClient->close();
}

bool TripleXGame::PlayGame(int LevelDifficulty)
{
	GameDialog->PrintIntroductionString(LevelDifficulty);

	// Declare 3 number codes
	const int CodeA = (rand() % LevelDifficulty) + LevelDifficulty;
	const int CodeB = (rand() % LevelDifficulty) + LevelDifficulty;
	const int CodeC = (rand() % LevelDifficulty) + LevelDifficulty;

	const int CodeSum = CodeA + CodeB + CodeC;
	const int CodeProduct = CodeA * CodeB * CodeC;

	// Print sum and product to the terminal
	GameDialog->ShowGameDialog(CodeSum, CodeProduct);

	int GuessA, GuessB, GuessC;
	std::cin >> GuessA;
	std::cin >> GuessB;
	std::cin >> GuessC;

	int GuessSum = GuessA + GuessB + GuessC;
	int GuessProduct = GuessA * GuessB * GuessC;

	return GuessSum == CodeSum && GuessProduct == CodeProduct;
}

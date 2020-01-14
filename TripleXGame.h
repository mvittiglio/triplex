#pragma once

class LDClient;
class IGameDialog;
class UserInfo;

class TripleXGame {
public:
	TripleXGame();
	virtual ~TripleXGame();

    void Init();
    void Play();
    void Shutdown();

private:
    void InitLaunchDarkly();

    void ShutdownLaunchDarkly();

    void PrintFailureDialog();

    // Core game logic, returns if the player successfully completed the round.
    bool PlayGame(int LevelDifficulty);

    // Print the game over screen depending on if all levels completed or otherwise.
    void PrintGameOver(bool bAllLevelsCompleted);

    // Print welcome message to the terminal customized to the level of difficulty being played.
    void PrintIntroduction(int LevelDifficulty);

    // Print logo
    void PrintLogo();

    void PrintSuccessDialog();

    const int MaxLevel = 10;
    int CurrentLevel = 1;

    const char* LdMobileKey;
	IGameDialog*  GameDialog;
    LDClient* LdClient;
	UserInfo* User;
};

#pragma once
#include <string>

class IGameDialog {
public:
    virtual void PrintIntroductionString(int LevelDifficulty) = 0;
    virtual void PrintFailureDialog() = 0;
    virtual void PrintGameOver(bool bAllLevelsCompleted) = 0;
    virtual void PrintLogo() = 0;
    virtual void PrintSuccessDialog() = 0;
    virtual void ShowGameDialog(int CodeSum, int CodeProduct) = 0;
};

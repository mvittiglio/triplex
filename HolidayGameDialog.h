#pragma once
#include "IGameDialog.h"

class HolidayGameDialog : public virtual IGameDialog {
public:
    virtual void PrintIntroductionString(int LevelDifficulty);
    virtual void PrintFailureDialog();
    virtual void PrintGameOver(bool bAllLevelsCompleted);
    virtual void PrintLogo();
    virtual void PrintSuccessDialog();
    virtual void ShowGameDialog(int CodeSum, int CodeProduct);
};

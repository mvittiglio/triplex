#pragma once
#include "IGameDialog.h"
#include "ldapi.h"

class LaunchDarklyGameDialog : public virtual IGameDialog {
public:
    LaunchDarklyGameDialog(LDClient* client);

    virtual void PrintIntroductionString(int LevelDifficulty);
    virtual void PrintFailureDialog();
    virtual void PrintGameOver(bool bAllLevelsCompleted);
    virtual void PrintLogo();
    virtual void PrintSuccessDialog();
    virtual void ShowGameDialog(int CodeSum, int CodeProduct);
private:
   LDClient* LdClient;
};

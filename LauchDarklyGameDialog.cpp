#include "LaunchDarklyGameDialog.h"
#include "HackerGameDialog.h"
#include "HolidayGameDialog.h"

LaunchDarklyGameDialog::LaunchDarklyGameDialog(LDClient* LdClient)
    : LdClient(0)
{
    this->LdClient = LdClient;
}

void LaunchDarklyGameDialog::PrintIntroductionString(int LevelDifficulty)
{
    if (LdClient->boolVariation("use-winter-holiday-dialog", false)) 
	{
        HolidayGameDialog GD = HolidayGameDialog();
        GD.PrintIntroductionString(LevelDifficulty);
    } 
	else 
	{
        HackerGameDialog GD = HackerGameDialog();
        GD.PrintIntroductionString(LevelDifficulty);
    }


}

void LaunchDarklyGameDialog::PrintFailureDialog()
{
    if (LdClient->boolVariation("use-winter-holiday-dialog", false)) 
	{
        HolidayGameDialog GD = HolidayGameDialog();
        GD.PrintFailureDialog();
    } 
	else 
	{
        HackerGameDialog GD = HackerGameDialog();
        GD.PrintFailureDialog();
    }
}

void LaunchDarklyGameDialog::PrintGameOver(bool bAllLevelsCompleted)
{
    if (LdClient->boolVariation("use-winter-holiday-dialog", false)) 
	{
        HolidayGameDialog GD = HolidayGameDialog();
        GD.PrintGameOver(bAllLevelsCompleted);
    } 
	else 
	{
        HackerGameDialog GD = HackerGameDialog();
        GD.PrintGameOver(bAllLevelsCompleted);
    }
}


void LaunchDarklyGameDialog::PrintLogo()
{
    if (LdClient->boolVariation("use-winter-holiday-dialog", false)) 
	{
        HolidayGameDialog GD = HolidayGameDialog();
        GD.PrintLogo();
    } 
	else 
	{
        HackerGameDialog GD = HackerGameDialog();
        GD.PrintLogo();
    }
}

void LaunchDarklyGameDialog::PrintSuccessDialog()
{
    if (LdClient->boolVariation("use-winter-holiday-dialog", false)) 
	{
        HolidayGameDialog GD = HolidayGameDialog();
        GD.PrintSuccessDialog();
    } 
	else 
	{
        HackerGameDialog GD = HackerGameDialog();
        GD.PrintSuccessDialog();
    }
}

void LaunchDarklyGameDialog::ShowGameDialog(int CodeSum, int CodeProduct)
{
    if (LdClient->boolVariation("use-winter-holiday-dialog", false)) 
	{
        HolidayGameDialog GD = HolidayGameDialog();
        GD.ShowGameDialog(CodeSum, CodeProduct);
    } 
	else 
	{
        HackerGameDialog GD = HackerGameDialog();
        GD.ShowGameDialog(CodeSum, CodeProduct);
    }
}

#include "HackerGameDialog.h"
#include <iostream>

void HackerGameDialog::PrintIntroductionString(int LevelDifficulty)
{
    std::cout << "********************************************************************\n";
    std::cout << "* You are a secret agent breaking into a level " << LevelDifficulty << " secure server room.*\n";
    std::cout << "* Enter the correct codes to continue...\n";
}

void HackerGameDialog::PrintFailureDialog()
{
    std::cout << "x Your terminal locks as your countermeasures are bypassed...\n";
}

void HackerGameDialog::PrintGameOver(bool bAllLevelsCompleted)
{
    if (bAllLevelsCompleted) {
        std::cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
        std::cout << "x You have successfully made it to the primary mainframe.\n";
        std::cout << "x CONGRATS!\n";
        std::cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n";

    } else {
        std::cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n";
        std::cout << "x You suddenly realize that there are agents at your door.\n";
        std::cout << "x You escape with just your laptop to try again another day...\n";
        std::cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n";
    }
}


void HackerGameDialog::PrintLogo()
{
    std::cout << "########################\n";
    std::cout << "#      _.--\"\"--._      #\n";
    std::cout << "#     /          \\     #\n";
    std::cout << "#  _  ( (_\\  /_) )  _  #\n";
    std::cout << "# { \\._\\   /\\   /_./ } #\n";
    std::cout << "# /_\"=-.}______{.-=\"_\\ #\n";
    std::cout << "#  _  _.=(\"\"\"\")=._  _  #\n";
    std::cout << "# (_'\"_.-\"`~~`\"-._\"'_) #\n";
    std::cout << "#  {_\"            \"_}  #\n";
    std::cout << "########################\n\n";
}

void HackerGameDialog::PrintSuccessDialog()
{
    std::cout << "! The hum of the terminal is interrupted with a string of hashes across the screen and a root prompt.\n";
    std::cout << "! SUCCESS! \n";
}

void HackerGameDialog::ShowGameDialog(int CodeSum, int CodeProduct)
{
    std::cout << "! There are three numbers in the code.\n";
    std::cout << "! The codes add-up to " << CodeSum << "\n";
    std::cout << "! The product of the codes result in the value " << CodeProduct << "\n";
}

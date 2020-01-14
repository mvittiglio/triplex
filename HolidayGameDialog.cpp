#include "HolidayGameDialog.h"
#include <iostream>

void HolidayGameDialog::PrintIntroductionString(int LevelDifficulty)
{
    std::cout << "********************************************************************\n";
    std::cout << "* Hello little elf! We're breaking into Santa's level " << LevelDifficulty << " toy chest.*\n";
    std::cout << "* We're going to leave notes from Mrs. Claus in each chest as a surprise!\n";
}

void HolidayGameDialog::PrintFailureDialog()
{
    std::cout << "* The lock on the toy chest makes a loud noise as you fumble with the combination!\n";
}

void HolidayGameDialog::PrintGameOver(bool bAllLevelsCompleted)
{
    if (bAllLevelsCompleted) {
        std::cout << "********************************************************************\n";
        std::cout << "* All of Santa's toy chests have a nice note from Mrs. Claus!\n";
        std::cout << "* Everyone is going to be so pleased when he finds out!\n";
        std::cout << "* HAPPY HOLIDAYS!\n";
        std::cout << "********************************************************************\n\n";

    } else {
        std::cout << "********************************************************************\n";
        std::cout << "* You hear a loud HO HO HO as you notice Santa has heard your tinkering!\n";
        std::cout << "* The jig is up! Mrs. Claus will be so disappointed. :'(\n";
        std::cout << "* Maybe she'll let you try again next year...\n";
        std::cout << "********************************************************************\n\n";
    }
}


void HolidayGameDialog::PrintLogo()
{
    std::cout << "************************\n";
    std::cout << "*      \\__    __/      *\n";
    std::cout << "*      /_/ /\\ \\_\\      *\n";
    std::cout << "*     __ \\ \\/ / __     *\n";
    std::cout << "*     \\_\\_\\/\\/_/_/     *\n";
    std::cout << "* __/\\___\\_\\/_/___/\\__ *\n";
    std::cout << "*   \\/ __/_/\\_\\__ \\/   *\n";
    std::cout << "*     /_/ /\\/\\ \\_\\     *\n";
    std::cout << "*      __/ /\\ \\__      *\n";
    std::cout << "*      \\_\\ \\/ /_/      *\n";
    std::cout << "*      /        \\      *\n";
    std::cout << "************************\n\n";
}

void HolidayGameDialog::PrintSuccessDialog()
{
    std::cout << "* The hum of the terminal is interrupted with a string of hashes across the screen and a root prompt.\n";
    std::cout << "* SUCCESS! \n";
}

void HolidayGameDialog::ShowGameDialog(int CodeSum, int CodeProduct)
{
    std::cout << "* There are three numbers to Santa's combination lock.\n";
    std::cout << "* The numbers add-up to " << CodeSum << "\n";
    std::cout << "* The product of the numbers result in the value " << CodeProduct << "\n";
}

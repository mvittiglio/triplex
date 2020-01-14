#include <iostream>
#include <windows.h>

#include "ldapi.h"
#include "TripleXGame.h"


int main(int argc, char** args)
{
	TripleXGame TripleX;

	TripleX.Init();
	TripleX.Play();
	TripleX.Shutdown();

	return 0;
}

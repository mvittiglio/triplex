#include "UserInfo.h"

#include <functional>
#include <iostream>

#include "ldapi.h"

void UserInfo::PromptForUsername()
{
    std::cout << "Please enter your user name: ";
	std::cin >> Username;
}

std::string UserInfo::GetUsername()
{
	return Username;
}

std::string UserInfo::GetHash()
{
	return Username + "_HASH";
}

LDUser* const UserInfo::GetAsLdClientUser()
{
	LDUser* LdUser = LDUserNew(GetHash().c_str());
	LDUserSetEmail(LdUser, GetUsername().c_str());

	return LdUser;

}

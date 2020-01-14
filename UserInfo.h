#pragma once
#include <string>

#include "ldapi.h"

class UserInfo {
public:

    std::string GetHash();
    std::string GetUsername();
    LDUser*const GetAsLdClientUser();

    void PromptForUsername();

private:
    std::string Username;
};

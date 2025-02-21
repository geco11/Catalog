#pragma once
#include"User.h"
class IUserStorage
{
public:
	virtual User getUserData(User user)=0;
	virtual size_t addUser(std::string username, std::string password)=0;
	virtual ~IUserStorage() = default;
};


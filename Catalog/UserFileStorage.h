#pragma once
#include<vector>
#include"IUserStorage.h"
class UserFileStorage:public IUserStorage
{
protected:
	virtual std::vector<User>getAllUsers()=0;
public:
	User getUserData(User user)override;
	size_t addUser(std::string username, std::string password)override;
};


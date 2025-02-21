#pragma once
#include<vector>
#include"IUserStorage.h"
class UserFileStorage:public IUserStorage
{
protected:
	virtual std::vector<User>getAllUsers()=0;
	std::string filePath;
public:
	virtual User getUserData(User user)=0;
	virtual size_t addUser(std::string username, std::string password)=0;
	virtual ~UserFileStorage() = default;
};


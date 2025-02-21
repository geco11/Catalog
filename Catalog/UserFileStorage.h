#pragma once
#include<vector>
#include"IUserStorage.h"
class UserFileStorage:public IUserStorage
{
protected:
	virtual std::vector<User>getAllUsers()=0;
	std::string filePath;
	virtual size_t uppnedUsers(const std::vector<User>& users) = 0;
public:
	virtual User getUserData(User user)override;
	virtual size_t addUser(const std::string &username, const std::string &password)override;
	virtual ~UserFileStorage() = default;
};


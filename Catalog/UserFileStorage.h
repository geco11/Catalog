#pragma once
#include<vector>
#include"IUserStorage.h"
class UserFileStorage:public IUserStorage
{
	size_t getLastId();
	void setLastId(size_t id);
protected:
	virtual bool writeUsers(std::vector<User> users) = 0;
	virtual std::vector<User> getAllUsers()=0;
	std::string filePath;
public:
	UserFileStorage(std::string_view path);
	virtual User getUserData(User user)override;
	virtual size_t addUser(const std::string &username, const std::string &password)override;
	virtual ~UserFileStorage() = default;
};


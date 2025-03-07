#pragma once
#include"csv.hpp"
#include"UserFileStorage.h"
class CSVUserStorage:public UserFileStorage{
	csv::CSVFormat format;
	static User makeUser(csv::CSVRow& row);
protected:
	bool writeUsers(std::vector<User> users)override;
	std::vector<User>getAllUsers()override;
public:
	CSVUserStorage(std::string_view path):UserFileStorage(path){}
	//size_t addUser(std::string username, std::string password)override;
};


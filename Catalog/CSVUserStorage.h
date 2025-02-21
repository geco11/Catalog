#pragma once
#include"csv.hpp"
#include"UserFileStorage.h"
class CSVUserStorage:public UserFileStorage{
	csv::CSVFormat format;
	static User makeUser(csv::CSVRow& row);
protected:
	std::vector<User>getAllUsers()override;
public:
	size_t addUser(std::string username, std::string password)override;
};


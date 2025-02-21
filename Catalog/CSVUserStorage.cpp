#include "CSVUserStorage.h"



User CSVUserStorage::makeUser(csv::CSVRow& row)
{
    User user;
    user.id = row[0].get<size_t>();
    user.username = row[1].get<std::string>();
    user.password = row[2].get<std::string>();
    return user;
}

std::vector<User> CSVUserStorage::getAllUsers()
{
    csv::CSVReader reader(filePath, format);
    std::vector<User> users;
    size_t i = 0;
    for (auto& row : reader) {
        users.push_back(makeUser(row));
    }
    return users;
}

size_t CSVUserStorage::addUser(std::string username, std::string password)
{
    
}

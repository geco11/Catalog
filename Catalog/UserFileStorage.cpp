#include "UserFileStorage.h"
#include<algorithm>

User UserFileStorage::getUserData(User target)
{
    std::vector<User> users=getAllUsers();
    auto it=std::find_if(users.begin(), users.end(), [target](const User& curr) {
        return curr.username == target.username || curr.id == target.id;
    });
    if (it != users.end())
        return *it;
    return {"","",0 };
}

size_t UserFileStorage::addUser(std::string username, std::string password)
{
    return size_t();
}

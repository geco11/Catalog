#pragma once
#include<iostream>
#include<rpc/server.h>
class Collection {
	std::string name="";
	int countOfCoins = 0;
public:
    MSGPACK_DEFINE(countOfCoins,name);
    inline std::string getName() const {
        return name;
    }
    inline void setName(const std::string& newName) {
        name = newName;
    }
    inline int getCountOfCoins() const {
        return countOfCoins;
    }
    inline void setCountOfCoins(int newCountOfCoins) {
        countOfCoins = newCountOfCoins;
    }
};
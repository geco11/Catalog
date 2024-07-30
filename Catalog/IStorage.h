#pragma once
#include"Coin.h"
#include<iostream>
#include<vector>
class IStorage
{
public:
    virtual Coin getCoinById(size_t id)const = 0;
    virtual Coin saveCoin(Coin coin) = 0;
    virtual std::vector<Coin> getCoins(Coin coin)const = 0;
    virtual int loadCoins(std::string filename) = 0;
    virtual ~IStorage() = default; // Virtual destructor 
};
#pragma once
#include"Coin.h"
#include<iostream>
#include"Collection.h"
#include<vector>
class ICoinStorage
{
public:
    virtual int importCoins(std::vector<Coin> additionalCoins) =0;
    virtual Coin getCoinById(size_t id)const = 0;
    virtual Coin saveCoin(Coin coin) = 0;
    virtual std::vector<Coin> getCoins(Coin coin)const = 0;
    virtual ~ICoinStorage() = default; // Virtual destructor 
    virtual std::vector<Collection> getCollections(std::string country)const = 0;
    virtual std::vector<std::string> getCountries()const=0;
};
#pragma once
#include<fstream>
#include"IStorage.h"
class FileStorage:public IStorage
{
	std::fstream file;
	std::string filePath;
public:
	Coin getCoinById(size_t id)const override=0;
	Coin saveCoin(Coin coin)override =0;
	std::vector<Coin> getCoins(Coin coin)const override =0;
	int loadCoins(std::string source) override=0;
	std::vector<std::string> getCountries()const override= 0;
	std::vector<Collection> getCollections(std::string country)const override= 0;
protected:
	virtual std::vector<Coin> getAllCoins()const=0;
	virtual size_t newCoin(Coin coin)  =0;
};


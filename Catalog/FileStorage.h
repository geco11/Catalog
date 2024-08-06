#pragma once
#include<fstream>
#include"IStorage.h"
class FileStorage:public IStorage
{
public:
	FileStorage(std::string path);
	Coin getCoinById(size_t id)const override;
	Coin saveCoin(Coin coin)override;
	std::vector<Coin> getCoins(Coin coin)const override;
	int loadCoins(std::string source) override;
	std::vector<std::string> getCountries()const override;
	std::vector<Collection> getCollections(std::string country)const override;
protected:
	std::string filePath;
	virtual std::vector<Coin> getAllCoins()const=0;
	virtual size_t coinToString(Coin coin)  =0;
};


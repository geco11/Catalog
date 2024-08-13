#pragma once
#include<fstream>
#include"ICoinStorage.h"
class FileStorage:public ICoinStorage
{
public:
	FileStorage(std::string path);
	Coin getCoinById(size_t id)const override;
	Coin saveCoin(Coin coin)override;
	std::vector<Coin> getCoins(Coin coin)const override;
	int importCoins(std::vector<Coin> additionalCoins) override;
	std::vector<std::string> getCountries()const override;
	std::vector<Collection> getCollections(std::string country)const override;
protected:
	std::string filePath;
	virtual std::vector<Coin> getAllCoins()const=0;
	virtual size_t writeCoins(std::vector<Coin> &coins)  =0;
	size_t getNextId();
	void setNextId(size_t id);
};


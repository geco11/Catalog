#pragma once
#include"csv.hpp"
#include"FileStorage.h"
class CSVStorage:public FileStorage
{
	csv::CSVFormat format;
public:
	CSVStorage(std::string path);
	Coin getCoinById(size_t id)const override;
	Coin saveCoin(Coin coin)override;
	std::vector<Coin> getCoins(Coin coin)const override;
	int loadCoins(std::string source)override;
	std::vector<Collection> getCollections(std::string country)const override = 0;
	std::vector<std::string> getCountries()const override = 0;
protected:
	std::vector<Coin> getAllCoins()const override;
	size_t newCoin(Coin coin) override;
};


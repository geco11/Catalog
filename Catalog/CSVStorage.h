#pragma once
#include"csv.hpp"
#include"FileStorage.h"
class CSVStorage:public FileStorage
{
	csv::CSVFormat format;
public:
	CSVStorage(std::string path);
	Coin saveCoin(Coin coin)override;
	int loadCoins(std::string source)override;
protected:
	std::vector<Coin> getAllCoins()const override;
	size_t coinToString(Coin coin) override;
};


#pragma once
#include"csv.hpp"
#include"FileStorage.h"
class CSVStorage:public FileStorage
{
	csv::CSVFormat format;
public:
	CSVStorage(std::string path);
protected:
	std::vector<Coin> getAllCoins()const override;
	size_t writeCoins(std::vector<Coin>& coins) override;
};


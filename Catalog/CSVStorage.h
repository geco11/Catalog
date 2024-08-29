#pragma once
#include"csv.hpp"
#include"FileStorage.h"
class CSVStorage:public FileStorage
{
	csv::CSVFormat format;
public:
	CSVStorage(std::string path);
protected:
	std::vector<CoinPtr> getAllCoins()const override;
	size_t writeCoins(std::vector<CoinPtr>& coins) override;
};


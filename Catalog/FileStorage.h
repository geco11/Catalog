#pragma once
#include<fstream>
#include"IStorage.h"
class FileStorage:public IStorage
{
	std::fstream file;
	std::string filePath;
public:
	virtual Coin getCoinById(size_t id)const override=0;
	virtual Coin saveCoin(Coin coin)override =0;
	virtual std::vector<Coin> getCoins(Coin coin)const override =0;
	virtual int loadCoins(std::string source) override=0;
protected:
	virtual std::vector<Coin> getAllCoins()const=0;
	void openFile();
	void closeFile();
	virtual size_t newCoin(Coin coin)  =0;
};


#pragma once
#include<Collection.h>
#include<memory>
#include<Coin.h>
class IController
{
public:
	virtual std::vector<CoinPtr> search(Collection collection)=0;
	virtual bool toggleMark(size_t id)=0;
	virtual int increment(size_t id)=0;
	virtual int decrement(size_t id)=0;
	virtual std::vector<std::string> getAllCountries()=0;
	virtual std::vector<Collection> getCollections(std::string_view country)=0;
};


#pragma once
#include<Collection.h>
#include<memory>
#include<Coin.h>
class IController
{

public:
	virtual bool addCollection(size_t userId,std::string_view collectioName)=0;
	virtual bool registration(std::string_view UserName, std::string_view password)=0;
	virtual size_t logIn(std::string_view UserName, std::string_view password) = 0;
	virtual std::vector<CoinPtr> search(size_t userId,Collection collection)=0;
	virtual bool toggleMark(size_t userId,size_t coinId)=0;
	virtual int increment(size_t userId,size_t coinId)=0;
	virtual int decrement(size_t userId,size_t coinId)=0;
	virtual std::vector<std::string> getAllCountries(size_t userId)=0;
	virtual std::vector<Collection> getCollections(size_t userId,std::string_view country)=0;
};


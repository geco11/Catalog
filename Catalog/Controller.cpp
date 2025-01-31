#include "Controller.h"
#include<iostream>

bool Controller::addCollection(size_t userId, std::string_view collectioName)
{
	return false;
}

bool Controller::registration(std::string_view UserName, std::string_view password)
{
	return false;
}

size_t Controller::logIn(std::string_view UserName, std::string_view password)
{
	return size_t();
}

std::vector<CoinPtr> Controller::search(size_t userId,Collection collection)
{
	Coin a;
	a.collection = collection.getName();
	return coinStorage->getCoins(a);
}

bool Controller::toggleMark(size_t userId,size_t id)
{
	CoinPtr coin = coinStorage->getCoinById(id);
	coin->IsFavorite=!coin->IsFavorite;
	coinStorage->saveCoin(coin);
	return coin->IsFavorite;
}
int Controller::increment(size_t userId,size_t id)
{
	CoinPtr coin = coinStorage->getCoinById(id);
	coin->quantity++;
	coinStorage->saveCoin(coin);
	return coin->quantity;
}
int Controller::decrement(size_t userId,size_t id)
{
	CoinPtr coin = coinStorage->getCoinById(id);
	coin->quantity--;
	coinStorage->saveCoin(coin);
	return coin->quantity;
}
std::vector<std::string> Controller::getAllCountries(size_t userId)
{
	return coinStorage->getCountries();
}
std::vector<Collection> Controller::getCollections(size_t userId,std::string_view country)
{
	return coinStorage->getCollections(country);

}
Controller::Controller()
{
	coinStorage = std::make_unique<CSVStorage>("TestCSVData.csv");
	if (!coinStorage)
		std::cerr << "can't create a storage";
}

Controller::~Controller()
{
	
}

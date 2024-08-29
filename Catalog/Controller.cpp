#include "Controller.h"
#include<iostream>

std::vector<CoinPtr> Controller::search(Collection collection)
{
	Coin a;
	a.collection = collection.getName();
	return coinStorage->getCoins(a);
}
bool Controller::toggleMark(size_t id)
{
	CoinPtr coin = coinStorage->getCoinById(id);
	coin->IsFavorite=!coin->IsFavorite;
	coinStorage->saveCoin(coin);
	return coin->IsFavorite;
}
int Controller::increment(size_t id)
{
	CoinPtr coin = coinStorage->getCoinById(id);
	coin->quantity++;
	coinStorage->saveCoin(coin);
	return coin->quantity;
}
int Controller::decrement(size_t id)
{
	CoinPtr coin = coinStorage->getCoinById(id);
	coin->quantity--;
	coinStorage->saveCoin(coin);
	return coin->quantity;
}
std::vector<std::string> Controller::getAllCountries()
{
	return coinStorage->getCountries();
}
std::vector<Collection> Controller::getCollections(std::string_view country)
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

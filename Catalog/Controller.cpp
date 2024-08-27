#include "Controller.h"
#include<iostream>

std::vector<Coin> Controller::search(Collection collection)
{
	return std::vector<Coin>();
}
bool Controller::toggleMark(size_t id)
{
	return false;
}
int Controller::increment(size_t id)
{
	Coin coin = coinStorage->getCoinById(id);
	coin.quantity++;
	coinStorage->saveCoin(coin);
	return coin.quantity;
}
int Controller::decrement(size_t id)
{
	Coin coin = coinStorage->getCoinById(id);
	coin.quantity--;
	coinStorage->saveCoin(coin);
	return coin.quantity;
}
std::vector<std::string> Controller::getAllCountries()
{
	return std::vector<std::string>();
}
std::vector<Collection> Controller::getCollections(std::string)
{
	return std::vector<Collection>();
}
Controller::Controller()
{
	coinStorage = new CSVStorage("TestCSVData.csv");
	if (!coinStorage)
		std::cerr << "can't create a storage";
}

Controller::~Controller()
{
	if(coinStorage)
	    delete coinStorage;
}

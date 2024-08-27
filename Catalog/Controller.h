#pragma once
#include"CSVStorage.h"
#include"ICoinStorage.h"
class Controller
{
	ICoinStorage *coinStorage;
public:
	std::vector<Coin> search(Collection collection);
	bool toggleMark(size_t id);
	int increment(size_t id);
	int decrement(size_t id);
	/*int import(std::string);*/
    std::vector<std::string> getAllCountries();
	std::vector<Collection> getCollections(std::string country);
	Controller();
	~Controller();
};


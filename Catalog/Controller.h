#pragma once
#include"Collection.h"
#include<memory>
#include"CSVStorage.h"
#include"ICoinStorage.h"
class Controller
{
	std::unique_ptr<ICoinStorage> coinStorage;
public:
	std::vector<CoinPtr> search(Collection collection);
	bool toggleMark(size_t id);
	int increment(size_t id);
	int decrement(size_t id);
	/*int import(std::string);*/
    std::vector<std::string> getAllCountries();
	std::vector<Collection> getCollections(std::string_view country);
	Controller();
	~Controller();
};


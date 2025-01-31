#pragma once
#include"CSVStorage.h"
#include"ICoinStorage.h"


#include<IController.h>
class Controller :public IController
{

	std::unique_ptr<ICoinStorage> coinStorage;
public:
	bool addCollection(size_t userId, std::string_view collectioName)override;
	bool registration(std::string_view UserName, std::string_view password)override;
	size_t logIn(std::string_view UserName, std::string_view password)override;
	std::vector<CoinPtr> search(size_t userId,Collection collection)override;
	bool toggleMark(size_t userId,size_t id)override;
	int increment(size_t userId,size_t id)override;
	int decrement(size_t userId,size_t id)override;
    std::vector<std::string> getAllCountries(size_t userId)override;
	std::vector<Collection> getCollections(size_t userId,std::string_view country)override;
	Controller();
	~Controller();
};


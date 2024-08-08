#include "FileStorage.h"
#include<exception>
#include<set>
#include<map>


FileStorage::FileStorage(std::string path)
{
    filePath = path;
}

Coin FileStorage::getCoinById(size_t id) const
{
    std::vector<Coin> coins = getAllCoins();
    for (Coin& coin : coins)
        if (coin.id == id)
            return coin;
    return {};
}

Coin FileStorage::saveCoin(Coin coin)
{
   
}

std::vector<Coin> FileStorage::getCoins(Coin filter) const
{
    std::vector<Coin> coins = getAllCoins();
    std::vector<Coin> res;
    for (Coin& coin : coins) {
        bool checkCountry = filter.country.empty() ? true : filter.country == coin.country;
        bool checkCollection = filter.collection.empty() ? true : filter.collection == coin.collection;
        if (checkCountry && checkCollection)
            res.push_back(coin);
    }
    return res;
}

std::vector<std::string> FileStorage::getCountries() const
{
    std::vector<Coin> coins = getAllCoins();
    std::set<std::string> countries;
    for (Coin& coin : coins)
        countries.insert(coin.country);
    std::vector<std::string>res;
    res.reserve(countries.size());
    for (const std::string& country : countries)
        res.push_back(country);
    return res;
}

std::vector<Collection> FileStorage::getCollections(std::string country) const
{
    std::vector<Coin> coins = getAllCoins();
    std::map<std::string,int> collections;
    for (Coin& coin : coins)
        if(coin.country==country)
          collections[coin.collection]++;
    std::vector<Collection>res;
    res.reserve(collections.size());
    for (const auto& collection : collections) {
        Collection coll;
        coll.setName(collection.first);
        coll.setCountOfCoins(collection.second);
        res.push_back(coll);
    }
    return res;
}

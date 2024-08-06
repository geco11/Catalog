#include "FileStorage.h"
#include<exception>
#include<set>

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

std::vector<std::string> FileStorage::getCountries() const
{
    std::vector<Coin> coins = getAllCoins();
    std::set<std::string> countrys;
    for (Coin &coin:coins){
        countrys.insert(coin.country);
    }
    std::vector<std::string>res;
    res.reserve(countrys.size());
    for (const std::string &country : countrys) {
        res.push_back(country);
    }
    return res;
}

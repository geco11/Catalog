#include "FileStorage.h"
#include<exception>

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

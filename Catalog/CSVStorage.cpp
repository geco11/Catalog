#include "CSVStorage.h"
#include"csv.hpp"
void fillCoin(Coin& coin, csv::CSVRow& row);
std::vector<Coin> CSVStorage::getAllCoins()const
{
    csv::CSVReader reader(filePath,format);
    std::vector<Coin> coins(reader.n_rows());
    size_t i = 0;
    for (auto& row : reader) {
        fillCoin(coins[i++], row);
    }
    return coins;
}

CSVStorage::CSVStorage(std::string path):FileStorage(path)
{
    format.delimiter(',');
    format.header_row(0);
}
//Id,Mintmark,Mintage,Year,Country,Collection,Name,IsMagnetic,Weight,Diameter,Thickness,Condition,Quantity,Shape,Price,Nominal,PriceOfPurchase,Material
void fillCoin(Coin& coin, csv::CSVRow& row)
{
    coin.id = row[0].get<size_t>();
    coin.mintmark = row[1].get<char>();
    coin.mintage = row[2].get<int>();
}

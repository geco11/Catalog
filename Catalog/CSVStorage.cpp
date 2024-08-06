#include "CSVStorage.h"
#include"csv.hpp"
static void fillCoin(Coin& coin, csv::CSVRow& row);
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

size_t CSVStorage::coinToString(Coin coin)
{
    return size_t();
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
    coin.year = row[3].get<int>();
    coin.country = row[4].get<std::string>();
    coin.collection = row[5].get<std::string>();
    coin.name = row[6].get<std::string>();
    coin.IsMagnetic = row[7].get<bool>();
    coin.weight = row[8].get<float>();
    coin.diameter = row[9].get<int>();
    coin.thickness = row[10].get<int>();
    coin.condition = row[11].get<char>();
    coin.quantity = row[12].get<int>();
    coin.shape = row[13].get<std::string>();
    coin.price = row[14].get<float>();
    coin.priceOfPurchase = row[15].get<float>();
    coin.material = row[16].get<std::string>();

}

#include"CSVStorage.h"
#include <iostream>

int main()
{
	CSVStorage file("TestCSVData.csv");
	Coin coin,coin1,coin2;
	coin1.country = "Antarctica";
	coin.name = " test not a coin";
	coin.collection = "USA commemorative silver dollar";
	auto x=file.importCoins({coin,coin1,coin2});
	std::cout << "hello";
}
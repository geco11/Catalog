#include"CSVStorage.h"
#include <iostream>

int main()
{
	CSVStorage file("TestCSVData - Copy.csv");
	Coin coin;
	coin.collection = "USA commemorative silver dollar";
	auto x=file.getCoinById(0);
	std::cout << "hello";
}
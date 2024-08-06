#pragma once
#include<iostream>
class Coin
{
public:
	size_t id;
	char mintmark=-1;
	int mintage=-1;
	int year=-1;
	std::string collection="";
	std::string name="";
	bool IsMagnetic;
	float weight=-1;
	int diameter=-1;
	int thickness=-1;
	char condition = -1;
	int quantity = -1;
	std::string country = "";
	std::string shape="";
	float price=-1;
	float priceOfPurchase=-1;
	std::string material;
};


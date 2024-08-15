#pragma once
#include<unordered_map>
#include<tuple>
#include<iostream>
class Coin
{
public:
	size_t id;
	std::string mintmark="";
	int mintage=-1;
	int year=-1;
	std::string collection="";
	std::string name="";
	bool IsMagnetic;
	float weight=-1;
	float diameter=-1;
	float thickness=-1;
	char condition = -1;
	int quantity = -1;
	std::string country = "";
	std::string shape="";
	float price=-1;
	float priceOfPurchase=-1;
	std::string material;
	auto getAllFieldsAsTuple()const {
		return std::make_tuple(id,
			mintmark,
			mintage,
			year,
			collection,
			name,
			IsMagnetic,
			weight,
			diameter,
			thickness,
			condition,
			quantity,
			country,
			shape,
			price,
			priceOfPurchase,
			material);
	}
	static char conditionToNumber(std::string condition) {
		std::unordered_map<std::string, char> mapping = {
		{"VF-20", '1'},
		{"EF-40", '2'},
		{"AU-50", '3'},
		{"MS-60", '4'},
		{"MS-63", '5'},
		{"MS-65", '6'},
		{"MS-66", '7'},
		{"PF-63", '8'}
		};

		if (mapping.find(condition) != mapping.end()) {
			return mapping[condition];
		}
		else {
			return -1; // Return null character if input is not found in the mapping
		}
	}
};


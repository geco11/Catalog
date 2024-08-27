#pragma once
#include<unordered_map>
#include<tuple>
#include<iostream>
class Coin
{
public:
	size_t id;
	std::string mintmark = "";
	int mintage = -1;
	int year = -1;
	bool IsFavorite = false;
	std::string collection = "";
	std::string name = "";
	bool IsMagnetic;
	float weight = -1;
	float diameter = -1;
	float thickness = -1;
	char condition = -1;
	int quantity = -1;
	std::string country = "";
	std::string shape = "";
	float price = -1;
	float priceOfPurchase = -1;
	std::string material;
	auto getAllFieldsAsTuple()const {
		return std::make_tuple(id,
			mintmark,
			mintage,
			year,
			country,
			collection,
			name,
			IsMagnetic?"true":"false",
			weight,
			diameter,
			thickness,
			numberToCondition(condition),
			quantity,
			shape,
			price,
			priceOfPurchase,
			material,
			IsFavorite?"true":"false");
	}
	static char conditionToNumber(std::string condition) {
		std::unordered_map<std::string, char> mapping = {
		{"VF-20", 0},
		{"EF-40", 1},
		{"AU-50", 2},
		{"MS-60", 3},
		{"MS-63", 4},
		{"MS-65", 5},
		{"MS-66", 6},
		{"PF-63", 7}
		};

		if (mapping.find(condition) != mapping.end()) {
			return mapping[condition];
		}
		else {
			return -1; // Return null character if input is not found in the mapping
		}
	}

	static std::string numberToCondition(char number) {
		std::unordered_map<char, std::string> reverseMapping = {
			{0, "VF-20"},
			{1, "EF-40"},
			{2, "AU-50"},
			{3, "MS-60"},
			{4, "MS-63"},
			{5, "MS-65"},
			{6, "MS-66"},
			{7, "PF-63"}
		};

		if (reverseMapping.find(number) != reverseMapping.end()) {
			return reverseMapping[number];
		}
		else {
			return ""; // Return empty string if input is not found in the mapping
		}

	}
};


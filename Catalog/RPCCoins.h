#pragma once
#include"RPCCollections.h"
class RPCCoins:public RPCCollections
{
	std::vector<Coin> PtrToCoin(const std::vector<CoinPtr>& a) {
		std::vector<Coin>res;
		res.reserve(a.size());
		for(const CoinPtr& ele:a){
			res.push_back(*ele);
		}
		return res;
	}
public:
	void bindFunctions()override {
		RPCCollections::bindFunctions();
		server->bind("search", [this](const Collection& col) {
			return PtrToCoin(controller->search(col));
		});
	}
};


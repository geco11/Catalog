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
		server->bind("toggleMark", [this](size_t id) {
			return controller->toggleMark(id);
			});
		server->bind("increment", [this](size_t id) {
			return controller->increment(id);
			});
		server->bind("decrement", [this](size_t id) {
			return controller->decrement(id);
		});
	}
};


#pragma once
#include"RPCCountries.h"
class RPCCollections:public RPCCountries
{
public:
	void bindFunctions()override {
		RPCCountries::bindFunctions();
		server->bind("getCollections", [this](const std::string& country) {
			return controller->getCollections(country);
		});
	}
};


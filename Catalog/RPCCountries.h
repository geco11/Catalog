#pragma once
#include"RPCServer.h"
class RPCCountries :public RPCServer 
{
public:
	void bindFunctions()override {
		RPCServer::bindFunctions();
		server->bind("getAllCountries",[this](){
			return controller->getAllCountries();
		});
	}
};


#include <iostream>
#include"Servers/RPC/RPCCollections.h"
int main(){
	std::unique_ptr<RPCServer> server=std::make_unique<RPCCollections>();
	server->init(8080);
	server->bindFunctions();
	server->run();
	Controller controller;
}
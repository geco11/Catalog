#include <iostream>
#include"RPCCollections.h"
int main(){
	std::unique_ptr<RPCServer> server=std::make_unique<RPCCollections>();
	server->init(8080);
	server->bindFunctions();
	server->run();
	/*Controller controller;
	rpc::server server(8080);
	server.bind("toggleMark", [&controller](size_t id) {
		   return controller.toggleMark(id);
	});
	server.bind("getAllCountries", [&controller]() {
		return controller.getAllCountries();
	});
	server.bind("getCollections", [&controller](const std::string& country) {
		return controller.getCollections(country);
	});
	server.bind("increment",[&controller](size_t id){
		return controller.increment(id);
	});
	server.bind("decrement",[&controller](size_t id){
		return controller.decrement(id);
	});
	server.run();*/
}
#include <iostream>
#include"Controller.h"
#include<rpc/server.h>
int main(){
	Controller controller;
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
	server.run();
}
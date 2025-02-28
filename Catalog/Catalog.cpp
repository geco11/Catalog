#include <iostream>
#include"Controller.h"
#include"Servers/RPC/RPCCoins.h"
int main(){
	Controller con;
	con.registration("maximMaximovich", "1234567890");
	return 0;
	/*std::unique_ptr<RPCServer> server=std::make_unique<RPCCoins>();
	server->init(8080);
	server->bindFunctions();
	server->run();*/
}
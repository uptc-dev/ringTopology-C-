#include "Node.h"
//#include "ot/io/DataOutputStream.h"
//#include "ot/io/DataInputStream.h"
#include <string.h>
#include "string.h"
//#include <pthread.h>
//#include <sys/types.h>
//#include <sys/socket.h>

using namespace std;

//Node::Node(string ip, int port){
 //this.ip = ip;
 //his.port = port;
//cout << "hoal" << endl;

//}


Node::Node(){

cout<< "sdfs" << endl;
}

//void Node::show(){

//}
//void Node::accept(){

//}

//void Node::listen(){

//}

//void Node::send(){

//}

//void Node::connect(){

//}

//void Node::threadOne(){}

//void Node::threadTwo(){}

//void Node::threadThree(){}

//void Node::threadFour(){}

void Node::setPort(int port){
this->port = port;
};

int Node::getPort(){
 return  this->port;
};

void Node::setIp(string ip){
	this->ip = ip;
};

string Node::getIp(){
return this->ip;
};

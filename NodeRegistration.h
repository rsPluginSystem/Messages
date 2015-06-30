#ifndef NODEREGISTRATION_H_
#define NODEREGISTRATION_H_

/**
 * This struct has to be sended to the Core from the node to register the node
 */
struct NodeRegistration{

	/** 
	 * The name of the node
	 * e.g. Logger
	 */
	char[50] nodeName;

	/**
	 * The ip address 
	 * (e.g. 192.168.1.2)
	 */
	char[16] ipAddress;

	/**
	 * The port where it's listing to 
	 * e.g. 80
	 */
	unsigned int port;
}

#endif
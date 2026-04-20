//#pragma once

#ifndef INCLUDED_TCPSERVER
#define INCLUDED_TCPSERVER
#include <winsock.h>

namespace http
{
	class TcpServer {
	public:
		TcpServer();
		~TcpServer();

	private:
		std::string m_ip_address;
		int m_port;
		int m_socket;
		int m_new_socket;
		long m_incomingMessage;
		struct sockaddr_in m_socketAddress;
		unsigned int m_socketAddress_len;
		std::string m_serverMessage;

		int startServer();
		void closeServer();

	};
} //namespace http

#endif
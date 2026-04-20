//#pragma once
#ifndef INCLUDED_TCPSERVER
#define INCLUDED_TCPSERVER

namespace http
{
	class TcpServer {
	public:
		TcpServer();
		~TcpServer();

	private:

		int startServer();
		void closeServer();

	};
} //namespace http

#endif
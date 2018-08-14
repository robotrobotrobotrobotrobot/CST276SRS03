#ifndef CLIENT_H
#define CLIENT_H
#include "context.h"
#include <vector>
using std::vector;
class Client
{
public:
	Client();
	~Client();

	void setContext();
	Context getContext();

private:
	vector<Context> context;
};

Client::Client()
{
}

Client::~Client()
{
}
#endif // !CLIENT_H


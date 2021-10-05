#ifndef IDENTITY_H
#define IDENTITY_H
#include<string>

class Identity
{
public:
	virtual void operMenu() = 0;

	std::string m_Name;//user name
	std::string m_Password;//password
};

#endif
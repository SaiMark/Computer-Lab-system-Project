#pragma once
#include<iostream>
#include<string>

class Identity
{
public:
	virtual void openMenu() = 0;

	std::string m_Name;//user name
	std::string m_Password;//password
};
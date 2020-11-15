#pragma once
#include <string>

class Commander
{
public:
	Commander(std::string name, bool isPartner);

	std::string getName();
	bool getPartner();
private:
	std::string name;
	bool isPartner;
};
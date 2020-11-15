#include "Commander.h"

Commander::Commander(std::string name, bool isPartner)
{
	this->name = name;
	this->isPartner = isPartner;
}

std::string Commander::getName()
{
	return this->name;
}

bool Commander::getPartner()
{
	return this->isPartner;
}
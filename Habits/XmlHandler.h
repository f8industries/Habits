#pragma once

#include <string>

class XmlHandler
{
public:
	XmlHandler();
	~XmlHandler();

	void load(const std::string &filename);
	void save(const std::string &filename);
	
};


#include "page.h"


page::page(): _posts(nullptr), _numposts(0), _capacity(0) {}



page::~page() 
{
	delete[] _posts; 
}

void page::init()
{
	_status = ""; 
	delete[] _posts; 
	_posts = nullptr; 
	_numposts = 0; 
	_capacity = 0;
}

std::string page::getposts() const
{
	std::string result = ""; 

	for (int i = 0; i < _numposts; ++i) {
		result += _posts[i]; 
		result += "\n";      
	}

	return result;
	
}

std::string page::getstatus() const
{
	return std::string();
}

void page::clearPage()
{
	delete[] _posts; 
	_posts = nullptr; 
	_numposts = 0; 
	_capacity = 0;
}

void page::setStatus(std::string _status)
{
	this->_status = _status;
}

void page::addLineToPosts(std::string new_line)
{
	std::string* newp = new std::string[_numposts + 1];

	for (int i = 0; i < _numposts; ++i) 
	{
		newp[i] = _posts[i];
	}
}

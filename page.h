#pragma once
#include <string>

class page 
{
private:
	std::string _status;
	std::string* _posts; 
	int _numposts;       
	int _capacity;

public:

	void init();
	std::string getposts() const ;
	std::string getstatus()const ;
	void clearPage();
	void setStatus(std::string _status);
	void addLineToPosts(std::string new_line);

};
#pragma once

#include "curl/curl.h"

#include <string>
#include <sstream>

class Crawler
{
private:
	CURL* curl{ curl_easy_init() };
	std::string url{};
public:
	explicit Crawler(const std::string& url) : url{ url } { }
	~Crawler();

	std::stringstream crawl() const;
	void setUrl(const std::string& url) { this->url = url; }
};
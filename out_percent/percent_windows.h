#pragma once

#include <iostream>
#include <windows.h>
#include <string>
#include <iomanip>

// #include "percent_windows.cpp"


class Percent
{
private:
	int bar_size;
	double pc;
	long int current;
	const long int begin_range;
	const long int end_range;
	const long int md;
	int outspace_size;
	std::string bar;

	COORD position, active_position;
public:
	Percent(const long int& b, const long int& e);
	~Percent();


	COORD getpos();

	void setpos(COORD pos);
	void changepos(int y, int x);
	void update(long int cur);
	
};

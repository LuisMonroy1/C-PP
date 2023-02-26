#pragma once


#ifndef TIME_H
#define TIME_H

class Time
{
private :
	int hour;
	int minute;
	int second;

public :
	//with defult value
	Time(const int h = 0, const int m = 0, const int s = 0);
	//Setter function
	void setTime(const int h, const int m, const int s);
	//print a description of object in "hh:mm:ss"
	void print() const;
	//compare two time objects
	bool equals(const Time&);
};


#endif // !TIME_H

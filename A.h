#pragma once
#include<iostream>
#include<string>
using namespace std;

class Lector 
{
public:
	void Greet_Audience(string a) 
	{
		a = LectorName;
	}
	void Give_A_Speech(string a) 
	{
		cout << a;
	}
	void setSci_Field(string a) 
	{
		Sci_Field = a;
	}
	void setLectorName(string b) 
	{
		LectorName = b;
	}
	void setExperience(int c) 
	{
		Experience = c;
	}
	void setEdDegree(string d)
	{
		EdDegree = d;
	}
	string getLectorName() 
	{
		return LectorName;
	}
private:
	string Sci_Field;
	string LectorName;
	int Experience;
	string EdDegree;
};

class Audience {
public:
	void InterruptLect(string w) 
	{
		cout << " " << w << "";
	}
	void setGoOut(bool f)
	{
		Like = f;
		if (Like == 0) cout << "";
	}
private:
	bool Like;
};

class Staff
{
protected:
	int number_staff;
	string color;
public:
	Staff()
	{
		color = "a";
		number_staff = 0;
	}
	Staff(const Staff &obj)
	{
	}
	Staff(string color, int number_staff)
	{
		this->number_staff = number_staff;
		this->color = color;
	}
	
	virtual void getRotation()
	{
		cout << "Staff changed. " << endl;
	}
	virtual void help()
	{
		cout << "Volunteers helped listeners take their seats. " << endl;
	}
};

class Security : public Staff
{
private:
public:
	Security(string color, int number_staff) :Staff(color, number_staff)
	{
	}
	void CheckInvitation()
	{
		cout << "All invitations were checked but some were false so some people were not allowed. " << endl;
	}

	virtual void getRotation()
	{
		cout << "Staff changed. " << "Security is provided. " << endl;
	}
};
class Volunteers :public Staff
{
public:
	Volunteers(string color, int mumber_staff) : Staff(color, number_staff)
	{
	}
	virtual void help()
	{
		cout << "Volunteers helped listeners take their seats. " << endl;
	}
};

#pragma once
#include<string>
using std::string;
class Passenger
{

public:
	Passenger() = default;
	Passenger(const int id, const string firstName, const string lastName,  const string address, 
		const string city, const string state, const string zipCode, const string phoneNumber, const string emailAdress); //are these 7 parameter enough
	
	void display() const;

	//Getters and Setters

	void setID(int id);
	int getID() const;

	void setFirstName(const string& firstName); 
	const string& getFirstName() const;

	void setLastName(const string& lastName);
	const string& getLastName() const;

	void setAddress(const string& address);
	const string& getAddress() const;

	void setCity(const string& city);
	const string& getCity() const;

	void setState(const string& state);
	const string& getState() const;

	void setZipCode(const string& zipCode);
	const string& getZipCode() const;

	void setPhoneNumber(const string& phoneNumber);
	const string& getPhoneNumber() const;

	void setEmailAddress(const string& emailAddress);
	const string& getEmailAddress() const;

	bool operator==(const Passenger& other) const;

	

private:
	int mID = -1;
	string mFirstName;
	string mLastName;
	string mAddress;
	string mCity;
	string mState;
	string mZipCode;
	string mPhoneNumber;
	string mEmailAddress;
	
};
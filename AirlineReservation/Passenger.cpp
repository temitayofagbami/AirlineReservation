#include "stdafx.h"
#include "Passenger.h"
#include<iostream>
#include<string>
using std::string;
using namespace std;


Passenger::Passenger(const int id, const string firstName, const string lastName, const string address, 
	const string city, const string state, const string zipCode, const string phoneNumber, const string emailAddress)
{
	mID = id;
	mFirstName = firstName;
	mLastName = lastName;
	mAddress = address;
	mCity = city;
	mState = state;
	mZipCode = zipCode;
	mPhoneNumber = phoneNumber;
	mEmailAddress = emailAddress;
}


void Passenger::display() const
{
	cout << mFirstName << " " << mLastName << " " << mAddress << ", " << mCity << ", " << mState;
	cout<< ", " << mZipCode << " " <<mPhoneNumber<<" "<<mEmailAddress<<" "<< endl;
}

void Passenger::setID(int id)
{
	mID = id;
}

int Passenger::getID() const
{
	return mID;
}

void Passenger::setFirstName(const string & firstName)
{
	mFirstName = firstName;
}

const string & Passenger::getFirstName() const
{
	return mFirstName;
}

void Passenger::setLastName(const string & lastName)
{
	mLastName = lastName;
}

const string & Passenger::getLastName() const
{
	return mLastName;
}

void Passenger::setAddress(const string & address)
{
	mAddress = address;
}

const string & Passenger::getAddress() const
{
	return mAddress;
}

void Passenger::setCity(const string & city)
{
	mCity =city;
}

const string & Passenger::getCity() const
{
	return mCity;
}

void Passenger::setState(const string & state)
{
	mState = state;
}

const string & Passenger::getState() const
{
	return mState;
}

void Passenger::setZipCode(const string & zipCode)
{
	mZipCode =zipCode;
}

const string & Passenger::getZipCode() const
{
	return mZipCode;
}

void Passenger::setPhoneNumber(const string & phoneNumber)
{
	mPhoneNumber =phoneNumber;
}

const string & Passenger::getPhoneNumber() const
{
	return mPhoneNumber;
}

void Passenger::setEmailAddress(const string & emailAddress)
{
	mEmailAddress = emailAddress;
}

const string & Passenger::getEmailAddress() const
{
	return mEmailAddress;
}

//defining equality so finidng by email works in a collection
bool Passenger::operator==(const Passenger& other) const {
	return this->mEmailAddress == other.mEmailAddress;
}

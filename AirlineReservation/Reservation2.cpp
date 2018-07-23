#include "stdafx.h"
#include "Reservation2.h"
#include<iostream>
#include<string>
using std::string;
using namespace std;

Reservation2::Reservation2(const int id, const int flightID, const int passengerID, const string & seatNumber)
{
	mReservedID = id;
	mReservedFlightID = flightID;
	mReservedPassengerID = passengerID;
	mReservedSeatNumber = seatNumber;
}

void Reservation2::display() const
{
	cout << mReservedSeatNumber << endl;
}

void Reservation2::setReservedID(int id)
{
	mReservedID = id;
}

int Reservation2::getReservedID() const
{
	return mReservedID;
}

void Reservation2::setReservedFlight(int flightID)
{
	mReservedFlightID = flightID;
}

int Reservation2::getReservedFlight() const
{
	return mReservedFlightID;
}

void Reservation2::setReservedPassenger(int passengerID)
{
	mReservedPassengerID = passengerID;
}

int Reservation2::getReservedPassengerID() const
{
	return mReservedPassengerID;
}

void Reservation2::setReservedSeatNumber(const string & seatNumber)
{
	mReservedSeatNumber = seatNumber;
}

const string Reservation2::getReservedSeatNumber() const
{
	return mReservedSeatNumber;
}

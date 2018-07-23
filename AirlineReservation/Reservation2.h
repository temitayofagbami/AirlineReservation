#pragma once
#include "Passenger.h"
#include "Flight.h"
#include<string>
using std::string;
using namespace std;

class Reservation2
{

public:
	Reservation2() = default;
	Reservation2(const int id, const int flightID, const int passengerID, const string& seatNumber);

	void display() const;

	//Getters and Setters

	void setReservedID(int id);
	int getReservedID() const;

	void setReservedFlight(int flightID);
	int getReservedFlight() const;

	void setReservedPassenger(int passengerID);
	int getReservedPassengerID() const;

	void setReservedSeatNumber(const string& seatNumber);
	const string getReservedSeatNumber() const;

private:
	int mReservedID;
	int mReservedFlightID;
	int mReservedPassengerID;
	string mReservedSeatNumber;


};
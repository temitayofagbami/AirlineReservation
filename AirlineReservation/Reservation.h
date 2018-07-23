#pragma once
#include "Passenger.h"
#include "flight.h"
#include<string>
using std::string;
using namespace std;
namespace AirlineReservation {
	class Reservation
	{

	public:
		Reservation() = default;
		Reservation(const int id, const Flight& flight, const Passenger& passenger, const string& seatNumber);

		void display() const;

		//Getters and Setters

		void setReservedID(int id);
		int getReservedID() const;

		void setReservedFlight(const Flight& flight);
		const Flight& getReservedFlight() const;

		void setReservedPassenger(const Passenger& passenger);
		const Passenger& getReservedPassenger() const;

		void setSeatNumber(const string& seatNumber);
		const string& getSeatNumber() const;

		bool operator== (const Reservation& other) const;

	private:
		int mReservedID;
		Flight mReservedFlight;
		Passenger mReservedPassenger;
		string mReservedSeatNumber;
	};
}
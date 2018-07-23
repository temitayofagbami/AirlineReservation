#include "stdafx.h"
#include<iostream>
#include "ticket.h"
using std::string;
using namespace std;
namespace AirlineReservation {

	static int lastTicketId = 0;

	Ticket::Ticket()
	{

	}

	Ticket::Ticket(const Reservation& reservation) {

		mTicketId = lastTicketId++;
		mReservation = reservation;
		mReservedFlight = reservation.getReservedFlight();
		mPassenger = reservation.getReservedPassenger();
		mSeatNumber = reservation.getSeatNumber();
	}


	//getters and setters
	int Ticket::getTicketId() const
	{
		return mTicketId;
	}

	void Ticket::setTicketId()
	{
		mTicketId = mLastTicketId++;
	}

	void Ticket::setLastTicketId() {
		mLastTicketId = getLastTicketId();
	}

	int Ticket::getLastTicketId() {
		
		return mLastTicketId;
	}

	Flight Ticket::getReservedFlight() const
	{
		return mReservedFlight;
	}

	void Ticket::setReservedFlight(const Flight& flight)
	{
		mReservedFlight = flight;
	}

	Passenger Ticket::getPassenger() const
	{

		return mPassenger;
	}

	void Ticket::setPassenger(const Passenger& p)
	{
		mPassenger = p;
	}

	string Ticket::getSeatNumber() const
	{
		return mSeatNumber;
	}

	void Ticket::setSeatNumber(string seatNumber)
	{
		mSeatNumber = seatNumber;
	}

	string Ticket::getPassengerName() const {
		return mPassenger.getFirstName() + " " + mPassenger.getLastName();
	}

	string Ticket::getFlightDate() const {
		return mReservedFlight.getDate();
	}

	string Ticket::getFlightNumber() const {
		return mReservedFlight.getFlightNumber();
	}

	string Ticket::getDeportAirport() const {
		return mReservedFlight.getDepartureAirport();
	}

	string Ticket::getDepartureTime() const {
		return mReservedFlight.getDepartureTime();
	}
}
	
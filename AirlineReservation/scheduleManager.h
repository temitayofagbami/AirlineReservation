#pragma once
#include <unordered_map>
#include <map>
#include "Reservation.h"
#include "ticket.h"
#include "Plane.h"
using std::string;
using namespace std;

namespace AirlineReservation {
	class ScheduleManager {

	private:
		std::unordered_map<int, Ticket> ALLTickets;
		std::vector<Flight> mAllFlights;
		vector<Passenger> mAllPassengers;
		vector<Reservation> mAllReservations;
		vector<Plane> mAllPlanes;
		int mNextPlaneNumber = 0;
		std::unordered_map<std::string, string> airports;
		
	public:
		ScheduleManager() = default;
		 void reserveFlight();
		void displayTicket(const Ticket& ticket);
		void displayTicket(int reservationId);
		void searchReservation(int reservationId);
		void passengerCheckin(int reservationId);
		void findPassengerInformation(string passengerEmail) const;
		void passengerDisplay(const Passenger& foundPassenger) const;

		//Flight:
		//Display All Flights Information
		void displayAllFlights() const;
		void displayAllAirports();
		void addFlightInformation();
		void deleteFlight(int flightId);
		//void dummyFlightInformation();
		vector<Flight> searchFlights(const string& date, const string& from, const string& to) ;
		void uploadFlightsFromSource() ;
		void uploadAirportsFromSource();
		 std::vector<Flight> getAllFlights() ;

		//File - Read and Write Functions
		void writeFlightVectorToFile(std::vector<Flight> &allFlights);
		void readFlightVectorFromFile() const;
	

		//Plane functions
		void AddPlane();
		Plane & GetPlaneByName(const std::string& pName);
		void DisplayAllSeats(Flight f);
		
		
	};
}
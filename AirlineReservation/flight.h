#pragma once
# include<string>
#include<ctime>
#include "Plane.h"
using namespace std;
namespace AirlineReservation {
	//enum airportsEnum { SEA, HYD, DEL, DWT, KOL, LA };
	enum flightstatusEnum { Delayed, Boarding, Ontime, Deparated };


	class Flight {
	public:
		// enum declaration

		// constructors
		Flight() = default;
		Flight( const std::string date, const std::string  departureTime, const std::string arrivalTime, const std::string   origin,
			const std::string destination, const std::string departureAirport, const std::string airrvalAirport, const std::string airplanename, int airplaneseats, int airplanecols, const std::string flightNumber);

		void displayFlight () const;
		void addFlight()const;

		// Getters and Setters
		void setFlightId(int id);
		int getFlightId() const;

		void setAirplaneName(std::string& airplaneName);
		std::string& getAirplaneName();

		void setFlightNumber(std::string& flightNumber);
		const std::string& getFlightNumber() const;


		void setDate(const std::string date);
		const std::string getDate() const;
		void setDepartureTime(const std::string departureTime);
		const std::string getDepartureTime() const;
		void setArrivalTime(const std::string arrivalTime);
		const std::string getArrivalTime() const;
		void setOrigin(const std::string& origin);
		const std::string& getOrigin() const;
		void setDestination(const std::string& departure);
		const std::string& getDestination() const;
		void setdepartureAirport(const std::string& departureAirport);
		const std::string& getDepartureAirport() const;
		void setAirrvalAirport(const std::string& airrvalAirport);
		const std::string&  getAirrvalAirpot() const;
		void setFlightStatus(const flightstatusEnum flightStatus);
		const flightstatusEnum  getFlightStatus();
		
		Plane& getAirPlane();

	private:
		int mflightId = -1;
		std::string mAirplaneName;
		std::string mFlightNumber;
		std::string mdate;
		std::string mdepartureTime;
		std::string marrivalTime;
		std::string morigin;
		std::string mdestination;
		std::string mdepartureAirport;
		std::string mairrvalAirport;
		flightstatusEnum mflightStatus;
		Plane mairplane;

	};
}
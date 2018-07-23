#pragma once
#include <string>
#include <iostream>
#include<array>
#include <vector>

namespace AirlineReservation {
	struct Seat {
		char status = '*';
		bool isAvailable = true;
		std::string seatNo;
		int seatIndex;		
	};
	class Plane
	{
	public:
		Plane() = default;
		//Plane(std::string name,int bRows, int bCols, int eRows, int eCols);
		Plane(const std::string& name, int economySeats, int eCols);
		bool checkAvailabilityOfSeats();
		int bookSeat(std::string& seat);
		
		void setPlaneId(int flightNo);
		int getPlaneId() const;

		void setPlaneName(const std::string& pName);
		const std::string& getPlaneName() const;

		void setEconomySeats(int noOfSeats);
		int getEconomySeats() const;

		void setEconomyCols(int cols);
		int getEconomyCols() const;

		std::vector<Seat>& GetSeatsVector();

	private:
		//int mBusRows, mBusCols, mEconomyRows, mEconomyCols;
		int mEconomySeats, mAvailableSeats, mEconomyCols;
		//seat *economy;				
		std::string mPlaneName;
		int mPlaneId = -1;
		std::vector<Seat> mPlaneSeats;
	};

}



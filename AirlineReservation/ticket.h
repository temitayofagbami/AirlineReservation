#pragma

#include "Passenger.h"
#include "Flight.h"
#include "Reservation.h"
#include<string>
using std::string;
using namespace std;
namespace AirlineReservation {
	class Ticket {
	private:
		int mLastTicketId;
		int mTicketId;
		Reservation mReservation;
		Flight mReservedFlight;
		Passenger mPassenger;
		string mSeatNumber;
		//Bitmap mQrCode;

	public:
		//constructors and destructor
		Ticket();
		Ticket(const Reservation& reservation);


		//getters and setters
		int getTicketId() const;

		void setTicketId();

		Flight getReservedFlight() const;

		void setReservedFlight(const Flight& flight);

		Passenger getPassenger() const;

		void setPassenger(const Passenger& p);

		string getSeatNumber() const;

		void setSeatNumber(string seatNumber);

		void setLastTicketId();

		int getLastTicketId();

		string getPassengerName() const;

		string getFlightDate() const;

		string getFlightNumber() const;

		string getDeportAirport() const;

		string getDepartureTime() const;

	

		//methods
		/*void createQRCode(); */



	};

}
#include <stdio.h>

// Enum to represent different ticket types
enum TicketType {
    STANDARD = 50,
    PREMIUM = 100,
    VIP = 200
};

int main()
{
    // Using enum to calculate total ticket price for a pair of tickets
    enum TicketType pair = STANDARD + PREMIUM;
    printf("Total price for a pair of tickets: %d\n", pair);

    // Typedef for booking ID
    typedef unsigned int BookingID;

    // Example of a booking ID
    BookingID booking_id = 123456;
    printf("Booking ID: %u\n", booking_id);

    return 0;
}

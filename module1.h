/*
 *  Author: Hashaam Zafar
 *  Date: 15/04/2025
 *  Note: Implementing Module 1
 */

#include <stdint.h>
#include <stdbool.h>
#include <time.h>

#define MAX_VIOLATIONS 256 // Arbitrary value

// Note: AirlineID >= PAF is priority
// Note: 
typedef enum {
    PIA, 
    ABQ, // AirBlue
    FDX, // FedEx
    BDA, // Blue Dart
    PAF,  // NOTE: SELF ASSIGNED
    AAA, // AghaKhan Air Ambulance NOTE: SELF ASSIGNED
} AirlineID; 

typedef enum {
    HOLDING,
    APPROACH,
    LANDING,
    TAXI,
    ATGATE,
    TAKEOFFROLL,
    CLIMB,
    DEPARTURE
} AircraftState;

typedef enum {
    COMMERCIAL,
    CARGO,
    EMERGENCY
} AircraftType;

typedef enum {
    RWYA,
    RWYB,
    RWYC
} Runway;

typedef enum {
    NORTH,
    EAST,
    SOUTH,
    WEST 
} Direction;

typedef enum {
    UNPAID,
    LATE,
    PAID
} PaymentStatus;

typedef struct {
    AirlineID ID;
    uint16_t FlightID;
    AircraftType Type;
    uint16_t SpeedRecorded;
    uint16_t PermissibleSpeed;
    time_t TimeIssued;
    uint32_t FineAmount;
    PaymentStatus Status;
} AVN;

typedef struct {
    uint16_t ID;
    uint16_t FlightID;
    uint16_t Speed;
    uint16_t Heading;
    AircraftType Type;
    bool GroundFault;
} Aircraft;

// TODO: Optimise memory management of Total Planes to be maximum aircrafts per airline
// Add array with all airlines to index through all flights
typedef struct {
    AirlineID ID;
    AircraftState State;
    Aircraft TotalAircrafts[6]; // A pointer to an array of structs (Plane) 
    AVN AllNotices[MAX_VIOLATIONS];
} Airline;

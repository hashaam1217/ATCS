# Working on ATCS project in FAST

Use -fshort-enums compiler flag to enforce enums to use 8 bits instead of 32.

Something to consider: 
Eastbound/Northbound flights → Even numbers (e.g., PK 302).
Westbound/Southbound flights → Odd numbers (e.g., PK 303).

Time reference:
https://www.geeksforgeeks.org/time-h-header-file-in-c-with-examples/
Using time_t, potential limitations of time maxxing out on the year 2038 if in a 32 bit environment.
## Questions
- Can't find ICAO or IATA Airline codes for Pakistan Airforce or AghaKhan Air Ambulance
- With the flight time, it shows flight every 3 minutes. Does that mean the simulation will have a flight at that interval or is that the time it takes for an aircraft to land/depart. 
- Which states actually intefere/use the runway? Landing + Taxi makes sense, but is it failure if an aircraft approaches while another is about to end taxing. More information about timings and specifics would be nice. 


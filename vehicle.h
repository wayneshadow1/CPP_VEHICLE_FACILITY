#include "commonLibraries.h"
#include "facilities.h"
#ifndef VEHICLE_H
#define VEHICLE_H
#define VEHICLE_IS_TR_TRUE 1
#define VEHICLE_IS_TR_FALSE 0
#define VEHICLE_IS_SEC_TR 1
#define VEHICLE_IS_UNSECURE 0
    // ...
extern std::map<int, std::string> VEHICLE_TYPE; 
    


struct FACILITY;
struct Vehicle{
    int id;
    int VEHICLE_TYPE;
    int IS_TERROR;
    int IS_SECURE_VEHICLE;
    int Health=100;
    list<FACILITY*> registered_facility;

    


};


void VehicleSetId(Vehicle *V, FACILITY *F);
void receiveAttack(Vehicle* Attacker, Vehicle* Victim, int health);
void attack(Vehicle* Attacker, Vehicle* Victim);
void registerFacility(Vehicle* v, FACILITY* facility);
#endif
#pragma once
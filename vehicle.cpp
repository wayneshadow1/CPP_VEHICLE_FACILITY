#include "vehicle.h"
#include "facilities.h"
map<int,string> VEHICLE_TYPE ={{1,"CAR"}};
void VehicleSetId(Vehicle *V, FACILITY *F) {
    // generate random number logic
}

void attack(Vehicle* Attacker, Vehicle* Victim) {
    receiveAttack(Attacker, Victim, 50);
}

void receiveAttack(Vehicle *Attacker, Vehicle *Victim, int health) {
    Victim->Health -= health;
    for (FACILITY* A : Attacker->registered_facility) {
        for (FACILITY* B : Victim->registered_facility) {
            if (A == B) {
                B->complain(Attacker, Victim);
            }
        }
    }
}

void registerFacility(Vehicle* v, FACILITY* facility) {
    v->registered_facility.push_front(facility);
    facility->registerObject(v);
}
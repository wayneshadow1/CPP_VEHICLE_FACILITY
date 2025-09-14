#define SECURE_FACILITY 1
#define NOT_SECURE_FACILITY 0


#include <iostream>

#ifndef FACILITIES_H
#define FACILITIES_H
#include "commonLibraries.h"
#include <list>
#include "vehicle.h"
struct Vehicle;
class FACILITY{
    public:
    int FACILITY_TYPE;
    list<Vehicle*>VehiclePointerList={};
    void registerObject(Vehicle * Object){
        VehiclePointerList.push_front(Object);


    };
    void destroyObject(Vehicle * Obj){
       
        for(Vehicle *v:VehiclePointerList){
            cout<<v<<endl;
            if(v==Obj){
                VehiclePointerList.remove(v);
            }

        };
        cout<<flush;
        cout<<" deleting "<<endl;
        delete Obj;
    };
    auto getObjects(){
        for(Vehicle* v:VehiclePointerList){
            cout<<v<<endl;

        }
       
    };
    void complain(Vehicle* attacker,Vehicle* Victim){
        cout<<attacker;
        cout<<" Atacks ";
        cout<<Victim<<endl;
        destroyObject(attacker);


    };
};

class CITY:public FACILITY{
    public:
    int FACILITY_TYPE=0;

};


#endif
#pragma once
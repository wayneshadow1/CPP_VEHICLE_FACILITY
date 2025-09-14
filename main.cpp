#include "commonLibraries.h"

int main(){
    cout<<"before attack"<<endl;
    Vehicle* v1 = new Vehicle();//create a new vehicle 
    Vehicle* v2 = new Vehicle();
    
    FACILITY SECUREF;
    registerFacility(v1,&SECUREF);
    registerFacility(v2,&SECUREF);
    SECUREF.getObjects();
    attack(v1,v2);
    cout<<"after attack"<<endl<<flush;
    SECUREF.getObjects();
    
}
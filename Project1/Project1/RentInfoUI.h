#pragma once
#include "RentInfoControl.h"
#include <ostream>

using namespace std;

class RentInfoUI {
private:
    RentInfoControl* control;

public:
    RentInfoUI(RentInfoControl* control);
    void startInterface(ostream& out);
    void bikeRentInfo(ostream& out);
};

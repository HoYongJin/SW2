#pragma once
#include "RentBikeControl.h"
#include <istream>
#include <ostream>
#include <string>

using namespace std;

class RentBikeUI {
private:
    RentBikeControl* control;

public:
    RentBikeUI(RentBikeControl* control);
    void startInterface(istream& in, ostream& out);
    void selectBike(istream& in, ostream& out);
};

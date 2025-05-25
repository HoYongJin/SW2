#pragma once
#include "Bike.h"
#include "RentInfo.h"
#include "Member.h"
#include <string>
#include <ostream>

using namespace std;

class RentBikeControl {
public:
    void rentBike(const string& inputBikeId, ostream& out);
};

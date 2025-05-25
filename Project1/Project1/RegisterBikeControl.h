#pragma once
#include "Member.h"
#include "Bike.h"
#include <string>
#include <ostream>

using namespace std;

class RegisterBikeControl {
public:
    void registerBike(const string& inputBikeId, const string& inputBikeName, ostream& out);
};

#pragma once
#include <string>
#include <vector>
#include "Bike.h"
#include "Member.h" 

using namespace std;

class RentInfo {
private:
    string memberId;
    string bikeId;
    string bikeName;

    static vector<RentInfo> rentList;

public:
    RentInfo(string inputMemberId, string inputBikeId, string inputBikeName);
    static string assignRentInfo(const Bike& bike);
    static vector<pair<string, string>> getRentInfo(const string& memberId);
};

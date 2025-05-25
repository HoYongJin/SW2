#pragma once
#include <string>
#include <vector>

using namespace std;

class Bike {
private:
    string bikeId;
    string bikeName;

    static vector<Bike> bikeList;

public:
    Bike(string inputBikeId, string inputBikeName);

    static bool checkBikeValidity(const string& inputBikeId); // 중복 ID 체크
    static void addBike(const string& inputBikeId, const string& inputBikeName);
    static Bike* getBikeInfo(const string& inputBikeId);
    string getBikeId() const;
    string getBikeName() const;
};

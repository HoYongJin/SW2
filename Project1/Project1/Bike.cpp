#include "Bike.h"

vector<Bike> Bike::bikeList;

Bike::Bike(string inputBikeId, string inputBikeName)
    : bikeId(inputBikeId), bikeName(inputBikeName) {
}

bool Bike::checkBikeValidity(const string& inputBikeId) {
    for (const auto& bike : bikeList) {
        if (bike.bikeId == inputBikeId) {
            return false;  // ม฿บน ID
        }
    }
    return true;
}

void Bike::addBike(const string& inputBikeId, const string& inputBikeName) {
    Bike newBike(inputBikeId, inputBikeName);
    bikeList.push_back(newBike);
}

Bike* Bike::getBikeInfo(const string& inputBikeId) {
    for (auto& b : bikeList) {
        if (b.bikeId == inputBikeId) return &b;
    }
    return nullptr;
}

string Bike::getBikeId() const {
    return bikeId;
}

string Bike::getBikeName() const {
    return bikeName;
}

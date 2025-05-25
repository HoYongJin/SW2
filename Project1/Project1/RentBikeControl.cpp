#include "RentBikeControl.h"

void RentBikeControl::rentBike(const string& inputBikeId, ostream& out) {
    Bike* bike = Bike::getBikeInfo(inputBikeId);
    string bikeName;

    if (bike == nullptr) {
        out << "> 대여 실패: 존재하지 않는 자전거입니다.\n";
        return;
    }

    bikeName = RentInfo::assignRentInfo(*bike);

    out << "> " << inputBikeId << " " << bikeName << "\n\n";
}

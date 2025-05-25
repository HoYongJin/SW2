#include "RentBikeControl.h"

void RentBikeControl::rentBike(const string& inputBikeId, ostream& out) {
    Bike* bike = Bike::getBikeInfo(inputBikeId);
    string bikeName;

    if (bike == nullptr) {
        out << "> �뿩 ����: �������� �ʴ� �������Դϴ�.\n";
        return;
    }

    bikeName = RentInfo::assignRentInfo(*bike);

    out << "> " << inputBikeId << " " << bikeName << "\n\n";
}

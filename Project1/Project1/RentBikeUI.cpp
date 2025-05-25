#include "RentBikeUI.h"

RentBikeUI::RentBikeUI(RentBikeControl* control) {
    this->control = control;
}

void RentBikeUI::startInterface(istream& in, ostream& out) {
    out << "4.1. 자전거 대여\n";
}

void RentBikeUI::selectBike(istream& in, ostream& out) {
    string inputBikeId;
    in >> inputBikeId;
    control->rentBike(inputBikeId, out);
}

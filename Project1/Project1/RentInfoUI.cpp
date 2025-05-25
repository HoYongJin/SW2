#include "RentInfoUI.h"

RentInfoUI::RentInfoUI(RentInfoControl* control) {
    this->control = control;
}

void RentInfoUI::startInterface(ostream& out) {
    out << "5.1. 자전거 대여 리스트\n";
}

void RentInfoUI::bikeRentInfo(ostream& out) {
    control->showBikeRentInfo(out);
}

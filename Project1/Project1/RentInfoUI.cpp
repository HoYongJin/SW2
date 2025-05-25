#include "RentInfoUI.h"

RentInfoUI::RentInfoUI(RentInfoControl* control) {
    this->control = control;
}

void RentInfoUI::startInterface(ostream& out) {
    out << "5.1. ������ �뿩 ����Ʈ\n";
}

void RentInfoUI::bikeRentInfo(ostream& out) {
    control->showBikeRentInfo(out);
}

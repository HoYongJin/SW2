#include "RegisterBikeUI.h"

RegisterBikeUI::RegisterBikeUI(RegisterBikeControl* control) {
    this->control = control;
}

void RegisterBikeUI::startInterface(istream& in, ostream& out) {
    out << "3.1. 자전거 등록\n";
}

void RegisterBikeUI::inputBikeInfo(istream& in, ostream& out) {
    string inputBikeId, inputBikeName;
    in >> inputBikeId >> inputBikeName;
    control->registerBike(inputBikeId, inputBikeName, out);
}

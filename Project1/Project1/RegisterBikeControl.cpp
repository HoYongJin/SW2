#include "RegisterBikeControl.h"

void RegisterBikeControl::registerBike(const string& inputBikeId, const string& inputBikeName, ostream& out) {
    if (!Member::isAdmin()) {
        out << "> 등록 실패: 관리자만 등록할 수 있습니다.\n";
        return;
    }

    if (!Bike::checkBikeValidity(inputBikeId)) {
        out << "> 등록 실패: 중복된 자전거 ID입니다.\n";
        return;
    }

    Bike::addBike(inputBikeId, inputBikeName);
    out << "> " << inputBikeId << " " << inputBikeName << "\n\n";
}

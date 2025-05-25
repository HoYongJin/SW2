#include "RegisterBikeControl.h"

void RegisterBikeControl::registerBike(const string& inputBikeId, const string& inputBikeName, ostream& out) {
    if (!Member::isAdmin()) {
        out << "> ��� ����: �����ڸ� ����� �� �ֽ��ϴ�.\n";
        return;
    }

    if (!Bike::checkBikeValidity(inputBikeId)) {
        out << "> ��� ����: �ߺ��� ������ ID�Դϴ�.\n";
        return;
    }

    Bike::addBike(inputBikeId, inputBikeName);
    out << "> " << inputBikeId << " " << inputBikeName << "\n\n";
}

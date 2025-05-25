#include "RentInfoControl.h"

void RentInfoControl::showBikeRentInfo(ostream& out) {
    string memberId = Member::getMemberId();
    if (memberId.empty()) {
        out << "> ��ȸ ����: �α����� ȸ���� �뿩 ������ ��ȸ�� �� �ֽ��ϴ�.\n";
        return;
    }

    auto infoList = RentInfo::getRentInfo(memberId);
    for (auto& item : infoList) {
        out << "> " << item.first << " " << item.second << "\n";
    }
    out << "\n";
}

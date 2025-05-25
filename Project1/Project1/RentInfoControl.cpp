#include "RentInfoControl.h"

void RentInfoControl::showBikeRentInfo(ostream& out) {
    string memberId = Member::getMemberId();
    if (memberId.empty()) {
        out << "> 조회 실패: 로그인한 회원만 대여 정보를 조회할 수 있습니다.\n";
        return;
    }

    auto infoList = RentInfo::getRentInfo(memberId);
    for (auto& item : infoList) {
        out << "> " << item.first << " " << item.second << "\n";
    }
    out << "\n";
}

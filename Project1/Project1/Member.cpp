#include "Member.h"
#include <regex>

vector<Member> Member::memberList = { Member("admin", "admin", "00000000000", true) };
Member* Member::currentLoginUser = nullptr;

// 생성자
Member::Member(string inputId, string inputPw, string inputNumber, bool isAdmin)
    : id(inputId), pw(inputPw), number(inputNumber), admin(isAdmin) {
    if (inputId == "admin" && inputPw == "admin") {
        this->admin = true;
    }
}

bool Member::check_ID_PW_Validity(const string& inputId, const string& inputPw) {
    for (auto& m : memberList) {
        if (m.id == inputId && m.pw == inputPw) {
            currentLoginUser = &m;
            return true;
        }
    }
    return false;
}

// 회원가입 정보 유효성 검증
bool Member::checkInfoValidity(const string& inputId, const string& inputPw, const string& inputNumber) {
    for (const auto& m : memberList) {
        if (m.id == inputId || m.pw == inputPw || m.number == inputNumber) {
            return false; // 하나라도 중복되면 회원가입 실패
        }
    }
    return true; // 모두 중복되지 않으면 유효
}

// 회원 추가
void Member::addMember(const string& inputId, const string& inputPw, const string& inputNumber) {
    Member newMember(inputId, inputPw, inputNumber);
    memberList.push_back(newMember);
}

// 현재 로그인한 사용자 삭제
void Member::delCurUser() {
    currentLoginUser = nullptr;
}

// 관리자 여부 반환
bool Member::isAdmin() {
    if (currentLoginUser != nullptr) {
        return currentLoginUser->admin;
    }
    return false;
}

// 현재 로그인한 ID 가져오기
string Member::getMemberId() {
    return currentLoginUser != nullptr ? currentLoginUser->id : "";
}
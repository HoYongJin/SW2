#include "SignUpControl.h"

void SignUpControl::signUp(const string& inputId, const string& inputPw, const string& inputNumber, ostream& out) {
    bool success = Member::checkInfoValidity(inputId, inputPw, inputNumber);

    if (success) {
        Member::addMember(inputId, inputPw, inputNumber); // 회원가입 성공 시 회원 추가
        out << "> " << inputId << " " << inputPw << " " << inputNumber << "\n\n";
    }
    else {
        out << "> 회원가입 실패: 중복된 정보(ID/PW/전화번호)가 존재합니다.\n";
    }
}

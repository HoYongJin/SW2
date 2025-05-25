#include "LoginControl.h"

void LoginControl::login(const string& inputId, const string& inputPw, ostream& out) {
    bool success = Member::check_ID_PW_Validity(inputId, inputPw);

    if (success) {
        out << "> " << inputId << " " << inputPw << "\n\n";
    }
    else {
        out << "> 로그인 실패: ID 또는 비밀번호가 일치하지 않습니다.\n";
    }
}

#include "LoginControl.h"

void LoginControl::login(const string& inputId, const string& inputPw, ostream& out) {
    bool success = Member::check_ID_PW_Validity(inputId, inputPw);

    if (success) {
        out << "> " << inputId << " " << inputPw << "\n\n";
    }
    else {
        out << "> �α��� ����: ID �Ǵ� ��й�ȣ�� ��ġ���� �ʽ��ϴ�.\n";
    }
}

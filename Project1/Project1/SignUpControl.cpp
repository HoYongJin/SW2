#include "SignUpControl.h"

void SignUpControl::signUp(const string& inputId, const string& inputPw, const string& inputNumber, ostream& out) {
    bool success = Member::checkInfoValidity(inputId, inputPw, inputNumber);

    if (success) {
        Member::addMember(inputId, inputPw, inputNumber); // ȸ������ ���� �� ȸ�� �߰�
        out << "> " << inputId << " " << inputPw << " " << inputNumber << "\n\n";
    }
    else {
        out << "> ȸ������ ����: �ߺ��� ����(ID/PW/��ȭ��ȣ)�� �����մϴ�.\n";
    }
}

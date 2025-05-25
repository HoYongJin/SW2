#include "Member.h"
#include <regex>

vector<Member> Member::memberList = { Member("admin", "admin", "00000000000", true) };
Member* Member::currentLoginUser = nullptr;

// ������
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

// ȸ������ ���� ��ȿ�� ����
bool Member::checkInfoValidity(const string& inputId, const string& inputPw, const string& inputNumber) {
    for (const auto& m : memberList) {
        if (m.id == inputId || m.pw == inputPw || m.number == inputNumber) {
            return false; // �ϳ��� �ߺ��Ǹ� ȸ������ ����
        }
    }
    return true; // ��� �ߺ����� ������ ��ȿ
}

// ȸ�� �߰�
void Member::addMember(const string& inputId, const string& inputPw, const string& inputNumber) {
    Member newMember(inputId, inputPw, inputNumber);
    memberList.push_back(newMember);
}

// ���� �α����� ����� ����
void Member::delCurUser() {
    currentLoginUser = nullptr;
}

// ������ ���� ��ȯ
bool Member::isAdmin() {
    if (currentLoginUser != nullptr) {
        return currentLoginUser->admin;
    }
    return false;
}

// ���� �α����� ID ��������
string Member::getMemberId() {
    return currentLoginUser != nullptr ? currentLoginUser->id : "";
}
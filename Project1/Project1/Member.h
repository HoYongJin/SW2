#pragma once
#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Member {
private:
    string id;
    string pw;
    string number;
    bool admin;

    // 현재 로그인한 사용자 ID
    static Member* currentLoginUser;
    
    // 전체 회원 리스트
    static vector<Member> memberList;

public:
    Member(string id, string pw, string number, bool isAdmin = false);

    static bool check_ID_PW_Validity(const string& inputId, const string& inputPw);
    static bool checkInfoValidity(const string& inputId, const string& inputPw, const string& inputNumber);
    static void addMember(const string& inputId, const string& inputPw, const string& inputNumber);
    static void delCurUser();
    static bool isAdmin();
    static string getMemberId();
};

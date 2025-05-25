#pragma once
#include <ostream>
using namespace std;

class ExitControl {
public:
    void exit(int& exitFlag, std::ostream& out);
};

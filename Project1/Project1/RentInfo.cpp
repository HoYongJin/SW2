#include "RentInfo.h"
#include <algorithm>

vector<RentInfo> RentInfo::rentList;

RentInfo::RentInfo(string inputMemberId, string inputBikeId, string inputBikeName)
    : memberId(inputMemberId), bikeId(inputBikeId), bikeName(inputBikeName) {
}

string RentInfo::assignRentInfo(const Bike& bike) {
	string memberId, bikeId, bikeName;

    memberId = Member::getMemberId();
	bikeId = bike.getBikeId();
	bikeName = bike.getBikeName();

    rentList.emplace_back(memberId, bikeId, bikeName);

	return bikeName;
}

vector<pair<string, string>> RentInfo::getRentInfo(const string& memberId) {
    vector<pair<string, string>> result;
    for (auto& r : rentList) {
        if (r.memberId == memberId) {
            result.push_back({ r.bikeId, r.bikeName });
        }
    }

    sort(result.begin(), result.end(), [](const pair<string, string>& a, const pair<string, string>& b) {
        return a.first < b.first;
        });
    return result;
}

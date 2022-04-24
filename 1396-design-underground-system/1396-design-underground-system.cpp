class UndergroundSystem {
public:
    unordered_map<int, pair<string,int>> custMap;
    unordered_map<string, pair<double,int>> finalMap;
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        custMap[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        string s = stationName + "-" + custMap[id].first;
        finalMap[s] = {finalMap[s].first + (t - custMap[id].second), ++finalMap[s].second};
        custMap.erase(id);
    }
    
    double getAverageTime(string ss, string es) {
        string s = es + "-" + ss;
        return finalMap[s].first / finalMap[s].second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
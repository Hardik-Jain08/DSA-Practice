class UndergroundSystem {
public:
    unordered_map<int,pair<string, int>> checkMap;
    unordered_map<int,pair<string, int>> outMap;
    unordered_map<string,pair<int, int>> finalMap; // (placeout-placein(t2-t1,count))
    
    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        checkMap[id] = make_pair(stationName, t);
    }
    
    void checkOut(int id, string stationName, int t) {
        outMap[id] = make_pair(stationName, t);
        string s = checkMap[id].first + "-" + outMap[id].first;
        if(finalMap[s].second)
        finalMap[s] = make_pair(finalMap[s].first + (outMap[id].second - checkMap[id].second), ++finalMap[s].second);
        else finalMap[s] = make_pair(outMap[id].second - checkMap[id].second, 1);
    }
    
    double getAverageTime(string startStation, string endStation) {
        string s = startStation + "-" + endStation;
        cout << finalMap[s].first << endl << finalMap[s].second << endl;
        return double(finalMap[s].first) / double(finalMap[s].second);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
/*

*/
class UndergroundSystem {
public:
    unordered_map<int,pair<string,int>> ids;
    unordered_map<string,pair<int,int>> time;
    UndergroundSystem() {}
    
    void checkIn(int id, string sn, int t) {
        ids[id] = {sn,t};
    }
    
    void checkOut(int id, string sn, int t) {
        string trip = ids[id].first+ "-" +sn;
        double ttime = t-ids[id].second;
        if(time.find(trip) != time.end()) {
            time[trip].first += ttime;
            time[trip].second++;
        } else {
            time[trip] = {ttime,1};
        }
    }
    
    double getAverageTime(string ss, string es) {
        return time[ss+"-"+es].first/(1.0*time[ss+"-"+es].second);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
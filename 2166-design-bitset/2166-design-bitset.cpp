class Bitset {
private:
    vector<int> bit;
    int cnt;
    bool flp;
public:
    Bitset(int size) {
        bit.resize(size);
        cnt = 0;
        flp = false;
    }
    
    void fix(int idx) {
        if(!flp) {
            if(bit[idx] == 0){
                cnt++;
                bit[idx] = 1;
            }
        }
        else{
            if(bit[idx] == 1){
                cnt++;
                bit[idx] = 0;
            }
        }
    }
    
    void unfix(int idx) {
        if(!flp) {
            if(bit[idx] == 1){
                cnt--;
                bit[idx] = 0;
            }
        }
        else{
            if(bit[idx] == 0){
                cnt--;
                bit[idx] = 1;
            }
        }
    }
    
    void flip() {
        cnt = bit.size() - cnt;
        flp = (flp) ? false : true;
    }
    
    bool all() {
        return cnt == bit.size();
    }
    
    bool one() {
        return cnt >= 1;
    }
    
    int count() {
        return cnt;
    }
    
    string toString() {
        string s = "";
        if(!flp){
            for(auto x: bit){
                s+= (x == 1) ? '1' : '0';
            }
        }
        else{
            for(auto x: bit){
                s+= (x == 1) ? '0' : '1';
            }
        }
        return s;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */
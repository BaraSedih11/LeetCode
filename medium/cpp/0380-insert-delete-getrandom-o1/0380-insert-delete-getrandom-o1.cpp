class RandomizedSet {
public:
    vector<int> randomSet;
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if (find(randomSet.begin(), randomSet.end(), val) == randomSet.end()) {
            randomSet.push_back(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        auto it = find(randomSet.begin(), randomSet.end(), val);
        if (it != randomSet.end()) {
            randomSet.erase(it);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        if(randomSet.empty()) {
            throw runtime_error("Error: The set is empty.");
        }
        int randomIndex = rand() % randomSet.size();
        return randomSet[randomIndex];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
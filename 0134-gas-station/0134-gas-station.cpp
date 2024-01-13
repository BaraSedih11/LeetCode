class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalDiff = 0;  
        int currentDiff = 0;  
        int startStation = 0; 

        for (int i = 0; i < gas.size(); i++) {
            totalDiff += gas[i] - cost[i];
            currentDiff += gas[i] - cost[i];

            if (currentDiff < 0) {
                currentDiff = 0;
                startStation = i + 1;
            }
        }

        if (totalDiff < 0) {
            return -1;
        }

        return startStation;
    }
};
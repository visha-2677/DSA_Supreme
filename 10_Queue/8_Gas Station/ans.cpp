// link: https://leetcode.com/problems/gas-station/description/
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        // Kitna petrol Kam padega
        int deficit=0;
        // kitna petrol bacha hua hai
        int balance=0;
        // circuit kaha se start kar rahe ho
        int start=0;
        for(int i=0;i<gas.size();i++){
            balance += gas[i]-cost[i];
            if(balance<0){
                // yahi pe galti hoti hai
                deficit += abs(balance);
                start=i+1;
                balance=0;
            }
        }
        if(balance>=deficit){
            return start;
        }
        else{
            return -1;
        }
    }
};
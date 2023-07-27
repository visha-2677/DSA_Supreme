#include<bits/stdc++.h>
using namespace std;
// link : https://leetcode.com/problems/minimum-time-difference/
// Given a list of 24-hour clock time points in "HH:MM" format, return the minimum minutes difference between any two time-points in the list.
 int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        
        for(int i=0;i<timePoints.size();i++){
            string curr=timePoints[i];
            int hours=stoi(curr.substr(0,2));
            int min=stoi(curr.substr(3,2));
            int totalMinutes=hours*60+min;
            minutes.push_back(totalMinutes);
        }

        sort(minutes.begin(),minutes.end());

        int mini=INT_MAX;
        int n=minutes.size();
        for(int i=0;i<n-1;i++){
            int diff=minutes[i+1]-minutes[i];
            mini=min(mini,diff);
        }
        // last and first index diff comapre to find minimum
        int lastDiff=(minutes[0]+1440)-minutes[n-1];
        int firstDiff=minutes[n-1]-minutes[0];
        int comapreMinlastfirst=min(lastDiff,firstDiff);
        mini=min(mini,comapreMinlastfirst);
        return mini;
    }
int main()
{
    
    return 0;
}
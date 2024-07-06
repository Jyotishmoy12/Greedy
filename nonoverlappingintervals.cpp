// same logic as n-meeting in one room

class Solution {
public:
    static bool comp(vector<int>&a, vector<int>&b){
        return a[1]<b[1]; // sort on the basis of ending time
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(), comp);
    int cnt=1;
    int lastEndTime=intervals[0][1];
    for(int i=1;i<intervals.size();i++){
         if(intervals[i][0]>=lastEndTime){
            cnt++;
            lastEndTime=intervals[i][1];
         }
    }
    return intervals.size()-cnt;   
    }
};

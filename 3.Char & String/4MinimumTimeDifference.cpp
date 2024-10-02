// Leetcode : 539
class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes; 
        // convert the string to minute
        for(int i=0; i<timePoints.size(); i++){
            string curr = timePoints[i];
            int hours = stoi(curr.substr(0,2));
            int minute = stoi(curr.substr(3,2));

            int totalMinutes = hours*60 + minute;
            minutes.push_back(totalMinutes);
        }

        // sort the arr
        sort(minutes.begin(), minutes.end());

        // calculate time
        int mini = INT_MAX;
        int n = minutes.size();

        // mini = minutes[1] - minutes[0];
        for(int i=0; i<n-1; i++)
        {
            if(minutes[i+1] - minutes[i] < mini)
            {
                mini = minutes[i+1] - minutes[i];
            }
        }

        int lastDiff1 = (minutes[0]+1440) - minutes[n-1];
        int lasstDiff2 = minutes[n-1] - minutes[0];

        int lastDiff = min(lastDiff1, lasstDiff2);

        mini =  min(mini, lastDiff);

        return mini;
    }
};
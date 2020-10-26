/* ----
        -----
    doesn't overlap , so push them into the stack

else  ---------
       -----
         -------
           ------
              -------  , as the array is already sorted so we will always get the min of all overlapping interval . So we just need to keep in mind that we take the max of ending time of all the overlapping intervals as only then they will cover the whole range (min_of_all_overlapping_intervals,max_of_all_overlapping_intervals)
*/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
       // if(a.size()<=1)return a;

        vector<vector<int>>ans;

        int n=a.size();
        if(n==0)return ans;
        sort(a.begin(),a.end()); // sort according to the starting time

        stack<pair<int,int>>stk;
        stk.push({a[0][0],a[0][1]});
        for(int i=1;i<n;i++)
        {
            if(stk.top().second<a[i][0]) // if the doesn't overlap then push them into the stack
            {
                stk.push({a[i][0],a[i][1]});
            }

            else // if they overlaps then update the ending time because we've already sorted the starting time so among all the overlapping intervals the starting time will be correct , so we will just update the ending time so that it's the max of all only then it will cover the whole range (min_of_all , max_of_all)
            {
                pair<int,int> p=stk.top();
                p.second=max(p.second,a[i][1]);
                stk.pop();
                stk.push(p);
            }
        }
        while(!stk.empty())
        {
            pair<int,int> x=stk.top();
            vector<int>v1;
            v1.push_back(x.first);
            v1.push_back(x.second);
            ans.push_back(v1);
            stk.pop();
        }
        return ans;
    }
};

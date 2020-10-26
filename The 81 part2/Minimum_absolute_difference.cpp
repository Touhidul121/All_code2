 #include<bits/stdc++.h>
 using namespace std;

 int main(){
     int n,a;
     cin>>n;
     vector<int>arr;
     for(int i=0;i<n;i++)
        cin>>a , arr.push_back(a);

      vector<int>v[100];

        int min_diff=INT_MAX;

        for(int i=0;i<arr.size()-1;i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                int x=abs(arr[i]-arr[j]);

                if(x<min_diff)
                    min_diff=x;
            }
        }
        cout<<min_diff<<"\n";
        map<int,int>vis;
        int k=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                int x=abs(arr[i]-arr[j]);

                if(x==min_diff){

                    v[k].push_back(arr[i]);
                    v[k].push_back(arr[j]);
                        k++;



                    }
            }
        }

     for(int i=0;i<k;i++)
     {
         for(int j=0;j<v[i].size();j++)
         {
             cout<<v[i][j]<<" ";
         }
         cout<<"\n";
     }
 }

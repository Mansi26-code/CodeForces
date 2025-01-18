#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> stations;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            stations.push_back(x);
        }
        int min_fuel=stations[0];
        for(int i=1;i<n;i++){
            int y = (stations[i]-stations[i-1]);
            min_fuel = max(min_fuel,y);
        }
        if(min_fuel < (k-stations[n-1])*2){
            min_fuel = (k-stations[n-1])*2;
        }
        cout<<min_fuel<<endl;
    }
}
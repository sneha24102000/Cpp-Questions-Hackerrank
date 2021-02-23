#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0; i<n ; i++)
    {
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    
    int q;
    cin>>q;
    int num;
    while(q--)
    {
        cin>>num;
        int r = lower_bound(v.begin(),v.end(),num) - v.begin();
        if(v[r] == num)
        cout<<"Yes "<<r+1<<endl;
        else cout<<"No "<<r+1<<endl;
    }
    
    
    
    return 0;
}

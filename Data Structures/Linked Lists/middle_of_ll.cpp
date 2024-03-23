#include<bits/stdc++.h>

using namespace std;

bool descendingOrder(int a,int b){
    return a>b;
}

int main(){

    vector<int> v;
    v.push_back(2);
    v.push_back(4);

    sort(v.begin(),v.end(), descendingOrder);

    for(auto x: v){
        cout<<x<<" ";
    }

}

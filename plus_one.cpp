#include<vector>

using namespace::std;   
   
vector<int> plusOne(vector<int>& v) {
    int carry=1,i=v.size()-1,temp;
    
    while(carry && i>=0){
        temp=carry;
        carry=(v[i]+carry)/10;
        v[i]=(v[i]+temp)%10;
        i--;
    }
    if(carry){
        v.insert(v.begin(),1);
    }
    return v;
}
#include<iostream>
using namespace std;


bool pal(string &s,int st,int ed){
    if(st>=ed){return true;}
    return (s[st]==s[ed])&& pal(s,st+1,ed-1);
}

int main(){
    string s="mamiu";
    int start=0;
    int end=s.length()-1;

    cout<<  (pal(s,start,end)?"true":"false");

  
    return 0;
}
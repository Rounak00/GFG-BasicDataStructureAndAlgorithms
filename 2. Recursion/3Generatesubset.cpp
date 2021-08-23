#include<iostream>
using namespace std;

void subs(string &s, string cur, int i)
{
    if(i==s.length()){
       cout<<cur<<endl;
        return ;
    }
   
    subs(s,cur,i+1);
    subs(s,cur+s[i],i+1);
}
int main(){
    string s="ABCD";
    subs(s," ",0);
    return 0;
}
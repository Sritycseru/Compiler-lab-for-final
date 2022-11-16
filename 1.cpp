#include<bits/stdc++.h>
using namespace std;
int main(){


    string s;
    freopen("input.txt","r",stdin);
    getline(cin,s);
    cout<<s<<endl;
    int cword=1,cletter=0,cdigit=0,otherchar=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
            cword++;
            else if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
                cletter++;
                else if(s[i]>='0' && s[i]<='9')
                    cdigit++;
                    else
                        otherchar++;
    }
    cout<<"Number of word is : "<<cword<<endl;
    cout<<"Number of letter is : "<<cletter<<endl;
    cout<<"Number of digits is : "<<cdigit<<endl;
    cout<<"Number of otherchar is : "<<otherchar;







}


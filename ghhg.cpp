#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    freopen("input.txt","r",stdin);
    getline(cin,s);
    cout<<s<<endl;
    int word=1,letter=0,digit=0,other=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
            word++;
        else if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
            letter++;

        else if(s[i]>='0' && s[i]<='9')
            digit++;
        else
            other++;
    }
    cout<<"Number of words are : "<<word<<endl;
    cout<<"Number of letters are : "<<letter<<endl;
        cout<<"Number of digits are : "<<digit<<endl;
            cout<<"Number of others are : "<<other<<endl;

}

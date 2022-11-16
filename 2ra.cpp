#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    freopen("input2.txt","r",stdin);
    getline(cin,s);
    cout<<s<<endl;
    int vowel=0,consonant=0;
    for(int i=0;i<s.size();i++){
            if(s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U'||
               s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
               vowel++;

    else if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
        consonant++;

    }
    cout<<"Number of vowels is : "<<vowel<<endl;
    cout<<"Number of Consonant is : "<<consonant<<endl;



}


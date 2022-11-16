#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input2.txt","r",stdin);
    string s;
    char ch;
    getline(cin,s);
    cout << s << endl;
    int a[26],b[26];
    int i;
    for(i=0;i<26;i++)
        a[i]=0;

    for(i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z')

        a[s[i]-'A']=1;
    }

    for(i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<'z')

        b[s[i]-'a']=1;
    }

    cout <<"vowels are : ";

    for(i=0;i<26;i++){
        if(a[i]==1 && (i==0||i==4||i==8||i==14||i==20)){
            ch = i+'A';
        cout << ch <<' ';
        }
    }
        for(i=0;i<26;i++){
        if(b[i]==1 && (i==0||i==4||i==8||i==14||i==20)){
            ch = i+'a';
        cout << ch <<' ';

       }
        }
        cout<<endl;
         cout <<"consonants are : ";

    for(i=0;i<26;i++){
        if(a[i]==1 && (i!=0 && i!=4 && i!=8 && i!=14 && i!=20)){
            ch = i+'A';
        cout << ch <<' ';
        }
    }
       for(i=0;i<26;i++){
        if(b[i]==1 && (i!=0 && i!=4 && i!=8 && i!=14 && i!=20)){
            ch = i+'a';
        cout << ch <<' ';
        }
    }



    }


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<char>letter;
    vector<char>digits;
    vector<char>others;
    freopen("input.txt","r",stdin);
    getline(cin,s);
    cout<<s<<endl;
    int cword=1,cletter=0,cdigit=0,otherchar=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
            cword++;
        else if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
        {
            cletter++;
            letter.push_back(s[i]);
        }

        else if(s[i]>='0' && s[i]<='9')
        {
            cdigit++;
            digits.push_back(s[i]);
        }
        else{
            otherchar++;
            others.push_back(s[i]);
        }

    }
    cout<<"Number of word is : "<<cword<<endl;
    cout<<"Number of letter is : "<<cletter<<endl;
    cout<<"Number of digits is : "<<cdigit<<endl;
    cout<<"Number of otherchar is : "<<otherchar<<endl;

    cout<<"letter are : ";
    for(int i=0; i<letter.size(); i++)
        cout << letter[i]<<' ';
    cout << endl;

    cout<<"digits are : ";
    for(int i=0; i<digits.size(); i++)
        cout << digits[i]<<' ';
    cout << endl;

    cout<<"others are : ";
    for(int i=0; i<others.size(); i++)
        cout << others[i]<<' ';
    cout << endl;











}


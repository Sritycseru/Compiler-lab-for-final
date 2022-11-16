#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input2.txt","r",stdin);
    string s,temp;
    vector<string>vowel;
    vector<string>consonant;
    char ch;
    getline(cin,s);
    cout << s << endl;
    for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                temp="";
            }

        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' ||s[i]=='u' ||
           s[i]=='A' || s[i]=='E' ||s[i]=='I' || s[i]=='O' ||s[i]=='U' ){
                for(;;i++){

                    if(s[i]==' '){
                        vowel.push_back(temp);
                        temp.clear();
                    }
                    else
                        temp+=s[i];
                }
           }
            if(s[i]!='a' &&  s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' &&
           s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' &&s[i]!='U' ){
                for(;;i++){

                    if(s[i]==' '){
                        consonant.push_back(temp);
                        temp.clear();
                    }
                    else
                        temp+=s[i];
                }
           }
           if(number=1)
           vowel.push_back(temp);
           else
            consonant.push_back(temp);


        }
    }

#include<bits/stdc++.h>
using namespace std;
int n, m;
string s[10], f[10];

void first(char c)
{
    if(!isupper(c))
        f[m++]=c;

    for(int k=0; k<n; k++)
    {
        if(s[k][0]==c)
        {
            if(islower(s[k][2]) || s[k][2]=='0')
                f[m++]=s[k][2];
            else
                first(s[k][2]);
        }
    }
}

int main()
{

    cout<<"Enter the no of prooductions: ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter the productions: ";
        cin>>s[i];
    }


        m=0;
        char c,ch;
        printf("Enter the elemets whose first is to be found:");
        cin>>c;
        first(c);

        for(int i=0;i<m;i++)
          cout<<f[i]<<endl;

    return 0;
}

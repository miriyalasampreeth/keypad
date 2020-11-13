#include<iostream>
#include<cstring>

using namespace std;
void mapping(char ss[],char ans[],int i,int j)
{
    if(ss[i]=='\0')
    {
        ans[j]='\0';
        cout<<ans<<endl;
        return;
    }

    int digit = ss[i] - '0';
    char ch = digit + 'A' -1;
    ans[j]=ch;

    mapping(ss,ans,i+1,j+1);
    if(ss[i+1]!='\0')
    {
        int d2 = ss[i+1]-'0';
        int fd = digit*10+d2;
        if(fd<=26)
        {
            char c2 = fd+'A'-1;
            ans[j]=c2;
            mapping(ss,ans,i+2,j+1);
        }
    }
}

int main()
{
    char s[20];
    cin>>s;
    char ans[20];
    mapping(s,ans,0,0);
    return 0;

}

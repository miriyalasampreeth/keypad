#include<iostream>
#include<cstring>

using namespace std;

char keypad[][10] = {"abc","def","ghi","jkl","mno","pqrs","tuv","wx","yz"};

void keypadCode(string input,string output)
{
    //Base Case
    if(input[0]=='\0')
    {
        output += '\0';
        cout<<output<<endl;
        return;
    }

    // Recusive Case

    int digit = input[0] - '0';
    for(int k=0;keypad[digit-1][k]!=0;k++)
    {
        keypadCode(input.substr(1),output + keypad[digit-1][k]);
    }
}

int main()
{
    string in;
    cin>>in;
    string out;
    keypadCode(in,out);
    int t = 1;
    for(int i = 0;i<in.length();i++)
    {
        int digit = in[i] - '0';
       if(digit==6)
       {
           t=t*4;
       }
       if(digit==8||digit==90)
       {
           t=t*2;
       }
       else
       {
           t=t*3;
       }
    }
    cout<<t;
}

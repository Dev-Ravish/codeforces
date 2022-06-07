#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        string s1, s2;
        cin>>s1>>s2;
        int length1 = s1.length(),length2 = s2.length(), count=0;
        for(int i=0; i<length1; i++)
        {
            for(int j=0; j<length2; j++)
            {
                if(s1[i]==s2[j])
                {
                    count++;
                    s2.erase(s2.begin()+j);
                    break;
                }
            }
            
        }
        cout<<count<<endl;
    }
}
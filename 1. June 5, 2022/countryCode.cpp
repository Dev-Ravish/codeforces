#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        string s;
        cin>>s;

        int length = s.length(), count=0;

        vector<string> v1;
        for(int i=0; i<length-1; i++)
        {
            string s1="ab";
            s1[0]=s[i];
            s1[1]=s[i+1];
            cout<<s1<<endl;
            if(find(v1.begin(), v1.end(), s1)==v1.end())
            {
                v1.push_back(s1);
                count++;
            }
        }
        cout<<count<<endl;
    }
}
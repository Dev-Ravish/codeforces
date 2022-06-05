#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while (T--)
    {
        int n;
        cin>>n;
        int count[6]={0};
        string s[n];
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
            for(auto x:s[i])
            {
                switch (x)
                {
                case 'c':
                    count[0]++;
                    break;
                case 'o':
                    count[1]++;
                    break;
                case 'd':
                    count[2]++;
                    break;
                case 'e':
                    count[3]++;
                    break;
                case 'h':
                    count[4]++;
                    break;
                case 'f':
                    count[5]++;
                    break;
                }
            }

        }
        count[0]/=2;
        count[3]/=2;
        sort(count,count+5);
        cout<<count[0]<<endl;
    }
    
}
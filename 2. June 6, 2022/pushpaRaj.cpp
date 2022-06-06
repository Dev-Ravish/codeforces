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
        int N,pos=0;
        cin>>N;
        int height[N];
        vector<int> integers, count;
        vector<int> :: iterator it;
        for(int i=0; i<N; i++)
        {

            cin>>height[i];
        }

        for(int i=0; i<N; i++)
        {
            it=find(integers.begin(),integers.end(),height[i]);
            if(it!=integers.end())
            {
                count[it-integers.begin()] ++;
            }
            else
            {
                integers.push_back(height[i]);
                count.push_back(0);
            }
        }
        int length = integers.size();
        int array[length];

        for(int i=0; i<length; i++)
        {
            array[i] = integers[i]+count[i];
        }

        sort(array,array+length);
        cout<<array[length-1]<<endl;
    }
}
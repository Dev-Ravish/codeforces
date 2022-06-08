#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        int N, count;
        cin>>N;
        int pos[N],min=N,max=-1;
        for(int i=0; i<N; i++)
        {
            cin>>pos[i];
        }
            max=-1;
            min=N;
        for(int i=0; i<N; i++)
        {
            int prev=pos[i];

            count=1;
            for(int j=i-1; j>=0; j--)
            {
                if((abs)(pos[j]-prev) >2)
                {
                    break;
                }
                prev=pos[j];
                count++;
            }
            
            prev=pos[i];
            for(int j=i+1; j<N; j++)
            {
                if((abs)(pos[j]-prev) >2)
                {
                    break;
                }
                prev=pos[j];
                count++;
            }
            
            if(count<=min) min=count;
            if(count>=max) max=count;
        }
            
        cout<<min<<" "<<max<<endl;

    }
}
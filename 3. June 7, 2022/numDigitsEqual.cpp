#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	
	while(T--)
	{
	    // int D,one=0,zero=0;
	    // cin>>D;
	    
	    // while(D>0)
	    // {
	    //     if(D%10 == 1)
	    //     {
	    //         one++;
	    //     }
        //     else
        //     {
        //         zero++;
        //     }
	    //     D/=10;
		//T

		string D;
	    int one=0,zero=0;
	    cin>>D;
	    
	    for(char x:D)
        {
            if(x=='1')
                one++;
            else
                zero++;
        }
	    
	    if(zero==1 || one==1)
	    {
	        cout<<"Yes"<<endl;
	    }
	    else
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}

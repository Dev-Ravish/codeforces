#include<iostream>

using namespace std;

int c=0, length=-1;


int subArray(int arr[], int k, int n, int s)
{
    if(k==0) return 1;
    if(n<0 || k<0) return 0;

    int changing = subArray(arr,k-arr[n],n-1, s+1);
    int noChanging = subArray(arr,k,n-1,s );

    if(changing ==1 || noChanging == 1)
    {
        c++;
        if(c==1) length = s+1;
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    int k;
    cin>>k;
    int temp;
    for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(array[i]<array[j])
                {
                    temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
    int res = subArray(array, k, n-1, 0);

   cout<<length;
}
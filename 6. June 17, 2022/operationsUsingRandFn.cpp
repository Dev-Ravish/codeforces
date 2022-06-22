#include<iostream>
#include<stdlib.h>

using namespace std;

int main()// main
{
    int s, k=20;//variable to store seed value
    const int n=11000;
    int array[11000], hist[20]; //declaring array of given size
    cin>>s;
    srand(s);//function used to set the starting point for producing series of pseudo random integers by rand() sundtion.

  
  //section 1
    for(int i=0; i<n; i++)
    {
        array[i] = rand()%k; //modulus k is used in order to give the random integers in the range 0 to k-1

        hist[array[i]]++;
    }  

  
  //section 2
    int max=array[0], min=array[0], sum=0;//storing first element in the array so as to further the comparisions.
    double  mean=0.0, variance=0.0; 
    for(int i=0; i<n; i++)
    {
        int element=array[i];
        
        if(element>max)
            max = element;
        if(element<min)
            min = element;
      
        sum += element;//sum of all the elements
    }
    mean = (double)sum/n;//mean of all the 11000 elements

  
  //section 3
    for(int i=0; i<n; i++)
    {
        variance += (array[i] - mean)*(array[i] - mean)/n;//calculating varience with the given formula.
    }



  //displaying outputs
    cout<<"The minimum value from the items in the data is "<<min<<endl;
    cout<<"The maximum value from the items in the data is "<<max<<endl;
    cout<<"The mean of items in the data is "<<mean<<endl;
    cout<<"The variance of items in the data is "<<variance<<endl;


    int count=0;
    for(int i=0; i<k; i++)
    {
        cout<<i<<" "<<hist[i]<<endl;
    }


}
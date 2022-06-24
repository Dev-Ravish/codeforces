#include<stdio.h>
#include <string.h>

struct candidate
{
    char name[30], Reference[10];
    int age;
    int physics;
    int chemistry;
    int maths;
    int index;
    enum Shortlisted{yes, no};
};

int main()
{
    int N, S, qualifiers=0;
    scanf("%d",&N);
    scanf("%d",&S);
    struct candidate array[N];
    int index[N];
    for(int i=0; i<N; i++)
    {
        scanf("%s %d %d %d %d %s",array[i].name, &array[i].age, &array[i].physics, &array[i].chemistry, &array[i].maths, array[i].Reference);
        array[i].index = array[i].physics + array[i].chemistry + array[i].maths;
    }

    for(int i=0; i<N; i++)
    {
        if(strcmp(array[i].Reference,"excellent") == 0) 
        {
            index[qualifiers]=i;
            qualifiers++;
        }
    }

    for(int i=0; i<N; i++)
    {
        if(strcmp(array[i].Reference,"good") == 0) 
        {
            index[qualifiers]=i;
            qualifiers++;
        }
    }

    for(int i=0; i<qualifiers-1; i++)
    {
        for(int j=0; j<qualifiers-1; j++)
        {
            if(array[index[j]].index < array[index[j+1]].index)
            {
                int temp = index[j];
                index[j] = index[j+1];
                index[j+1] = temp;
            }
        }
    }
    
    if(qualifiers<S)
    {
        printf("Only %d candidates found\n",qualifiers);
        printf("List of %d selected candidates\n", qualifiers);
        printf("Rank Name Age Total Marks Shortlisted\n");
        for(int i=0; i<qualifiers; i++ )
        {
            printf("%d %s %d %d Yes\n", i+1, array[index[i]].name, array[index[i]].age, array[index[i]].index);
        }
    }
    else{
        printf("Only %d candidates found\n",S);
        printf("List of %d selected candidates\n", S);
        printf("Rank Name Age Total Marks Shortlisted\n");
        for(int i=0; i<S; i++ )
        {
            printf("%d %s %d %d Yes\n", i+1, array[index[i]].name, array[index[i]].age, array[index[i]].index);
        }         
    }  
}
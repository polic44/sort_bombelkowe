#include <iostream>

using namespace std;

int main()
{
    int i,j,temp;
    const int N=7;
    int tab[N]={12,34,55,39,21,7,48};
    for(i=N-1;i>0;i--)
    {
        for(j=i-1;j>=0;j--)
            if(tab[i]<tab[j])
        {
            temp=tab[i];
            tab[i]=tab[j];
            tab[j]=temp;
        }
    }
    for(i=0;i<N;i++)
    {
        cout<<tab[i]<<" ";
    }
    cout<<endl;
    return 0;
}

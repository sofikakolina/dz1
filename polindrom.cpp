#include<iostream>
using namespace std;

int main()
{
    int cikl;
    cin>>cikl;
    for (int i=0;i<cikl;i++)
    {
    int N;
    cin>>N;
    int a[N][N];//столбцы и строки
    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            a[i][j]=0;
        }
        
    }
    a[0][0]=1;//столбцы и строки

    int x=0,k=2;
    int zapolnenie=2;
    

    for (int i=1;i<N;i++)
    {
        while(a[x][i-1]!=0)
        {
            a[x][i]=zapolnenie;
            x+=1;
            zapolnenie+=1;
        }
        a[x][i]=zapolnenie;
        int p=i;
        zapolnenie+=1;
        while(p!=0)
        {
            p-=1;
            a[x][p]=zapolnenie;
            zapolnenie+=1;
        }
        x=0;
    }
    

    for (int i=0;i<N;i++)
    {
        for (int j=0;j<N;j++)
        {
            //cout<<a[i][j]<<" ";
            if (a[i][j]==N) cout<<i<<" "<<j<<endl;
        }
        //cout<<endl;
    }
    }





    return 0;
}
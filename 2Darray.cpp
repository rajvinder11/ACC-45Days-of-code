#include<iostream>
using namespace std;

int main()
{
    int a[2][2];
    int i,j;
    cout<<"2D array Input:\n";

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            cout<<"\na["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    }
        cout<<"\n2D array is:\n";
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                cout<<"\t"<<a[i][j];
            }
            cout<<endl;
        }
}
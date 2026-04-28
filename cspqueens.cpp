#include <iostream>
using namespace std;

int x[10], n;

bool place(int k, int i)
{
    for(int j=1;j<k;j++)
    {
        if(x[j]==i || abs(x[j]-i)==abs(j-k))
            return false;
    }
    return true;
}

void queen(int k)
{
    for(int i=1;i<=n;i++)
    {
        if(place(k,i))
        {
            x[k]=i;

            if(k==n)
            {
                for(int j=1;j<=n;j++)
                    cout<<x[j]<<" ";
                cout<<endl;
            }
            else
                queen(k+1);
        }
    }
}

int main()
{
    cout<<"Enter number of queens: ";
    cin>>n;

    queen(1);
}

/*Sample Input

Example:

Enter number of queens:
4
Expected Output
2 4 1 3
3 1 4 2*/
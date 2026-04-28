#include <iostream>
#include <cmath>
using namespace std;

int goal[3][3] =
{
    {1,2,3},
    {4,5,6},
    {7,8,0}
};

int heuristic(int puzzle[3][3])
{
    int count = 0;

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(puzzle[i][j] != goal[i][j] && puzzle[i][j] != 0)
                count++;

    return count;
}

int main()
{
    int puzzle[3][3];

    cout<<"Enter puzzle elements (0 for blank):\n";

    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>puzzle[i][j];

    int h = heuristic(puzzle);

    cout<<"Heuristic value (misplaced tiles) = "<<h<<endl;

    if(h==0)
        cout<<"Goal state reached";
    else
        cout<<"Goal state not reached yet";
}


/*
Input:

1 2 3
4 0 6
7 5 8

Goal:

1 2 3
4 5 6
7 8 0*/
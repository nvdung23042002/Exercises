#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void begin_array_A_to_Zero(int n ,int m, char a[100][100])
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
                a[i][j]='#';
        }
    }
}

void begin_array_B_to_Zero(int n ,int m, int b[100][100])
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m ; j++)
            b[i][j]=0;
    }
}

void number_mines(int n, int m,char a[100][100],int k)
{

    for(int i=1; i<=k; i++)
    {
        int row = rand()% n +1;
        int col = rand()% m +1;
        a[row][col] = '*';
    }
}

void convert_array(int n, int m, char a[100][100], int b[100][100])
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
            if(a[i][j]=='*')
            {
                b[i][j]=-1;
                if(a[i-1][j-1] != '*')
                    b[i-1][j-1]++;
                if(a[i-1][j] != '*')
                    b[i-1][j]++;
                if(a[i-1][j+1] != '*')
                    b[i-1][j+1]++;
                if(a[i][j-1] != '*')
                    b[i][j-1]++;
                if(a[i][j+1] != '*')
                    b[i][j+1]++;
                if(a[i+1][j-1] != '*')
                    b[i+1][j-1]++;
                if(a[i+1][j] != '*')
                    b[i+1][j]++;
                if(a[i+1][j+1] != '*')
                    b[i+1][j+1]++;
            }
    }
}

void display_result(int n, int m, int c[100][100],int b[100][100], int x,int y)
{

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m ; j++)
            {
                if(i== x and j == y)
                    cout << b[x][y]<<"  ";
                else
                {
                    cout << c[i][j]<<"  ";
                }
            }
            cout << endl;
    }
}

void array_show(int n, int m, int c[100][100])
{
     for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m ; j++)
            c[i][j]= -8;
    }
}
void when_failed(int n, int m, int b[100][100])
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m ; j++)
            {
                if(b[i][j]==-1)
                    cout << "*"<<"  ";
                else
                    cout << b[i][j]<<"  ";
            }
            cout << endl;
    }
}
int main()
{
    int m  , n ;
    cin >> n >> m; // rows and cols
    int k;   // the number of mines
    cin >> k;
    // character array
    char a[100][100];
        begin_array_A_to_Zero(n,m,a);

    // for random
        srand(time(NULL));

    // random postition of '*'
        number_mines(n,m,a,k);

    // interger array
    int b[100][100];
        begin_array_B_to_Zero(n,m,b);

    // begin convert array B
        convert_array(n,m,a,b);

    // output

    int c[100][100];
    array_show(n,m,c);
    int guess = 0;
    while(guess <= m*n-k)
    {
        int x,y;
        cin >> x >> y;
        system("cls");
        if(b[x][y]== -1)
        {
            cout << "You Failed, the chart is :" << endl;
            when_failed(n,m,b);
            return 0;
        }
        else
        {
            c[x][y]=b[x][y];
            display_result(n,m,c,b,x,y);
            cout << endl;
        }
        guess ++;

    }
    if(guess == m*n-k)
        cout <<"Congratulations, You are winner !!!";
    return 0;
}

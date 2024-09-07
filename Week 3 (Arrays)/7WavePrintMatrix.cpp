#include <iostream>
using namespace std;

int main()
{
    int arr[][4] = {{2, 8, 5, 4},
                    {6, 4, 2, 8},
                    {7, 5, 1, 12}};

    int row = 0;
    int column = 0;

    while(column < 4)
    {
        if(column%2 == 0){
            row = 0;
            for(row; row<3; row++){
                cout<<arr[row][column] << " ";
            }
        }
        else
        {
            row = 2;
            for(row; row>=0; row--){
                cout<<arr[row][column] << " ";
            }
        }
        column++;
    }

    return 0;
}
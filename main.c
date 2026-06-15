#include<stdio.h>

int main()
{
    int arr[3][3] = {
        {12,45,7},
        {89,23,56},
        {11,90,34}
    };

    int largest = arr[0][0];
    int second_largest = arr[0][0];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(arr[i][j] > largest)
            {
                second_largest = largest;
                largest = arr[i][j];
            }
            else if(arr[i][j] > second_largest &&
                    arr[i][j] != largest)
            {
                second_largest = arr[i][j];
            }
        }
    }

    printf("Largest Number = %d\n", largest);
    printf("Second Largest Number = %d\n", second_largest);

    return 0;
}

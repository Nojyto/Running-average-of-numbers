#include <cstdio>
#include <vector>
#include <algorithm>

float getAverage(const std::vector<float> &arr)
{
    float avg = 0.00;

    for(int i = 0; i < arr.size(); i++)
        avg += arr[i];

    return avg/arr.size();
}

void printScreen(const std::vector<float> &arr)
{
    system("cls");
    printf("Digits: ");

    for(int i = 0; i < arr.size(); i++)
        printf("%.2f ", arr[i]);

    printf("\nCurrent average: %.2f\n", getAverage(arr));
}


int main()
{
    std::vector<float> arr;
    float tmp;

    while(true){
        printf("Input digit: ");
        scanf("%f", &tmp);
        arr.push_back(tmp);
        printScreen(arr);
    }
}

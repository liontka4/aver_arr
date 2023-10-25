#include <stdio.h>

float average(int arr[],int len)
{
	float sum = 0;
	
    for(int i = 0;i<len;i++)
    {
        if(arr[i]>0)
            sum += (float)arr[i];
    }
    return sum / 5;
}

int main(int argc, char **argv)
{
int n = 5;
int arr[n];
double res;
for (int i =0; i < n; i++) {
scanf ("%d", &arr[i]);}
res = average(arr, n);
printf("%.3f\n", res);


    return 0;
}



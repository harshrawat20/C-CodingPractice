// A simple C++ program to find longest common subarray of two binary arrays with same sum
#include<bits/stdc++.h>
using namespace std;
int printUnion(int arr1[],int arr2[],int m,int n)
{
    int i=0,j=0;
    while(i<m&&j<n)
    {
        if(arr1[i]<arr2[j])
         i++;
        if(arr2[j]<arr1[i])
         j++;
         else {
             printf("%d",arr2[j++]);
             i++;
         }
    }
    // while(i<m)
    // printf("%d",arr1[i++]);
    // while(j<n)
    // printf("%d",arr2[j++]);
    return 0;
}
int main()
{
int arr1[]={1,2,4,5,6};
int arr2[]={2,3,5,7};
int m=sizeof(arr1)/sizeof(arr1[0]);
int n=sizeof(arr2)/sizeof(arr2[0]);
printUnion(arr1,arr2,m,n);
getchar();
return 0;
}
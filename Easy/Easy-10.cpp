// https://practice.geeksforgeeks.org/problems/selection-sort/1 

// A function to implement selection sort
void selectionSort(int arr[], int n)
{
   int i, j;
   for (i = n-1; i >=0; i--)      
   {
        int j = select(arr, i);
        swap(&arr[i], &arr[j]);
   }
}
 */

int select(int arr[], int i)
{
    // Your code here  
    int min=arr[0];
    int mini=0;
    for(int j=0;j<=i;j++)
    {
        if(arr[j]>min)
        {
            min=arr[j];
            mini=j;
        }
    }
    return mini;
}
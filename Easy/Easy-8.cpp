// https://practice.geeksforgeeks.org/problems/insertion-sort/1

 Function to sort an array using insertion sort
void insertionSort(int arr[], int n)
{
   int i;
   for (i = 1; i < n; i++)
      insert(arr, i);
} 

void insert(int arr[], int i)
{
    // Your code here  
    for(int j=i-1;j>=0;j--)
    {
        if(arr[i]>arr[j])
        {
            break;
        }
        int temp=arr[i];arr[i]=arr[j];arr[j]=temp;
        i--;
    }
}
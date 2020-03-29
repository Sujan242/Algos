https://practice.geeksforgeeks.org/problems/quick-sort/1 

void quickSort(int arr[], int low, int high) {
    if (low < high)     {
        // pi is partitioning index, arr[p] is now  at right place
        int pi = partition(arr, low, high);
        // Separately sort elements before / partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}*/
/* This function takes last element as pivot, places  the pivot element 
   at its correct position in sorted  array, and places all smaller (smaller
   than pivot) to left of pivot and all greater elements to right  of pivot */
int partition (int a[], int i, int j)
{
   // Your code here
   int p=a[j];
        
        int l=i,r=j-1;
        while(l<=r)
        {
            if(a[l]>p && a[r]<=p)
            {
                int temp=a[l];a[l]=a[r];a[r]=temp;
                l++;r--;
            }
            if(a[r]>p){r--;}
            if(a[l]<=p){l++;}
        }
        int temp=a[l];a[l]=a[j];a[j]=temp;
        // cout<<l<<" ";
        return l;
}
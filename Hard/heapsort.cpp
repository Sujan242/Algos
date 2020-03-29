// https://practice.geeksforgeeks.org/problems/heap-sort/1
// Main function to do heap sort. This function uses buildHeap()
   // and heapify()
void heapSort(int arr[], int n)  {
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)  {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
} 
// The functions should be written in a way that array become sorted 
// in increasing order when above heapSort() is called.
// To heapify a subtree rooted with node i which is  an index in arr[]. 
// n is size of heap. This function  is used in above heapSor()
void heapify(int a[], int n, int i)  {
      // Your Code Here
      int l=2*i+1;
      int r=2*i+2;
      int ind=i;
      if(l<n)
      {
          if(a[l]>a[ind]){ind=l;}
      }
      if(r<n)
      {
          if(a[r]>a[ind]){ind=r;}
      }
      if(ind!=i)
      {
          int temp=a[ind];a[ind]=a[i];a[i]=temp;
          heapify(a,n,ind);
      }
}

// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n)  { 
    // Your Code Here
    for(int i=n/2;i>=0;i--){
        heapify(arr,n,i);
    }
}
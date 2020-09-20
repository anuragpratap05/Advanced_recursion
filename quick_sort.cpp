# Advanced_recursion

int partition(int a[], int l, int r)
{
    int x=a[l];
    int count=0;
    for(int i=l+1;i<=r;i++)
    {
        if(a[i]<=x)
        {
            count++;
        }
    }
    
    int i=l,j=r;
    
    int temp=a[l+count];
    a[l+count]=x;
    a[l]=temp;
    
    int pivotIndex = l+count;
    
    while(i<pivotIndex && j> pivotIndex )
    {
        if(a[i]<=x)
        {
            i++;
        }
        else if(a[j]>x)
        {
            j--;
        }
        else
        {
            int temp1=a[i];
            a[i]=a[j];
            a[j]=temp1;
            i++;
            j--;
        }
        
    }
    return l+count;
}

void quicksort(int a[], int l, int r)
{
    if(l<r)
    {
        int c=partition(a,l,r);
        quicksort(a,l,c-1);
        quicksort(a,c+1,r);
    }
}

void quickSort(int input[], int size) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Change in the given array itself.
     Taking input and printing output is handled automatically.
  */
    
    quicksort(input,0,size-1);

}


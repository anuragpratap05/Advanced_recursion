# Advanced_recursion
void merge(int input[],int l,int r,int mid)
{
    int i=l,j=mid,k=0;
    int temp[r-l+1];
    
    while(i<mid && j<=r)
    {
        if(input[i]<=input[j])
        {
            temp[k]=input[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=input[j];
            j++;
            k++;
        }
    }
    while(i<mid)
    {
        temp[k]=input[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        temp[k]=input[j];
        j++;
        k++;
    }
    
    k=0;
    for(int i=l;i<=r;i++){
		input[i] = temp[k];
		k++;
	}
}


void mergesort(int input[],int l, int r )
{
    if(r>l)
    {
        int m=(l+r)/2;
        mergesort(input,l,m);
        mergesort(input,m+1,r);
        merge(input,l,r,m+1);
    }
}


void mergeSort(int input[], int size){
	// Write your code here
    //int n=size;
    mergesort(input,0,size-1);
        
}


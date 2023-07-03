    #include <stdio.h>
    void readArray(int a[], int n)
    {
        int i;
        printf("Enter elements: ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    }

    void printArray(int a[], int n)
    {
        int i;
        for(i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    int maxElement(int a[],int n)
    {
        int i,large=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>large)
            {
                large=a[i];
            }
        }
        return large;
    }
    int radixSort(int a[],int n)
    {
        if(n==0)
        {
            printArray(a,n);
            return;
        }
        int maxNumber = maxElement(a,n);    
        int digit=0;
        while((maxNumber/(10*digit))>0)
        {
            countingSort(a,n,digit);
            digit++;
        }
        printArray(a,n);
    }
    void countingSort(int a[],int n,int digit)
    {
        int i,sortedIndex,countIndex,idx;
        int sortedArray[n];
        for(i=0;i<n;i++)
        {
            sortedArray[i]=0;
        }
        int countArray[10];
        for(i=0;i<10;i++)
        {
            countArray[i]=0;
        }
        int digitColumn = 10*digit;
        for(i=0;i<n;i++)
        {
            countIndex = (i/digitColumn)%10;
            countArray[countIndex]++;
        }


        for(idx=1;idx<10;idx++)
        {
            countArray[idx]+=countArray[idx-1];
        }
        for(idx=n-1;idx>=0;idx--)
        {
            countIndex = (a[idx]/digitColumn)%10;
            countArray[countIndex]--;
            sortedIndex = countArray[countIndex];
            sortedArray[sortedIndex] = a[idx];
        }
        for(idx=0;idx<n;idx++)
        {
            a[idx] =sortedArray[idx];
        }
    }
    int main()
    {
        int n;
        system("clear");
        printf("Enter number of elements: ");
        scanf("%d",&n);
        int a[n];
        readArray(a,n);

        // int a[] = {181, 289, 390, 121, 145, 736, 514, 888, 122};
        // int n=9;

        radixSort(a,n);
    }
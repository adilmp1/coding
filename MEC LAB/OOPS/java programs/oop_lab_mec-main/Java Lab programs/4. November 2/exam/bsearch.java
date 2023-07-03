import javax.lang.model.util.ElementScanner6;

class bsearch 
{
    static void bubblesort(int a[],int n)
    {
        int i,j;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    int temp = a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    }
    static void binarySearch(int a[],int n,int key)
    {
        int first,last,mid,flag=0;
        first = 0;
        last = n-1;
        while(first<=last)
        {
            mid = (first+last)/2;
            if(a[mid]==key)
            {
                System.out.print(key+" found at pos "+mid+"\n");
                flag=1;
                break;
            }
            else if(a[mid]>key)
            {
                last=mid-1;
            }
            else 
            {
                first=mid+1;
            }
        }
        if(flag==0)
        {
            System.out.print(key+" not found\n");
        }
    }
    public static void main(String[] args) {
        int a[]={5,4,3,2,1};
        int n=5;
        bubblesort(a, n);
        binarySearch(a, n, 1);
        binarySearch(a, n, 2);
        binarySearch(a, n, 3);
    }
}

import java.util.Scanner;
class matrix
{
    public static void main(String[] args)
    {
    	Scanner read = new Scanner(System.in);
    	int m,n,p,q,k,i,j;
    	int[][] a = new int[10][10];
    	int[][] b = new int[10][10];
    	int[][] c = new int[10][10];
    	System.out.print("no of rows of first matrix: ");
    	m=read.nextInt();
    	System.out.print("no of columns of first matrix: ");
    	n=read.nextInt();
    	System.out.print("no of rows of second matrix: ");
    	p=read.nextInt();
    	System.out.print("no of columns of second matrix: ");
    	q=read.nextInt();
    	
    	if(n!=p)
    	{
    	    System.out.print("Cannot Multiply");
    	    System.exit(0);
    	}
    	System.out.println("Enter elements of matrix A");
    	for(i=0;i<m;i++)
    	{
    	    for(j=0;j<n;j++)
    	    {
    	        a[i][j]=read.nextInt();
    	    }
    	}
    	System.out.println("Enter elements of matrix B");
    	for(i=0;i<p;i++)
    	{
    	    for(j=0;j<q;j++)
    	    {
    	        b[i][j]=read.nextInt();
    	    }
    	}
    	
    	for(i=0;i<m;i++)
    	{
    	    for(j=0;j<q;j++)
    	    {
    	        c[i][j]=0;
    	        for(k=0;k<n;k++)
    	        {
    	            c[i][j]+=a[i][k]*b[k][j];
    	        }
    	    }
    	}
    	for(i=0;i<m;i++)
    	{
    	    System.out.print("\n");
    	    for(j=0;j<q;j++)
    	    {
    	        System.out.print(c[i][j]+" ");
    	    }
    	}
    	
    }
	
}

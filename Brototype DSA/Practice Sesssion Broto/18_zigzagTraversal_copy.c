#include<stdio.h>

    int main() 
    {
  int matrix[4][4] = {1,3,4,10,2,5,9,11,6,8,12,15,7,13,14,16};
  
        int M = 4, N = 4;

        int result[M*N];
        result[0] = matrix[0][0]; //Initialization start position
        int i=0, j=0, k=1;
        system("clear");
        while(k < N*M)
        {
            //move up-right first
            while(i>=1&&j<N-1){ 
                i--;
                j++;
                result[k++] = matrix[i][j];
            }
            //when we can't move up-right ,then move right one step
            if(j<N-1){ 
                j++;
                result[k++] = matrix[i][j];
            }
            //if we can't move right,just move down one step 
            else if(i<M-1) { 
                i++;
                result[k++] = matrix[i][j];
            }
            //After that,we will move down-left until it can't move
            while(i<M-1&&j>=1) { 
                i++;
                j--;
                result[k++] = matrix[i][j];
            }
            //if we can't move down-left,then move down
            if(i<M-1){ 
                i++;
                result[k++] = matrix[i][j];
            }
            //if we can't move down,just move right
            else if(j<N-1){ 
                j++;
                result[k++] = matrix[i][j];
            }
        }
      for (int i=0; i<M*N; i++)
          printf("%d ",result[i]) ;
        return 0;  
    }
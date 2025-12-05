
// 1.1 The last and first elements of the array are separated by a space.
#include <stdio.h>
int main(void)
{
        int N = 0;
        scanf("%d", &N);

        int arr[N];

        for(int cnt = 0; cnt < N; cnt++){
            scanf("%d", &arr[cnt]);
        }

        printf("%d %d",arr[N-1],arr[0]);

        return 0;
}

// 1.2 One number is the sum of two array elements with indexes k and m.

#include <stdio.h>
int main(void)
{ int N, k,m,res;
 scanf("%d\n",&N);
 int array[N];
 for (int cnt = 0; cnt < N; cnt++){
      scanf("%d",&array[cnt]);

     }
 scanf("\n%d %d",&k,&m);
     if (k >= 0 && k < N && m >= 0 && m < N){
     res = array[k]+array[m];
     printf("%d",res);
     }

    return 0;
}

// 1.3 Reverse - Rearrange the array elements in reverse order.

#include <stdio.h>
int main(void)
{int n;
 scanf("%d",&n);
 int arr[n];
 for (int i = 0; i < n; i++){
      scanf("%d",&arr[i]);
 }
 for (int j = n -1; j >= 0; j--){
     printf("%d ",arr[j]);
 }

    return 0;
}

// 1.4 Palindrome Determine whether an array is a palindrome, i.e. the first element is equal to the last, the second to the penultimate, etc.

int main(void)
{ int n;
 scanf("%d\n",&n);
 int arr[n];
 for (int i = 0; i < n; i++){
      scanf(" %d",&arr[i]);
 }
 for (int i = 0; i <n; i++){
      if (arr[i] != arr[n-1-i]){
          printf("NO");
          return 0;
      }
 }printf("YES");

    return 0;
}

// 1.5 Print the even elements of the array first, and then the odd ones.

#include <stdio.h>
int main(void)
{int n;
 scanf("%d",&n);
 int arr[n] ;
 for (int i = 0; i < n; i++){
      scanf("%d",&arr[i]);
     if ( arr[i] % 2 == 0){
          printf("%d ",arr[i]);
     }
 }for (int i = 0; i < n; i++){
      scanf("%d",&arr[i]);
     if ( arr[i] % 2 != 0){
          printf("%d ",arr[i]);
     }
 }
    return 0;
}

// 1.6 Write a program that displays all the elements of an array that are smaller than the last element and larger than the first element of the array.

#include <stdio.h>
int main(void)
{int n, found = 0;
 scanf("%d",&n);
 int arr[n];
 for (int i = 0; i < n; i++){
      scanf("%d",&arr[i]);
 }
 for (int i = 0; i < n -1; i++){
      if (arr[i] > arr[0] && arr[i] < arr[n-1]){
          printf("%d ",arr[i]);
         found = 1;
      }
 }


 if (found == 0){
      printf("%d",0);
 }

    return 0;
}

// 1.7 Find the arithmetic mean of the array elements.

#include <stdio.h>
int main(void)
{int n,sum = 0;
 double res;
 scanf("%d",&n);
 int arr[n];
 for (int i = 0 ; i< n ; i++){
      scanf("%d",&arr[i]);
     sum =  sum + arr[i];
 }
 res =(double) sum / n;
 printf("%.2lf",res);
    return 0;
}

// 1.8 Divide the array into two parts by placing elements larger than the arithmetic mean in the first,
 //and elements smaller and equal to the arithmetic mean in the second.

 #include <stdio.h>
int main(void)
{ int n,sum= 0;
 double mid_n;
 scanf("%d",&n);
 int arr[n];
 for (int i = 0; i < n;i++){
      scanf("%d ",&arr[i]);
      sum = sum + arr[i];
 }
 mid_n = (double) sum / n;
 for (int i = 0; i < n ; i++){
      if (arr[i] > (int) mid_n){
           printf("%d ",arr[i]);
      }
 }
 for (int i = 0; i < n ; i++){
      if (arr[i] <= (int) mid_n){
           printf("%d ",arr[i]);
      }
 }

    return 0;
}

// 1.9 In the specified array, swap the first and second halves.

#include <stdio.h>
int main(void)
{ int n;
 scanf("%d",&n);
int arr[n];
 for(int i = 0; i<n;i++){
      scanf("%d",&arr[i]);
 }
 for (int i = n/2; i < n ; i++){
      printf("%d ",arr[i]);
 }
 for (int i = 0; i < n /2; i++){
      printf("%d ",arr[i]);
 }

    return 0;
}

// 1.10 In a given array, swap the largest and smallest elements.

#include <stdio.h>
int main(void)
{int n, max= -9999,min=9999;
 scanf("%d",&n);
int arr[n];
for (int i = 0; i < n;i++){
     scanf("%d",&arr[i]);
    if ( min > arr[i]){
         min = arr[i];

    }
    if ( max < arr[i]){
         max = arr[i];

    }
}
for (int i = 0; i<n; i++){
     if ( arr[i] == max){
         arr[i] = min;
     }else if (arr[i] == min) {
         arr[i] = max;
     }
    printf("%d ",arr[i]);
}
    return 0;
}


// 2.1 Display the elements of a two-dimensional array (matrix) on the screen.

#include <stdio.h>
int main(void)
{int n,m;
 scanf("%d %d",&n,&m);
 int arr[n][m];
 for (int i = 0; i < n; i++){
      for (int j = 0; j < m; j++){
           scanf("%d",&arr[n][m]);
           printf("%d ", arr[n][m]);
      }
     printf("\n");
 }

    return 0;
}


// 2.2 Transposition For a given matrix, display the transposed matrix.

#include <stdio.h>
int main(void)
{ int n,m;
 scanf("%d %d",&n,&m);
 int arr[n][m];
 for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
           scanf("%d",&arr[i][j]);
      }
 }
 for(int i = 0; i < m ; i++){
      for(int j = 0; j < n ; j++){
           printf("%d ",arr[j][i]);
      } printf("\n");
 }

    return 0;
}

// 2.3 Display an N-by-N array of the specified type. Numbers should be separated by spaces.

#include <stdio.h>
int main(void)
{ int n;
 scanf("%d",&n);
 int arr[n][n];
 for(int i = 1; i <n+1 ;i++){
     if ( i % 2 != 0){
         for(int j = 1; j <n +1 ; j++){
             printf("%d ",j);
         }
     }else {
         for(int j = n; j > 0; j--){
             printf("%d ",j);
         }
     }


      printf("\n");
 }

    return 0;
}

// 2.4 Display an N-by-N array of the specified type. Numbers should be separated by spaces.


#include <stdio.h>
#include <math.h>
int main(void)
{ int n;
 scanf("%d",&n);
 int arr[n][n];
 for(int i = 1; i < n +1; i++){
      for(int j = 1; j < n + 1; j++){
           printf("%d ",1+ abs(j-i));
      }printf("\n");
 }

    return 0;
}


// 2.5 Diagonals  For a given square matrix A[N][N], calculate the following values:


#include <stdio.h>
int main(void)
{ int n;
 int main_diag = 1, second_diag = 1;
 scanf("%d",&n);
 int arr[n][n];
 for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
           scanf("%d",&arr[i][j]);
      }
 }

 for (int i = 0; i <n ; i++){
      main_diag *= arr[i][i];
      second_diag *= arr[i][n-i-1];
 }

if (main_diag > second_diag){
     printf("%d %d",main_diag, second_diag );
} else {
     printf("%d %d", second_diag, main_diag );
}
    return 0;
}

 // 2.6 the sum of the elements above the main diagonal the sum of the elements below the side diagonal

 #include <stdio.h>
int main(void)
{ int n, sum_up = 0, sum_down = 0;
 scanf("%d",&n);
int arr[n][n];
 for(int i = 0; i < n; i++){
      for(int j = 0; j <n; j++){
           scanf("%d",&arr[i][j]);
      }
 }
 for(int i = 0; i < n; i++){
      for(int j = 0; j <n; j++){
           if ( i < j){
               sum_up += arr[i][j];
           }
          if ( i > (n - 1 - j)){
               sum_down += arr[i][j];
          }
      }
 }
 if (sum_up < sum_down){
      printf("%d %d",sum_up,sum_down);
 } else {
      printf("%d %d",sum_down ,sum_up);
 }

    return 0;
}

// 2.7 Columns For a given matrix, calculate the sum of the elements of each column.

#include <stdio.h>
int main(void)
{int n,m;
 scanf("%d %d",&n,&m);
 int arr[n][m];
 int sums[m];
 for (int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
           scanf("%d",&arr[i][j]);
      }
 }
 for(int j = 0; j < m; j++){
      sums[j] = 0;
     for(int i = 0; i < n; i++){
          sums[j]+= arr[i][j];
     }
 }
 for (int i = m - 1; i >= 0; i --){
      printf("%d ",sums[i]);
 }
printf("\n");
    return 0;
}


// 2.8 Swap the column with the minimum sum of elements with the column with the maximum sum of elements.

#include <stdio.h>
int main(void)
{int n,m;
 scanf("%d %d",&n,&m);
 int arr[n][m];
 int sums[m], min_col_index =0, max_col_index = 0;
 for ( int i = 0; i < n; i++){
      for (int j = 0; j < m; j++){
           scanf("%d",&arr[i][j]);
      }
 }
 for (int j = 0; j < m; j++){
      sums[j] = 0;
     for(int i = 0; i < n; i++){
          sums[j] += arr[i][j];
     }
     if (sums[j] > sums[max_col_index]){
         max_col_index = j;
     }
     if (sums[j] < sums[min_col_index]){
          min_col_index = j;
     }
 }
 for(int i = 0; i < n; i++){
     int temp = arr[i][min_col_index];
     arr[i][min_col_index] = arr[i][max_col_index];
     arr[i][max_col_index] = temp;
 }


 for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
         printf("%d ",arr[i][j]);
    }printf("\n");
 }

    return 0;
}

// 2.9  Cyclic shift  Make a cyclic shift of the columns of the square matrix A[N][N] by K positions to the right.



#include <stdio.h>

int main() {
    int N, K;
    scanf("%d", &N);

    int matrix[N][N];


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    scanf("%d", &K);


    int temp_matrix[N][N];


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            temp_matrix[i][j] = matrix[i][j];
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Новый индекс столбца после сдвига
            int new_j = (j + K) % N;
            matrix[i][new_j] = temp_matrix[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// 2.10 The snake For the given numbers M and N, form a matrix filled in a spiral with numbers from 1 to M⋅N.

#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    // Two-dimensional fixed-size array
    int a[m][n];

    // Zeroing the array
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = 0;
        }
    }

    // Account start and start position
    int startNum = 1;
    int left = 0, right = n - 1, top = 0, bottom = m - 1;

    while (startNum <= m * n) {
        // Upper side (from left to right)
        for (int j = left; j <= right && startNum <= m*n; j++) {
            a[top][j] = startNum++;
        }
        top++;  // Transition to the lower level from above

        // Right side (top to bottom)
        for (int i = top; i <= bottom && startNum <= m*n; i++) {
            a[i][right] = startNum++;
        }
        right--;  // Shortening the right border

        // Bottom side (from right to left)
        for (int j = right; j >= left && startNum <= m*n; j--) {
            a[bottom][j] = startNum++;
        }
        bottom--;  // Reduction of the lower limit

        // Left side (bottom up)
        for (int i = bottom; i >= top && startNum <= m*n; i--) {
            a[i][left] = startNum++;
        }
        left++;  // Enlarging the left border
    }

    // Output matrix
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>
// 给定N个整数的序列，求最大连续子列和

// 暴力算法
int MaxSubseqSum0(int A[], int N)
{
  int ThisSum, MaxSum = 0;
  int i, j, k;
  for (i = 0; i < N; i++)
  {
    for (j = i; j < N; j++)
    {
      ThisSum = 0;
      for (k = i; k <= j; k++)
      {
        ThisSum += A[k];
        if (ThisSum > MaxSum)
          MaxSum = ThisSum;
      }
    }
  }
  return MaxSum;
}

// 优化k 循环
int MaxSubseqSum1(int A[], int N)
{
  int ThisSum, MaxSum = 0;
  int i, j, k;
  for (i = 0; i < N; i++)
  {
    for (j = i; j < N; j++)
    {
      ThisSum += A[j];
      if (ThisSum > MaxSum)
        MaxSum = ThisSum;
    }
  }
  return MaxSum;
}

// 分而治之
int MaxSubseqSum2(int A[], int N)
{
  for (int i = 0; i < N; i++)
  {
    /* code */
  }
}

// 在线处理
int MaxSubseqSum3(int A[], int N)
{
  int ThisSum, MaxSum;
  int i;
  ThisSum = MaxSum = 0;
  for (i = 0; i < N; i++)
  {
    ThisSum += A[i];
    if (ThisSum > MaxSum)
    {
      MaxSum = ThisSum;
    }
    else if (ThisSum < 0)
    {
      ThisSum = 0;
    }
  }
  return MaxSum;
}

int main(int argc, char **argv)
{
  int K;
  scanf("%d\n", &K);
  int *A = (int *)malloc(K * sizeof(int));
  for (int i = 0; i < K; i++)
  {
    scanf("%d", &A[i]);
  }
  printf("%d\n", MaxSubseqSum3(A, K));
  free(A);
  return 0;
}
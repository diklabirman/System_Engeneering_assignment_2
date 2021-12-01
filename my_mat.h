
#ifndef _MY_MATH_H
#define _MY_MATH_H

#define size 10
#define MAX_VALUE 1000000

int getMin(int i, int j);
void getValues();
void floydWarshallAlgo();
void pathExists(int i, int j);
void shortestPath(int i, int j);
void printmat(int vec[size][size]);

extern int arr[size][size];
extern int ans[size][size];

#endif // _MY_MATH_H

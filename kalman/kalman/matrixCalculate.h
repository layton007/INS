#pragma once
#include <cstdlib>
#include <cstdio>

/********����3��3����������*********/
void inv33(double *m);

/********����n��n����������*********/
void dcinv(double a[], int n);

/**************����˷�����(result=m1*m2')**************/
void mXtrm(int n1, int n2, int n3, double *m1, double *m2, double *result);

/**************����˷�����(c=base+a*b)**************/
void mAddMult(int n, int m, int l, double *base, double *a, double *b, double *c);

/**************����˷�����(result=m1*m2)**************/
void mXm(int n1, int n2, int n3, double *m1, double *m2, double *result);

void mAdd(int n1, int n2, int n3, double *m1, double *m2, double *result);

void white(double Qk[]);
void printMat(double A[], int m, int n);
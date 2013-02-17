/*
 * =====================================================================================
 *
 *       Filename:  mergeSort.cpp
 *
 *    Description:  Function to count inversions in an input array
 *
 *        Version:  1.0
 *        Created:  Thursday 31 January 2013 02:19:22  IST
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  NEERAJ GANGWAR (), y.neeraj2008@gmail.com
 *   Organization:  SDSLabs
 *
 * =====================================================================================
 */

#include<iostream>
#include<fstream>
using namespace std;
long long merge(long[], int, int, int);

/* merge sort implementation
 * O(n*lgn) time complexity
 */
long long count(long a[], int p, int r) {
    if(r > p) {
        long long q = (p+r)/2;
        long long x = count(a, p, q);
        long long y = count(a, q+1, r);
        long long z = merge(a, p, q, r);
        return x+y+z;
    } else return 0;
}

long long merge(long a[], int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    long L[n1], R[n2];
    long long count=0;

    for(int i=0; i<n1; i++)
        L[i] = a[p+i];
    for(int j=0; j<n2; j++)
        R[j] = a[q+j+1];

    int i=0, j=0, k=p;
    for(; k<=r; k++) {
        if(L[i]  <= R[j]) {
             a[k] = L[i];
             i++;
        } else {
             a[k] = R[j];
             j++;
             count = count + n1 - i;
        }
        if(i >= n1 || j >= n2)
            break;
    }
    k++;
    if(i < n1) {
        while(k <= r) {
            a[k++] = L[i++];
        }
    }
    return count;
}


/*  brute force implementation
 *  O(n^2) time complexity
 *  */
long long countInv(long a[], int size) {
    long long count=0;
    for(int i=0; i<size; i++) {
        for(int j=i+1; j<size; j++) {
            if(a[i] > a[j])
                count++;
        }
    }
    return count;
}

int main() {
    ifstream infile("IntegerArray.txt");
    long a[100000];
    int i=0;
    while(infile>>a[i])
        i++;
    int size = sizeof(a)/sizeof(a[0]);
    cout<<count(a,0, size-1)<<endl;
    return 0;
}

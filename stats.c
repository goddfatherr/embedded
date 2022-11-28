/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief Calculates Statistical parameters of a given sequence of unsigned char data items
 *
 * This program employs various helper functions to compute some statistical parameters of 
 * an unsigned character sequence and displays the summary on the console. 
 *
 * @author Asogwa Emmanuel Nnaemeka
 * @date 28th of November 2022 
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int find_maximum(unsigned char *arr, int n){
  int tmp = arr[0];
  for(int i=0;i<n;i++)
    if(arr[i]>tmp) tmp = arr[i];
  return tmp;   
}

int find_minimum(unsigned char *arr, int n){
  int tmp = arr[0];
  for(int i=0;i<n;i++)
    if(arr[i]<tmp) tmp = arr[i];
  return tmp;   
}

int find_median(unsigned char *arr, int n){
  unsigned char arr1[SIZE];
  sort_array(arr,arr1,n);
  if(n%2==0) return (arr1[n/2] + arr1[n/2 -1])/2;
  return arr1[n/2];
}

int find_mean(unsigned char *arr, int n){
  int tmp = 0;
  for(int i = 0; i<n;i++) 
    tmp+=arr[i];
  return tmp/n;  
}
void sort_array(unsigned char *arr1,unsigned char *arr2, int n){
  for(int i = 0;i<n;i++){
    arr2[i] = arr1[i];
  }
  int  swapped = 1, tmp = 0;  //bubble sort
  for(int i = 0;i<n-1;i++){
    swapped = 0; 
    for(int j = 0;j<n-1;j++){
      if(arr2[j]<arr2[j+1]){
        tmp = arr2[j]; arr2[j] = arr2[j+1]; 
        arr2[j+1] = tmp; swapped = 1; 

      }
    }
    if(!swapped) return; 
  }

}

void print_array(unsigned char *arr,int n){
  int count = 0; 
  for(int i = 0; i<n;i++){
    if(count>9) {
      printf("\n"); count = 0; 
    }
    printf("%d\t",arr[i]); count++;
  }
  printf("\n\n");
}

void print_statistics(unsigned char *arr1,unsigned char* arr2,int n){
  printf("Statistical Summary\n\n");
  printf("1. Input Array:\n\n");
  print_array(arr1,n);
  printf("2. Maximum: %d\n\n",find_maximum(arr1,n));
  printf("3. Minimum: %d\n\n",find_minimum(arr1,n));
  printf("4. Mean: %d\n\n",find_mean(arr1,n));
  printf("5. Median: %d\n\n",find_median(arr1,n));
  printf("6. Sorted Array:\n\n");
  print_array(arr2,n);

}
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  unsigned char arr2[SIZE];
  sort_array(test,arr2,SIZE);   //sort arr2
  print_statistics(test,arr2, SIZE);

}

/* Add other Implementation File Code Here */

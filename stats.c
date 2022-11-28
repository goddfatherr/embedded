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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
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

int find_maximum(unsigned char *arr, int n){
  int tmp = arr[0];
  for(int i=0;i<n;i++)
    if(arr[i]<tmp) tmp = arr[i];
  return tmp;   
}

int find_median(unsigned char *arr, int n){
  sort_array(arr,n);
  if(n%2==0) return (arr[n/2] + arr[n/2 -1]);
  return arr[n/2];
}

int find_mean(unsigned char *arr, int n){
  int tmp = 0;
  for(int i = 0; i<n;i++) 
    tmp+=arr[i];
  return tmp/n;  
}
unsigned char* sort_array(unsigned char *arr1,unsigned char *arr2, int n){
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
  printf("Original Array");
  for(int i = 0; i<n;i++){
    printf("%d\t");
  }

}


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

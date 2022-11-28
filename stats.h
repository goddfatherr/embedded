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
 * @file <stats.h> 
 * @brief Calculates some statistical information on a given set of integers
 *
 * This program calculates performs basic statics on a given set of numbers and prints them
 * to console. The pointer to the input sequence is to be passed to the helper functions to 
 * calculate each statistical data. 
 *
 * @author <Asogwa Emmanuel Nnaemeka>
 * @date <Monday, 28th November 2022>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


/**
 * @brief Finds the maximum of a given unsigned char data items
 *
 * This function takes two paramenters- an unsigned char pointer arr and an integer n
 * representing the length of the input sequence and returns the maximum data item in the sequence
 *
 * @param *arr:  the unsigned int pointer pointing to the sequence.
 * @param n: number of elements in the sequence 
 *
 * @return maximum element in the given sequence
 */
int find_maximum(unsigned char *arr, int n);

/**
 * @brief Finds the minimum of a given unsigned char data items.
 * 
 * This function takes two paramenters- an unsigned char pointer arr and an integer n
 * representing the length of the input sequence and returns the minimum data item in the sequence.
 *
 * @param *arr:  the unsigned int pointer pointing to the sequence.
 * @param n: number of elements in the sequence .
 * 
 * @return minimum element in the given sequence
 */
int find_minimum(unsigned char *arr, int n);

/**
 * @brief Finds the median of a given unsigned char data items
 *
 * This function takes two paramenters- an unsigned char pointer arr and an integer n
 * representing the length of the input sequence and returns the  data item in the sequence
 * 
 * @param *arr:  the unsigned int pointer pointing to the sequence.
 * @param n: number of elements in the sequence 
 *  
 * @return maximum element in the given sequence
  */
int find_median(unsigned char *arr, int n);

/**
 * @brief Finds the mean of a given unsigned char data items
 *
 * This function takes two paramenters- an unsigned char pointer arr and an integer n
 * representing the length of the input sequence and returns the mean of the  data items
 * 
 * @param *arr:  the unsigned int pointer pointing to the sequence.
 * @param n: number of elements in the sequence 
 *  
 * @return mean of the given sequence
  */
int find_mean(unsigned char *arr, int n);

/**
 * @brief Sorts a given sequence fro largest to smallest
 *
 * This function takes two parameters- an unsigned char pointer arr and an integer n
 * representing the length of the input sequence and applies the bubble sorting algorithm
 * to the sequence
 * 
 * @param *arr:  the unsigned int pointer pointing to the sequence.
 * @param n: number of elements in the sequence 
 *  
 * @return void
  */
void  sort_array(unsigned char *arr1,unsigned char *arr2, int n);
/**
 * @brief prints a given sequence of unsigned char data items

 * This function takes two paramenters- an unsigned char pointer arr and an integer n
 * representing the length of the input sequence and prints the sequence to console
 * @param *arr:  the unsigned int pointer pointing to the sequence to print.
 * @param n: number of elements in the sequence 
 *  
 * @return void
  */
void print_array(unsigned char *arr,int n);

/**
 * @brief Fomrats and pints the calculated statistical data to console
 *
 * This function prints statistical information obtained from the helper functions defined above.
 * 
 * @param *arr1:  the unsigned int pointer pointing to the sequence.
 * @param *arr2:  the unsigned int pointer pointing to the output of the sorted array.
 * @param n: number of elements in the sequence 
 *
 * @return void
  */
void print_statistics(unsigned char *arr1,unsigned char* arr2,int n);





#endif /* __STATS_H__ */

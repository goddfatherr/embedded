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

/* Add Your Declarations and Function Comments here */ 
int find_maximum(unsigned char *arr, int n);
int find_minimum(unsigned char *arr, int n);
int fnd_mean(unsigned char *arr, int n);
int find_median(unsigned char *arr, int n);
int sort_array(unsigned char *arr, int n);
void print_array(unsigned char *arr, int n);
void print_statistics();
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
 * representing the length of the input sequence and returns a sorted sequence of the orginal data
 * froms largest to smallest
 * 
 * @param *arr:  the unsigned int pointer pointing to the sequence.
 * @param n: number of elements in the sequence 
 *  
 * @return unsigned char pointer to the sorted array
  */
unsigned char* sort_array(unsigned char *arr, int n);

/**
 * @brief prints a given sequence of unsigned char data items

 * This function takes two paramenters- an unsigned char pointer arr and an integer n
 * representing the length of the input sequence and prints the sequence to console
 * @param *arr:  the unsigned int pointer pointing to the sequence.
 * @param n: number of elements in the sequence 
 *  
 * @return void
  */
void print_array(unsigned char *arr, int n);

/**
 * @brief Fomrats and pints the calculated statistical data to console
 *
 * This function prints statistical information obtained from the helper functions defined above.
 * 
 * @param nil 
 *
 * @return void
  */
void print_statistics();





#endif /* __STATS_H__ */

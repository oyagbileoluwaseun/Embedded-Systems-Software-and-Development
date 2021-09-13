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
 * @file week1 Programming Assignment 
 * @brief An application That perform statistical analytics on data set
 *
 * <Add Extended Description Here>
 *
 * @author Oluwaseun Oyagbile
 * @date 13 september 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_statistics(int stats);
/**
 * @brief Print unsigned Char
 *
 * Function to print Median, Mean, Max, Mini
 *
 * @param int Value  
 *  
 * @return None
 */

void print_array(int* array, int size);
/**
 * @brief Print array of char
 *
 * Function to print an array of char
 *
 * @param Pointer to an array 
 * @param int size of array 
 *  
 * @return None
 */

int find_median(int* array, int size);
/**
 * @brief Find the Median 
 *
 * Function to find the Median 
 *
 * @param Pointer to an array 
 * @param int size of array 
 *  
 * @return Median value
 */

int find_mean(int* array, int size);
/**
 * @brief Find the Mean
 *
 * Function to find the Mean 
 *
 * @param Pointer to an array 
 * @param int size of array 
 *  
 * @return Mean value
 */

int find_maximum(int* array, int size);
/**
 * @brief Find the Maximum
 *
 * Function to find the Maximum 
 *
 * @param Pointer to an array 
 * @param int size of array 
 *  
 * @return Maximum value
 */

int find_minimum(int* array, int size);
/**
 * @brief Find the minimum
 *
 * Function to find the minimum 
 *
 * @param Pointer to an array 
 * @param int size of array 
 *  
 * @return minimum value
 */

void sort_array(int* array, int size);
/**
 * @brief Sort an array descendingly
 *
 * Given an array of data and length, Sort the array from largest to smalles
 *
 * @param Pionter to an array 
 * @param int size of array 
 *  
 * @return None
 */


#endif /* __STATS_H__ */
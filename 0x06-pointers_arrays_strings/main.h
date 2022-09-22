#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>


char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *string_toupper(char *s);
char *cap_string(char *s);
char *leet(char *str);
char *rot13(char *str);
void print_number(int n);
int _putchar(char c);
void print_buffer(char *b,int size);
char *infinite_add(char *n1,char *n2,char *r,intsize_r);
char *add_strings(char *n1,char *n2,char *r,int r_index);

#endif

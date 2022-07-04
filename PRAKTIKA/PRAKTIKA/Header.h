#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <iostream>
#include <string.h>
using namespace std;
int input_key();
int mini(int* arr, int j);
void swaper(int* arr, int j);
int* TakeData_and_FindnOfElem(FILE* file, int* arr, int* j);
void Printarray(int* arr, int j);
void Printmodernarray(int* arr, int j);
void My_Program(int* arr, int j);
void Test(int* arr, int j);


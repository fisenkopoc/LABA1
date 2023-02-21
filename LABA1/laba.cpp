#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "laba.h"
#define CORRECT_PARAMETERS 3 //
#define SIZE 2048 // 

    int main(void)
    {
        char* filename1 = "test1.txt";
        char* filename2 = "test2.txt";
        char buffer[256];
        FILE* f1 = fopen(filename1, "r");   // ���� �� ������
        FILE* f2 = fopen(filename2, "w");   // ���� �� ������
        if (!f1 || !f2)
        {
            printf("Error occured while opening file\n");
        }
        else
        {
            // ���� �� ������ �� �����, ��������� �� 256 ���� �� ����� f1
            while ((fgets(buffer, 256, f1)) != NULL)
            {
                // ���������� ������ � ���� f2
                fputs(buffer, f2);
                printf("%s", buffer);
            }
        }

        fclose(f1);
        fclose(f2);

        return 0;
    }

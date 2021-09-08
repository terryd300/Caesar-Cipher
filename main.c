#include <stdio.h>
#include <stdlib.h>
#include "caesar.h"

//Command Line - [0]./a.out [1]inputfile [2]outputfile [3]offset

int main (int argc, char** argv)
{
    if (argc != 4)
    {
        printf("You have entered an invalid number of arguments!\n");
        printf("The program will be terminated.\n");
        return 0;
    }

    int offset = atoi(argv[3]);
    char ch;
    char shifted;

    //Open file

    FILE *input = fopen(argv[1], "r");
    FILE *output = fopen(argv[2], "w");

    //Determine offset in valid range

    if (offset < -25 || offset > 25)
    {
        printf("You have entered an invalid offset!\n");
        printf("The program will be terminated.\n");
        return 0;
    }


    //Obtain each character in the input file and then offset by the offset amount

    while ((ch = fgetc(input)) != EOF)
    {
        shifted = caesar(ch, offset);
        fputc(shifted, output);
    }

    //Write each character to the output file



    return 0;

}
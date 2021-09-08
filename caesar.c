#include "caesar.h"

char caesar(char character, int offset)
{
    //Receives character and offset

    //Determine if character is a letter

    int ch = character;

    if (ch >= 65 && ch <= 90)
    {
        ch += (offset % 26);

        if (ch > 90)
            ch -= 26;

        else if (ch < 65)
            ch += 26;
    }

    else if (ch >= 97 && ch <= 122)
    {
        ch += (offset % 26);

        if (ch > 122)
            ch -= 26;

        else if (ch < 97)
            ch += 26;
    }

    char shifted = ch;

    //If not letter, return the same character
    //If letter, add offset
    //If new character out of range of letters, adjust by 26, depending on sign of offset
    //Return new character

    return shifted;
}
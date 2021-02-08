// Pointer_Strings.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>

int stringLength(char* toCount);
int countAs(char* toCount);
void replaceLetter(char* toEdit);

int main()
{
    char letters[50] = "";
    printf("Bitte einen string angeben: ");
    fflush(stdin);
    gets_s(letters);;
    printf("\nDer angebene string besteht aus %i Zeichen", stringLength(letters));
    printf("\nDer angebene string besteht hat %i a/A 's", countAs(letters));

    replaceLetter(letters);
    printf("\nHier sind alle a's klein :\n%s", letters);
    getchar();

}

int stringLength(char* toCount) 
{
    int retval = 0;
    while (toCount[retval] != '\0')
    {
        retval++;
    }
    return retval;
}

int countAs(char* toCount)
{
    int length = stringLength(toCount);
    int as = 0;

    for (int i = 0; i < length; i++) 
    {
        if (toCount[i] == 65 || toCount[i] == 97) 
        {
            as++;
        }
    }
    return as;
}

void replaceLetter(char* toEdit)
{
    int length = stringLength(toEdit);
    int as = 0;

    for (int i = 0; i < length; i++)
    {
        if (toEdit[i] == 65 )
        {
            toEdit[i] = 97;
        }
    }
}
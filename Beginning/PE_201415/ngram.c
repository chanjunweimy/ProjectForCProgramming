// CS1010 AY2014/15 
// PE2 Ex1 ngram.c

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 101

int mostFrequentUnigram(char text[], char result[]);
int mostFrequentBigram(char text[], char result[]);

int main() 
{
    char text[MAX_SIZE], result[3];
    int option, unigramFreq, bigramFreq;

    printf("Enter text: ");
    fgets(text, MAX_SIZE, stdin);

    printf("Enter option: ");
    scanf("%d", &option);

    if (option == 1) 
    {
        unigramFreq = mostFrequentUnigram(text, result);
        printf("Most frequent unigram: %s\n", result);
        printf("Frequency: %d\n", unigramFreq);
    }
    else if (option == 2)
    {
        bigramFreq = mostFrequentBigram(text, result);
        printf("Most frequent bigram: %s\n", result);
        printf("Frequency: %d\n", bigramFreq);
    }
    return 0;
}

int mostFrequentUnigram(char text[], char result[])
{
    int alphabetFrequency[26] = {0};
    int i=0, maxFreq = -1, maxIndex = -1;

    // Input frequencies
    for (i=0; i<strlen(text)-1; i++)
    {
        alphabetFrequency[text[i]-'a']++;
    }

    // Find max frequency
    for (i=0; i<26; i++)
    {
        if (alphabetFrequency[i] > maxFreq){
            maxFreq = alphabetFrequency[i];
            maxIndex = i;
        }
    }
    
    result[0] = 'a' + maxIndex;
    result[1] = '\0';       // Note: using \n gives weird output
    return maxFreq;
}

int mostFrequentBigram(char text[], char result[])
{
    int alphabetFrequency[26][26] = {{0}};
    int i, j, maxFreq = -1, maxIndexI = -1, maxIndexJ = -1;

    for (i=0; i<strlen(text)-1; i++)
    {
        alphabetFrequency[text[i]-'a'][text[i+1]-'a']++;
    }

    for (i=0; i<26; i++)
    {
        for (j=0; j<26; j++)
        {
            if (alphabetFrequency[i][j] > maxFreq)
            {
                maxFreq = alphabetFrequency[i][j];
                maxIndexI = i;
                maxIndexJ = j;
            }
        }
    }
    
    result[0] = 'a' + maxIndexI;
    result[1] = 'a' + maxIndexJ;
    result[2] = '\0';
    return maxFreq;
}


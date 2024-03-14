#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
int count_words(string text);
int count_letters(string text);
int count_sentences(string text);
int main(void)
{
    string input = get_string("Enter Text: ");
    int letters = count_letters(input);
    int words = count_words(input);
    int sentences = count_sentences(input);
    float L = ((float) letters / (float) words) * 100;
    float S = ((float) sentences / (float) words) * 100;

    double index = 0.0588 * L - 0.296 * S - 15.8;
    int output = (int) round(index);
    if (output > 16)
    {
        printf("Grade 16+\n");
    }
    else if (output < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", output);
    }
}
int count_words(string text)
{
    int count = 0;
    for(int i = 0, len = strlen(text); i < len + 1; i++)
    {
        if (text[i] == ' ' || text[i] == '\0')
        {
            count++;
        }
    }
    return count;
}
int count_letters(string text)
{
    int count = 0;
    for (int i = 0, len = strlen(text); i < len + 1; i++)
    {

        if ((text[i] >= 'a' && text[i] <= 'z') ||(text[i] >= 'A' && text[i] <= 'Z'))
        {
            count++;
        }
    }
    return count;
}
int count_sentences(string text)
{
    int count = 0;
    for (int i = 0, len = strlen(text); i < len + 1; i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            count++;
        }
    }
    return count;
}

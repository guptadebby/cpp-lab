#include <iostream>
#include <string>
#include <climits>
#include <limits>
using namespace std;

// Function to check whether a number is a palindrome
bool isNumberPalindrome(long long num)
{
    if (num < 0)
        return false;

    long long original = num;
    long long reversed = 0;

    while (num > 0)
    {
        int digit = num % 10;

        // Prevent integer overflow
        if (reversed > (LLONG_MAX - digit) / 10)
            return false;

        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    return original == reversed;
}

// Function to check whether a string is a palindrome
bool isStringPalindrome(string str)
{
    int start = 0;
    int end = str.length() - 1;

    while (start < end)
    {
        if (str[start] != str[end])
            return false;

        start++;
        end--;
    }

    return true;
}

int main()
{
    long long number;
    string text;

    // Number palindrome check
    cout << "Enter a number: ";
    cin >> number;

    if (isNumberPalindrome(number))
        cout << number << " is a palindrome number." << endl;
    else
        cout << number << " is not a palindrome number." << endl;

    // String palindrome check
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nEnter a string: ";
    getline(cin, text);

    if (isStringPalindrome(text))
        cout << text << " is a palindrome string." << endl;
    else
        cout << text << " is not a palindrome string." << endl;

    return 0;
}
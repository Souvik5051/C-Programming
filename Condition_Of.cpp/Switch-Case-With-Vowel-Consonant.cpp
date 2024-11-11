#include <iostream>
using namespace std;
int main()
{
    char character;
    cout << "Enter the character : ";
    cin >> character;
    switch (character)
    {
    case 'a':
        cout << character << " is a vowel";
        break;
    case 'e':
        cout << character << " is a vowel";
        break;
    case 'i':
        cout << character << " is a vowel";
        break;
    case 'o':
        cout << character << " is a vowel";
        break;
    case 'u':
        cout << character << " is a vowel";
        break;
    default:
        cout << character << " is a consonant";
        break;
    }
    return 0;
}








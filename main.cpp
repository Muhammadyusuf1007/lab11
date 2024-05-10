#include <iostream>
#include "functions.h"
#include <string>
#include <cctype>
#include <ctime>
#include <vector>

using namespace std;

int main() {

    cout<<"PROBLEM 1"<<endl;
    int rows1;
    cout << "Enter the number of rows: ";
    cin >> rows1;

    double matrix1[rows1][SIZE];

    cout << "Enter " << rows1 << " rows of " << SIZE << " elements each:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix1[i][j];
        }
    }

    for (int j = 0; j < SIZE; ++j) {
        cout << "Sum of column " << j << ": " << sumColumn(matrix1, rows1, j) << endl;
    }
    cout<<"PROBLEM 2"<<endl;
    double matrix[SIZE][SIZE];

    cout << "Enter " << SIZE << " rows of " << SIZE << " elements each:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix[i][j];
        }
    }

    double diagonalSum = sumMajorDiagonal(matrix);
    cout << "Sum of the major diagonal: " << diagonalSum << endl;
    cout<<"PROBLEM 3"<<endl;

    cout<<"PROBLEM 4"<<endl;
    string word1;
    char symbole1;
    cin>>symbole1>>word1;
    search(word1, symbole1);

    cout<<"PROBLEM 5"<<endl;
    string word2 = "The True story";
    char symbole2 = 'T';
    int result = count(word2, symbole2);
    cout << "Number of occurrences: " << result << endl;
    
    cout<<"PROBLEM 6"<<endl;
    const int SIZE6 = 26;
    int counts6[SIZE6] = {0};

    string input6=0;
    getline(cin, input6);

    count6(input6, counts6);

    for (int i = 0; i < SIZE6; i++) {
        if (counts6[i] != 0) {
            cout << static_cast<char>('a' + i) << ":" << counts6[i] << endl;
        }
    }

    cout<<"PROBLEM 7"<<endl;
    int n7;
    cout << "Enter the number of grades: ";
    cin >> n7;

    vector<int> grades(n7);
    for (int i = 0; i < n7; ++i) {
        cin >> grades[i];
    }

    analyzeGrades(grades);

//
    cout<<"PROBLEM 8"<<endl;
    int n8;
    cout << "Enter the number of elements: ";
    cin >> n8;

    vector<int> numbers(n8);
    cout << "Enter " << n8 << " numbers:\n";
    for (int i = 0; i < n8; ++i) {
        cin >> numbers[i];
    }

    filterAndSort(numbers);

    cout << "Output: ";
    for (int num8 : numbers) {
        cout << num8 << " ";
    }
    cout << endl;
    
    cout<<"PROBLEM 9"<<endl;
    string s9;
    cout << "Enter the string: ";
    cin >> s9;
    int authenticCount = countAuthenticCharacters(s9);
    cout << "Number of authentic characters: " << authenticCount << endl;


    cout<<"PROBLEM 10"<<endl;

    cout<<"PROBLEM 11"<<endl;
//
    cout<<"PROBLEM 12"<<endl;
    int array12[10];
    int *ptrA = array12; 

    for (int i = 0; i < 10; ++i) {
        array12[i] = myRand() % 100; 
    }

    for (int i = 0; i < 10; ++i) {
        cout << "Address of element " << i << ": " << (ptrA + i) << endl;
        cout << "Value of element " << i << ": " << *(ptrA + i) << endl;
    }


    cout<<"PROBLEM 13"<<endl;
    int n13;
    cout << "Enter the size of the array: ";
    cin >> n13;

    if (n13 <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    int* arr = new int[n13];

    cout << "Enter " << n13 << " integers: ";
    for (int i = 0; i < n13; ++i) {
        cin >> arr[i];
    }

    int largest = findLargestElement(arr, n13);
    cout << "Largest element in the array: " << largest << endl;

    delete[] arr;
    
    cout<<"PROBLEM 14"<<endl;

    cout<<"PROBLEM 15"<<endl;

    cout<<"PROBLEM 16"<<endl;
    int n16;
    cout << "Enter a number: ";
    cin >> n16;

    if (n16 < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    int fact;
    factorial(n16, &fact);

    cout << "Factorial of " << n16 << ": " << fact << endl;

//    cout<<"PROBLEM 17"<<endl;
//
//    cout<<"PROBLEM 18"<<endl;
//
//    cout<<"PROBLEM 19"<<endl;
//
//    cout<<"PROBLEM 20"<<endl;
//
//    cout<<"PROBLEM 21"<<endl;
//
//    cout<<"PROBLEM 22"<<endl;


    return 0;
}

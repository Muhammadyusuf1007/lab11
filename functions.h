#include <iostream>

using namespace std;
//
// Created by Muhmmadyusuf Sayidaliyev on 10/05/24.
//
//cout<<"PROBLEM 1"<<endl;
const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0.0;
    for (int i = 0; i < rowSize; ++i) {
        sum += m[i][columnIndex];
    }
    return sum;
}

//cout<<"PROBLEM 2"<<endl;

double sumMajorDiagonal(const double m[][SIZE]) {
    double sum = 0.0;
    for (int i = 0; i < SIZE; ++i) {
        sum += m[i][i];
    }
    return sum;
}
//cout<<"PROBLEM 3"<<endl;
//
//cout<<"PROBLEM 4"<<endl;
void search(const string& s, char key) {
    bool found = false;
    for (char c : s) {
        if (c == key) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "Found" << endl;
    } else {
        cout << "Not found" << endl;
    }
}
//cout<<"PROBLEM 5"<<endl;
int count(const string& s, char a) {
    int occurrences = 0;
    for (char c : s) {
        if (c == a) {
            occurrences++;
        }
    }
    return occurrences;
}

//cout<<"PROBLEM 6"<<endl;
void count6(const string& s, int counts[]) {
    for (char c : s) {
        if (isalpha(c)) {
            c = tolower(c);
            counts[c - 'a']++;
        }
    }
}

//cout<<"PROBLEM 7"<<endl;
void analyzeGrades(const vector<int>& grades) {
    int n = grades.size();

    int max_grade = grades[0];
    int min_grade = grades[0];
    double sum = grades[0];

    for (int i = 1; i < n; ++i) {
        if (grades[i] > max_grade) {
            max_grade = grades[i];
        }
        if (grades[i] < min_grade) {
            min_grade = grades[i];
        }
        sum += grades[i];
    }

    double average_grade = sum / n;

    cout << "Minimum=" << min_grade << endl;
    cout << "Maximum=" << max_grade << endl;
    cout << "Average=" << average_grade << endl;
}

//cout<<"PROBLEM 8"<<endl;
void filterAndSort(vector<int>& numbers) {
    vector<int> filteredNumbers;
    for (int num : numbers) {
        if (num > 0)
            filteredNumbers.push_back(num);
    }

    for (int i = 0; i < filteredNumbers.size() - 1; ++i) {
        for (int j = 0; j < filteredNumbers.size() - i - 1; ++j) {
            if (filteredNumbers[j] > filteredNumbers[j + 1]) {
                int temp = filteredNumbers[j];
                filteredNumbers[j] = filteredNumbers[j + 1];
                filteredNumbers[j + 1] = temp;
            }
        }
    }

    numbers = filteredNumbers;
}
//cout<<"PROBLEM 9"<<endl;
int countAuthenticCharacters(const std::string& s) {
    bool seen[26] = {false}; 
    int count = 0;
    for (char c : s) {
        if (c >= 'A' && c <= 'Z' && !seen[c - 'A']) {
            seen[c - 'A'] = true;
            count++;
        }
    }
    return count;
}
//cout<<"PROBLEM 10"<<endl;
//
//cout<<"PROBLEM 11"<<endl;
//
//cout<<"PROBLEM 12"<<endl;
int myRand() {
    static unsigned int seed = time(nullptr);
    seed = (seed * 1103515245 + 12345) % 32768;
    return seed;
}
//cout<<"PROBLEM 13"<<endl;
int findLargestElement(const int* arr, int size) {
    if (arr == nullptr || size <= 0) {
        cerr << "Invalid input. Array cannot be null or empty." << endl;
        return 0;
    }

    const int* ptr = arr; 
    int maxElement = *ptr; 

    for (int i = 1; i < size; ++i) {
        if (*(ptr + i) > maxElement) { 
            maxElement = *(ptr + i);
        }
    }

    return maxElement;
}
//cout<<"PROBLEM 14"<<endl;
//
//cout<<"PROBLEM 15"<<endl;
//
//cout<<"PROBLEM 16"<<endl;
void factorial(int n, int *fact) {
    *fact = 1;
    for (int i = 1; i <= n; ++i) {
        *fact *= i; 
    }
}
//cout<<"PROBLEM 17"<<endl;
//
//cout<<"PROBLEM 18"<<endl;
//
//cout<<"PROBLEM 19"<<endl;
//
//cout<<"PROBLEM 20"<<endl;
//
//cout<<"PROBLEM 21"<<endl;
//
//cout<<"PROBLEM 22"<<endl;

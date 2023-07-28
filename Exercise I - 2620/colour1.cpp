//Student = Thiago Ladeira - CPSC 2620 - Exercise I
// tc.ladeira@uleth.ca

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


//Functions headlines. Push the descriptions to the end of the program.

void sort (string A[], int n);
bool linear_search (const string A[], int n, string colour, int &count);
bool binary_search (const string A[],int n, string colour, int &count);
string *resize (string *A, int n);

//I was not able to implement the last function, on both files.
// void search_and_report (const string A[], int n, string colour, string label, 
//             bool (*search) (const string A[], int n, string colour, int &count)){
// }  


//I could implement the search functions in this file. Several problems with the arrays.



int main (){

    const int INIT_SIZE = 1;
    string *arr = new string[INIT_SIZE];

    int i = 0;
    cout << "Enter a colour ($ when it is done): " << endl;
    getline(cin, arr[0]);
    while (arr[i] != "$"){
        arr = resize(arr, i + 1);
        cout << "Enter a colour ($ when it is done): " << endl;
        getline(cin, arr[i + 1]);
        ++i;
    }

    int sizeofArr = sizeof(arr) / sizeof(arr[0]);
    sort (arr, sizeofArr);


    return 0;
}

//This are the functions definitions:

void sort (string A[], int n){

    string colourtemp;

    for (int i = 0; i < n - 1; ++i){
        for (int j = 0; j < n - i - 1; ++j){
            if (A[j] > A[j +1]){
                colourtemp = A[j];
                A[j] = A[j +1];
                A[j+1] = colourtemp;
            }
        }
    }
}

bool linear_search (const string A[], int n, string colour, int &count){
    for (int i = 0; i < n; ++i){
        if (A[i] == colour){
        return true;
        }
        else {
        count = count + 1;
        
        }
    }
}

bool binary_search (const string A[],int n, string colour, int &count){
    int left = 0;
    int right = n - 1;

    while (left <= right){
        int mid = left + (right - left) / 2;
        count = count + 1;
        if (A[mid] == colour){
            return true;
            left = right;
        }
        else if (A[mid] < colour){
        left = mid + 1;
        }
        else {
            left = mid - 1;
        }
    }
}

string *resize (string *A, int n){
    string *newArray = new string[n + 1];
    for (int i = 0; i < n; ++i){
        newArray[i] = A[i]; 
    }
    delete[] A;    
    return newArray;
}
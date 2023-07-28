#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


//Main functions of the code; Remember to make them headlines and send the function definition after int-main()

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


// void search_and_report (const string A[], int n, string colour, string label, 
//             bool (*search) (const string A[], int n, string colour, int &count)){
    

//     }    






int main (){

    const int SIZE_STRING = 1;
    string *arr = new string (SIZE_STRING);

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


    cout << "This are the colours in alphabetic order" << endl;
    for (int i = 0; i < sizeofArr; ++i){
        cout << ". " << arr[i] << endl;
    }


    return 0;
}
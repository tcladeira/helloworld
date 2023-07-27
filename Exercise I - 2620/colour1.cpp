#include <iostream>
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
        else (){
        *count = *count + 1;
        
        }
    }
}


bool binary_search (const string A[],int n, string colour, int &count){
    int left = 0;
    int right = n - 1;

    while (left <= right){
        int mid = left + (right - left) / 2;
        *count = *count + 1;
        if (A[mid] == colour){
            return true;
        }
        else if (A[mid] < colour){
        left = mid + 1;
        }
        else {
            left = mid - 1;
        }
    }
}


/*string *resize (string *A, int n){
    
    
    return;
}
void search_and_report (const string A[], int n, string colour, string label, 
            bool (*search) (const string A[], int n, string colour, int &count)){
    

    }    

*/




int main (){

    int n = 0;
    cout << "Enter a colour ($ when it is done): " << endl;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; ++i){
        cin >> arr[i];

    }
    sort (arr, n);
    cout << "This are the colours in alphabetic order" << endl;
    for (int i = 0; i < n; ++i){
        cout << ". " << arr[i] << endl;
    }


    return 0;
}
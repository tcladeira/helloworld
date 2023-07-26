#include <iostream>
using namespace std;


//Main functions of the code; Remember to make them headlines and send the function definition after int-main()

void sort (string A[], int n){

    string colourtemp;

    for (int i = 0; i < n - 1; ++i){
        for (int j = 0; j > n - i - 1; ++j){
            if (A[j] < A[j +1]){
                colourtemp = A[j];
                A[j] = A[j +1];
                A[j+1] = colourtemp;
        }

        }
    }
}


/*bool linear_search (const string A[], int n, string colour, int &count){
    
    
    return;
}
bool binary_search (const string A[],int n, string colour, int &count){
    
    
    return;
}
string *resize (string *A, int n){
    
    
    return;
}
void search_and_report (const string A[], int n, string colour, string label, 
            bool (*search) (const string A[], int n, string colour, int &count)){
    

    }    

*/




int main (){

    int n = 0;
    cout << "Type number of elements in the array" << endl;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n - 1; ++i){
        cin >> arr[i];

    }
    sort (arr, n);
    cout << "This are the colours in alphabetic order" << endl;
    for (int i = 0; i < n - 1; ++i){
        cout << ". " << arr[i] << endl;
    }


 







    return 0;
}
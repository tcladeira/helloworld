#include <iostream>
#include <string>
#include <vector>
using namespace std;

//functions here:


void sort(vector<string>& vec);
int linear_search (vector<string> vec, string colour);
// bool binary_search(const string A[], int n, string colour, int &count);
// string *resize(string *A, int n);
// void search_and_report(const string A[], int n, string colour, string label, bool (*search)(const string A[], int n, string colour, int &count));




int main () {
    string colour;
    vector<string> vec(1);
    int i = 0;
    string colourtoSearch;
    string quit;

    
    while (vec.at(i) != "$"){
        cout << "Enter a colour name ($ when done): ";
        getline(cin, colour);
        vec.push_back(colour);
        ++i;
    }
    vec.pop_back();
    sort (vec);
    for (int i = 0; i < vec.size(); ++i){
        cout << vec.at(i) << " " << endl;
    }
    
    while (colourtoSearch != "$"){
    cout << "Enter a colour to search for (type $ to quit): " << endl;
    cin >> colourtoSearch;
    cout << "Linear Search: found, comparison " << linear_search(vec, colourtoSearch) << endl;
    }




    return 0;

}

void sort(vector<string>& vec){
    string colourtemp;
    for (int i = 0; i < vec.size() - 1; ++i){
        for (int j = 0; j < vec.size() - i - 1; ++j){
            if (vec.at(j) > vec.at(j + 1)){
                colourtemp = vec.at(j);
                vec.at(j) = vec.at(j +1);
                vec.at(j+1) = colourtemp;
            }
        }
    }
}


int linear_search (vector<string> vec, string colour){
    int counter = 0;
    for (int i = 0; i < vec.size() - 1; ++i){
        counter = counter + 1;
        if (vec.at(i) == colour){
            return counter;
        }
     return counter;
    }
}

// bool binary_search(const string A[], int n, string colour, int &count){

// }

// string *resize(string *A, int n){

// }

// void search_and_report(const string A[], int n, string colour, string label, bool (*search)(const string A[], int n, string colour, int &count)){

// }


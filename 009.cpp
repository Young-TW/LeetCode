#include <iostream>
using namespace std;
int main(){
    int x = 1213123;
    // int length
    int y = 1;
    int xLength = 0;
    while(x > y){
        y = 10 * y;
        xLength++;
    }
    cout << xLength;
    string strX = to_string(x);
    bool wordSingle = strX.length()%2;
    /*
    bool wordSingle;

    if(strX.length()%2 == 1){
        wordSingle = true;
    }else{
        wordSingle = false;
    }
    */
    
    if(wordSingle == true){
        int current = 0;
        while(current < (xLength/2)){
            if(){
                break;
            }
            // 0 1 2 3 4
            // 1 0 2 0 1
            current++;
        }
    }else{
        int current = 0;
        while(current < (xLength/2)){
            if(){
                break;
            }
            // 0 1 2 3
            // 1 0 0 1
            current++;
        }
    }
    
   // cout << wordSingle;
}
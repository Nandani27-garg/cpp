#include<iostream>
using namespace std;
int main() {
    for(int i = 0; i <= 15; i+=2){
        cout << i << " ";
        
        if(i&1){
            continue; /* here 0 & 1 false so contineu dosen't execute after that like 3 & 1 true so contineu execute so i++ skipped*/

        }
        i++;
        
        
            
        
        

    }
}
    
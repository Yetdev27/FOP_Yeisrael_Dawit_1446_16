
#include <iostream>
using namespace std;
int main()
{
    char alpha= 'A';
    for (int i=1; i<=6; i++){
        for (int j=1; j<=6; j++)
        if (j==i){
        cout << alpha;
        alpha++;
            
        }else{
            cout<< "  ";
        }
        cout << endl;
    }
    
    return 0;
}
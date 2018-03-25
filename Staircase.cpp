#include <bits/stdc++.h>
#include <string>

using namespace std;

/*
 * Complete the staircase function below.
 */
void staircase(int n) {
    /*
     * Write your code here.
     */
    string hash = "#";
  
    int j = 1;
    for(int t = 0;t<n;t++){
        for(int i=0;i<n;i++){
        
            if(i==(n-j)){
                cout << hash << endl;
                hash = hash + "#";
                break;
            }
            else{
            cout << " ";}
        }
        j++;
        }
    
    

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}

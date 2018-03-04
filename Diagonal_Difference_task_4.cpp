#include <bits/stdc++.h>

using namespace std;
int diagonalDifference(vector < vector<int> > a) {
    // Complete this function
    int y = 0;
    int z = 0;
    int x = 0;
    int j = 0;
    int n = 0;
    
   for  (int i = 0;i<a.size();i++){
       x = a[i][i];
       y += x;
       
      
   }
    
    
    for (int o = 0;o<a.size();o++){
        j += 1;
            z = a[o][a.size()-j];
            n += z;
     }
    
    int temp;
    int res = abs(n-y);
    

    
    return res;


}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(a);
    cout << result << endl;
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    vector<int> solve_list_a = {};
    vector<int> solve_list_b = {};
    vector<int> result = {};


    solve_list_a.push_back(a0);
    solve_list_a.push_back(a1);
    solve_list_a.push_back(a2);
    
    solve_list_b.push_back(b0);
    solve_list_b.push_back(b1);
    solve_list_b.push_back(b2);
    int i = 0;
    int a = 0;
    int b = 0;
    
    for(int i = 0; i< solve_list_a.size()+1;i++){
    if (solve_list_b[i] < solve_list_a[i]){
        a += 1;  
    } 
    else if (solve_list_a[i] < solve_list_b[i]){
        b += 1;
        }
    }
        result.push_back(a);
        result.push_back(b);
    
    
    return result;



}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
  
    cout << result[0] << " "<<  result[1] << endl;
    

    return 0;
}


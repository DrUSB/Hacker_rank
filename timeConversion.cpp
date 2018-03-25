#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
  
    // Get hours
    cout <<"Before: "<< (int)s[1] << endl;
    int h1 = (int)s[1] - '0';
    cout <<"After: "<< h1 << endl;
    int h2 = (int)s[0] - '0';
    int hh = (h2 * 10 + h1 % 10);
    string result;
    // If time is in "AM"
    if (s[8] == 'A')
    {
        if (hh == 12)
        {
             result = result +"00";
            for (int i=2; i <= 7; i++)
                result = result + s[i];
        }
        else
        {
            for (int i=0; i <= 7; i++)
                result = result + s[i];
        }
    }
 
    // If time is in "PM"
    else
    {
        if (hh == 12)
        {
            result = result +"12";
            for (int i=2; i <= 7; i++)
                result = result +s[i];
        }
        else
        {
            hh = hh + 12;
            string str = to_string(hh);
            result = result + str;
            for (int i=2; i <= 7; i++)
                result = result + s[i];
        }
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}


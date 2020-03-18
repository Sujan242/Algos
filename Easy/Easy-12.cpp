#include <bits/stdc++.h>

using namespace std;

// Complete the caesarCipher function below.
string caesarCipher(string s, int k) {

    string n;
    for(int i=0;i<s.length();i++)
    {
         if(s[i]<=122 && s[i]>=97)
         {
             n=n+(char)(((s[i]-97+k)%26)+97);
         }
         else if(s[i]<=90 && s[i]>=65)
         {
             n=n+(char)(((s[i]-65+k)%26)+65);
         }
         else
         {
             n=n+s[i];
         }
    }
    return n;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = caesarCipher(s, k);

    fout << result << "\n";

    fout.close();

    return 0;
}

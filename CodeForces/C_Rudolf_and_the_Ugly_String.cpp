#include <iostream>
#include <vector>
using namespace std;

vector<int> lps1(string pat) {
    int m = pat.length();
    vector<int> l(m, 0);
    int length = 0, i = 1;
    while (i < m) {
        if (pat[i] == pat[length]) {
            l[i] = length + 1;
            length++;
            i++;
        } else {
            if (length > 0) {
                length = l[length - 1];
            } else {
                i++;
            }
        }
    }
    return l;
}

vector<int> search(string pat, string txt) {
    vector<int> lps = lps1(pat);
    vector<int> ans;
    int i = 0, j = 0;
    while (i < txt.length()) {
        if (txt[i] == pat[j]) {
            i++;
            j++;
        } else {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
        if (j == pat.length()) {
            ans.push_back(i - j + 1);
            j = lps[j - 1];
        }
    }
    return ans;
}

int main() {
    int t=0;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> maps = search("map", s);
    vector<int> pies = search("pie", s);
    vector<int> common = search("mapie", s);
    cout << maps.size() + pies.size() - common.size() << endl;
    }
   
    return 0;
}

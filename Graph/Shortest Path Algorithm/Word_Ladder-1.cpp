#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int wordLadderLength(string startWord, string targetWord, vector<string> &wordList)
{
    // Code here
    queue<pair<string, int>> q;
    q.push({startWord, 1});
    unordered_set<string> st(wordList.begin(), wordList.end());
    st.erase(startWord);

    while (!q.empty())
    {
        string word = q.front().first;
        int steps = q.front().second;
        q.pop();

        if (word == targetWord)
            return steps;

        for (int i = 0; i < word.size(); i++)
        {
            char original = word[i];
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                word[i] = ch;

                // checks if exists in the set
                if (st.find(word) != st.end())
                {
                    st.erase(word);
                    q.push({word, steps + 1});
                }
            }
            word[i] = original;
        }
    }

    return 0;
}
int main()
{
    string startWord = "hit";
    string endWord = "cog";

    vector<string> wordList = {"hot", "dot", "dog", "lot", "log", "cog"};
    int ans = wordLadderLength(startWord, endWord, wordList);

    if(ans != 0){
        cout << "Shortest Distance = " << ans;
    }
    else{
        cout << "No Path exists" << endl;
    }
    return 0;
}
class Solution
{
    public:
#define ll int
    bool isAnagram(string s, string t)
    {
        ll c = 0;
        if (s.size() != t.size())
        {
            return false;
        }
        else
        {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            for (ll i = 0; i < s.size(); ++i)
            {
                if (s[i] != t[i])
                {
                    return false;
                }
            }
            return true;
        }
    }
};
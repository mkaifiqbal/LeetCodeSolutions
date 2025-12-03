class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char ch : s) {
            if (ch == '(' || ch == '[' || ch == '{')
                st.push(ch);
            else {
                if (!st.empty()) {
                    if ((ch == ')' && st.top() == '(') ||
                        (ch == '}' && st.top() == '{') ||
                        (ch == ']' && st.top() == '[')) {
                        st.pop();
                    } else
                        return false;
                } else
                    return false;
            }
        }
        if (st.empty())
            return true;
        return false;
    }
};
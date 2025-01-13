class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack;
        if(s.size()%2!=0)return false;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } else {
                if (stack.empty())
                    return false;

                if ((c == ')' && stack.top() == '(') ||
                    (c == '}' && stack.top() == '{') ||
                    (c == ']' && stack.top() == '[')) {
                    stack.pop();
                } else {
                    return false;
                }
            }
        }
        return stack.empty();
    }
};

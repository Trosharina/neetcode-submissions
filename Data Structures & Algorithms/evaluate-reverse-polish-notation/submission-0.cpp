class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for (string s: tokens){
            if (s == "+" || s == "-" || s == "*" || s == "/"){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                int res;
                switch (s[0]){
                    case '+': {
                        res = a + b;
                        break;
                    }
                    case '-':{
                        res = a - b;
                        break;
                    }
                    case '*': {
                        res = a * b;
                        break;
                    }
                    case '/': {
                        res = a / b;
                        break;
                    }
                }
                st.push(res);
            }
            else {
                st.push(stoi(s));
            }
        }
        return st.top();
    }
};

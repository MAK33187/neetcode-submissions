class Solution {
public:
    bool isValid(string s) {
    int top = -1;
    char stack[100];
    bool balanced = true;
    for (char i : s) {
        if (i == '(' || i == '{' || i == '[') {
            top = top + 1;
            stack[top] = i;
        }
        else if (i == '}' || i == ')' || i == ']') {
            if (top == -1) {
                balanced = false;
                break;
            }
            char val = stack[top];
            top = top - 1;

            if ((val == '(' && i != ')') ||
                (val == '{' && i != '}') ||
                (val == '[' && i != ']')) {
                balanced = false;
                break;
            }
        }
    }

    if (balanced && top == -1) {
        return true;
    }
    else {
        return false;
    }


        
    }
};

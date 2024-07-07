 string decodeString(string s) {

    stack<int> counts;
    stack<string> results;
    string result;
    int index = 0;

    while (index < s.length()) {
        if (isdigit(s[index])) {
            int count = 0;
            while (isdigit(s[index])) {
                count = count * 10 + (s[index] - '0');
                index++;
            }
            counts.push(count);
        } else if (s[index] == '[') {
            results.push(result);
            result = "";
            index++;
        } else if (s[index] == ']') {
            string temp = result;
            result = results.top();
            results.pop();
            int count = counts.top();
            counts.pop();
            for (int i = 0; i < count; i++) {
                result += temp;
            }
            index++;
        } else {
            result += s[index];
            index++;
        }
    }

    return result;
    }
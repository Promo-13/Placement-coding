vector<int> count(26, 0); // Frequency array to count occurrences of characters
    vector<bool> used(26, false); // To keep track of characters in the result
    stack<char> stk; // Stack to store characters in the result

    // Count occurrences of each character
    for (char c : s) {
        count[c - 'a']++;
    }

    for (char c : s) {
        count[c - 'a']--; // Decrement count for the current character

        if (used[c - 'a']) // If character is already used, skip it
            continue;

        // Pop characters from stack if they are greater than the current character
        while (!stk.empty() && stk.top() > c && count[stk.top() - 'a'] > 0) {
            used[stk.top() - 'a'] = false;
            stk.pop();
        }

        stk.push(c); // Push current character into stack
        used[c - 'a'] = true; // Mark current character as used
    }

    // Construct the result string from the stack
    string result = "";
    while (!stk.empty()) {
        result = stk.top() + result;
        stk.pop();
    }

    return result;

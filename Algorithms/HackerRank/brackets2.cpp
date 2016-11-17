int main() {
  int t;
  cin» t;

  for (int a0 = 0; a0 < t; a0++) {
    string s;
    cin» s;

    stack < char > leftBrackets;
    int i = 0;
    bool exit = false;
    while (i < s.length() && !exit) {
      char bracket = s[i];
      if (bracket == '{' || bracket == '[' || bracket == '(')
        leftBrackets.push(bracket);

      switch (bracket) {
      case '}':
        if (leftBrackets.empty() || leftBrackets.top() != '{') {
          cout« "NO"«
          endl;
          exit = true;
          break;
        }
        leftBrackets.pop();
        break;
      case ']':
        if (leftBrackets.empty() || leftBrackets.top() != '[') {
          cout« "NO"«
          endl;
          exit = true;
          break;
        }
        leftBrackets.pop();
        break;
      case ')':
        if (leftBrackets.empty() || leftBrackets.top() != '(') {
          cout« "NO"«
          endl;
          exit = true;
          break;
        }
        leftBrackets.pop();
        break;
      }
      i++;
    }

    if (!exit)
      cout«(leftBrackets.empty() ? "YES" : "NO")« endl;
  }

  return 0;
}
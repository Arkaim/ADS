#include <iostream>
#include <string>
using namespace std;
#define SIZE 100
struct deque
{
int dq[SIZE];
static int dsize = 0;
static int head = 0; 
static int end = 0;
void push_front(int n)
{
  if (dsize == SIZE) {
    cout << "Full\n";
  }
  else if (dsize == 0) {
    dq[head] = n; dsize++;
  }
  else {
    if (head == 0) {
      head = SIZE - 1;
      dq[head] = n; dsize++;
    }
    else {
       head--;
        dq[head] = n;
        dsize++;
    }
  }
}
void push_back(int n)
{
    if (dsize == SIZE) {
    cout << "Full\n";
  }
  else if (dsize == 0) {
    dq[end] = n;
    dsize++;
  }
  else {
    if (end == SIZE-1) {
      end = 0;
      dq[end] = n;
      dsize++;
    }
    else {
      end++;
      dq[end] = n;
      dsize++;
    }
  }
}
int pop_front()
{
  int a;
  if (dsize != 0 && (head == end)) {
    a = dq[head];
    dsize--;
    return a;
  }
  else if (dsize == 0) {
    return -1;
  }
  else{
   a = dq[head];
    if (head == SIZE - 1) {
      head = 0;
      dsize--;
    }
  else {
    head++;
    dsize--;
  }
  return a;
  }
}
int pop_back()
{
  int a;
  if (dsize != 0 && (head == end)) {
    a = dq[end];
    dsize--;
    return a;
  }
  else if (dsize == 0) {
    return -1;
  }
  else{
    a = dq[end];
  if (end == 0) {
    end = SIZE - 1;
    dsize--;
  }
  else {
    end--;
    dsize--;
  }
  return a;
  }
}
int front() {
if (dsize == 0)
  return -1;
else
  return dq[head];
}
int back() {
if (dsize == 0)
return -1;
else
return dq[end];
}
int size() {
return dsize;
}
void clear(){
dsize = 0;
head = end = 0;
}
};

int main()
{
deque d;
string s;
int n;
while (cin >> s)
{
if (s == "push_front")
{
cin >> n;
d.push_front(n);
cout << "ok\n";
}
else if (s == "push_back")
{
cin >> n;
d.push_back(n);
cout << "ok\n";
}
else if (s == "pop_front")
{
cout << d.pop_front() << endl;
}
else if (s == "pop_back")
{
cout << d.pop_back() << endl;
}
else if (s == "front")
{
cout << d.front() << endl;
}
else if (s == "back")
{
cout << d.back() << endl;
}
else if (s == "size")
{
cout << d.size() << endl;
}
else if (s == "clear")
{
d.clear();
cout << "ok\n";
}

else if (s == "exit") {
cout << "bye\n";
return 0;
}
}
return 0;
}

#include <iostream>
#include <string>
#include <stack>
using namespace std;

Public String str="";
public Stack<String> stack=new Stack();

public void push(int type,String s){
    stack.push(str);
    str=str+s;
}

public void pop(int type,int index){
    if(!str.isEmpty()){
    stack.push(str);            
    str=str.substring(0,str.length()-index);
    }
}

public void print(int index){
    if(!str.isEmpty())
    System.out.println(str.charAt(index-1));
}

public void undo(){
    if(!stack.isEmpty()){
        str=stack.pop();
    }

}

public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    int Q=sc.nextInt();
    Solution sol=new Solution();


    while(Q>0){
        int type=sc.nextInt();
        //System.out.println(type);
        switch(type){
            case 1:
            sol.push(type,sc.next());
            break;

            case 2:
            sol.pop(type,sc.nextInt());
            break;

            case 3:
            sol.print(sc.nextInt());
            break;

            case 4:
            sol.undo();
            break;
           }

        Q--;
    }
}

void insertatbottom(stack<int> &stack1, int x){
    if(stack1.size() == 0){
        stack1.push(x);
    }
    else{
        int y = stack1.top();
        stack1.pop();
        insertatbottom(stack1, x);

        stack1.push(y);//once x is inserted at bottom i.e when size()==0, insert y
        //it returns and inserts outer y, so on
    }
}

void reverseStack(stack<int> &stack1) {
    if(stack1.size() > 0){
        int x = stack1.top();
        stack1.pop(); //pops untill size()==0
        reverseStack(stack1);

        insertatbottom(stack1, x);
    }
}
double calculate(double num1, char operat, double num2){
    double result;
    switch(operat){ 
        case '+':
            result = num1 + num2;
            break;
        case '-': 
            result = num1 - num2; 
            break; 
        case '*': 
            result = num1 * num2; 
            break; 
        case '/':
            if (num2 != 0) { 
                result = num1 / num2; 
            } 
            else { 
                cout << "Division by zero" << endl; 
                return 0; 
            } 
            break; 
        default: 
            cout << "Invalid operator" << endl; 
            return 0; 
    } return result;
}
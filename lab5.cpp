#include <iostream>
#include <cmath>

using namespace std;


int main() {
    //////////// main area ////////////
    double a, b, c, discriminant, root1, root2;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    // main 1: change 12
    discriminant = b * b - 4 * a * c;
	
    // main 2: change 15
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        // main 3: change 19
        cout << "Roots are real and different." << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
        // main 4: change 23
    } else if (discriminant == 5) //conflict situation
            // main 5
        root1 = -b / (2 * a);
		
        //////////// second area ////////////
        cout << "Roots are real and same." << endl;
        // second 1
        cout << "Root 1 = Root 2 = " << root1 << endl;
        // second 2
    } else {
        cout << "Roots are complex and different." << endl;
        // second 3
        cout << "Root 1 = (-" << b << " + i" << sqrt(-discriminant) << ") / " << 2*a << endl;
        //second 4
        cout << "Root 2 = (-" << b << " - i" << sqrt(-discriminant) << ") / " << 2*a << endl;
        // second 5
    }


char op;
    //////////// third area ////////////
    double num1, num2;
    cout << "Enter operator either + or - or * or /: ";
    // third 1
    cin >> op;
    cout << "Enter two operands: ";
    cin >> num1 >> num2;
    // third 2
    switch (op) {
        case '+':
            cout << num1 + num2;
            break;
            // third 3
        case '-':
            cout << num1 - num2;
            break;
            //// third 4
        case '*':
            cout << num1 * num2;
            break;

        case '/':
            cout << num1 / num2;
            break;
            // third 5
        default:
            cout << "Error! operator is not correct";
            break;
    }

    return 0;
}
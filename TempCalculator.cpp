#include <iostream> 

int main() {
// we use char here to declare the users choice which is used at the end of the program to either re-loop via do-while or close the loop
// char is a very memory efficient choice as we only need to store one character Y or y
    char choice;
   
    // we start a do-while loop here, this allows users to continously cycle through the program and execute multiple conversions without having to reopen the program or restart it
    do {
        int option;
        double celsius, fahrenheit, kelvin; // here values are declared, primarily the 3 different temperature metrics - we use double as we are performing precise calculations to decimal places
        std::cout << "Please select which conversion to use: \n";
        std::cout << "1. Celsius to Fahrenheit \n";
        std::cout << "2. Fahrenheit to Celsius \n";
        std::cout << "3. Celsius to Kelvin \n";
        std::cout << "4. Kelvin to Celsius \n";
        std::cout << "5. Kelvin to Fahrenheit \n";
        std::cout << "6. Fahrenheit to Kelvin \n";
        std::cin >> option;
// basic std cout and cin to prompt and return user inputs

        switch (option) {
// here switch case is used to identify user response, if user responds with 1-6 they get the relevant calculation, if they respond with an invalid response, it returns invalid via default
        case 1:
            std::cout << "Please enter temperature Celsius:\n";
            std::cin >> celsius;
            fahrenheit = (celsius * 9.0) / 5.0 + 32;
            std::cout << "The temperature in Fahrenheit:\n" << fahrenheit;
            break;

        case 2:
            std::cout << "Please enter temperature Fahrenheit:\n";
            std::cin >> fahrenheit;
            celsius = (fahrenheit - 32) * 5.0 / 9.0;
            std::cout << "The temperature in Celsius:\n" << celsius;
            break;
    
        case 3:
            std::cout << "Please enter temperature Celsius:\n";
            std::cin >> celsius;
            kelvin = celsius + 273.15;
            std::cout << "The temperature in Kelvin:\n" << kelvin;
            break;

        case 4:
            std::cout << "Please enter temperature Kelvin:\n";
            std::cin >> kelvin;
            celsius = kelvin - 273.15;
            std::cout << "The temperature in Celsius:\n" << celsius;
            break;

        case 5:
            std::cout << "Please enter temperature Kelvin:\n";
            std::cin >> kelvin;
            fahrenheit = 1.8 * (kelvin - 273.15) + 32;
            std::cout << "The temperature in Fahrenheit:\n" << fahrenheit;
            break;

        case 6:
            std::cout << "Please enter temperature Fahrenheit:\n";
            std::cin >> fahrenheit;
            kelvin = (fahrenheit - 32) / 1.8 + 273.15;
            std::cout << "The temperature in Kelvin:\n" << kelvin;
            break;
// each case has relevant formula for each metric conversion and resultant converted metric is printed via cout << text << value and then the line breaks
        default:
            std::cout << "Invalid option!";
// default for invalid or any other inputs from user
        }
// here we use a linebreak, to separate the calculation line from the new prompt we give to users
        std::cout << std::endl;
        std::cout << "Do you want to perform another conversion? (Y/N): ";
        std::cin >> choice;
// we prompt a user to respond with Y or N, but we only respond to either y or Y, this is stored as choice
    } while (choice == 'Y' || choice == 'y');
// this while command includes both cases for character Y, if Y is chosen we return to the start of the Do-While loop and the user can do another conversion
    std::cout << "Program ended. Thank you for using this program\n";
// otherwise, any other value will return this text and close the program by closing the loop, but we will allow the user to see their inputs and close the console with input via system pause

    system("pause");

    return 0;

}
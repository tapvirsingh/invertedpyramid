#include<iostream>
#include<conio.h>

using namespace std;

int main(void){
 
    // *******\n
    // 1*****\n
    // 12***\n
    // 123*

    int input ;

    char ch;

    do{

        cout << "\nEnter count : ";
        cin >> input;

        for(int rowStars = input, rowSpaces = 0; rowStars > 0 ; rowStars -= 2, rowSpaces ++){
            for(int colSpaces = 0; colSpaces < rowSpaces ; colSpaces++){
                // cout << colSpaces + 1;
                cout << " ";
            }
            
            for(int colStars = rowStars; colStars > 0 ; colStars--){
                cout << "*";
            }

            // printf("\n");
            cout << endl;

        }

        cout << "\nDo you want to continue (y) ? ";
        ch = getche(); // getch();

    }while(ch == 'y' || ch == 'Y');


    return 0;
}
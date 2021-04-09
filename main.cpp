#include<iostream>
#include<conio.h>

using namespace std;

// FB twitter
// BlazehatTech

int main(void){

    int rowStars, rowSpaces;

    char ch;

    do{

        cout << "\nEnter stars in the row : ";
        cin >> rowStars;

        for(rowSpaces = 0; rowStars > 0; rowStars -= 2, rowSpaces++){
            for(int stars = rowStars, spaces = 0; stars > 0;){

                if(spaces < rowSpaces){
                    cout << " ";
                    spaces++;
                }else{
                    cout << "*";
                    stars--;
                }
            }

            cout << endl;

        }

        cout << "\nDo you want to continue (y) ? ";
        ch = getche(); // getch

    }while(ch== 'y' || ch == 'Y');

    return 0;
}
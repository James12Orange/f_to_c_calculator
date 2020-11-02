//Author:	        James Orange, jmo5660, Sunday 9-13-2020
//Class:      	    CMPSC 121
//Activity          04
//File:             P:\cmpsc121\homework\activity4.cpp

/*
/********************************************************************\
* Academic Integrity Affidavit:                                      *                                                                                                                                                     *                                                                    *
* I certify that, this program code is my work.  Others may have  *
* assisted me with planning and concepts, but the code was written,  *
* solely, by me.                                                     *                                                                                                                                                                                                                                                                                                                       *                                                                    *
* I understand that submitting code which is totally or partially    *
* the product of other individuals is a violation of the Academic    *
* Integrity Policy and accepted ethical precepts. Falsified          *
* execution results are also results of improper activities. Such    *
* violations may result in zero credit for the assignment, reduced   *
* credit for the assignment, or course failure.                      *
**********************************************************************
// Sources of logic assistance:  121 Study Group:  Abdulla S. Iznurov
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double ftemp1, ftemp2, ftemp3, ftemp4, ftemp5, temp1, temp2, temp3, temp4, temp5, temp1cels, temp2cels, temp3cels, temp4cels, temp5cels;

    cout << "Enter five temperature values in Fahrenheit:" << endl;
    cin >> ftemp1 >> ftemp2 >> ftemp3 >> ftemp4 >> ftemp5;

    temp1 = ftemp1 * 1.00;
    temp2 = ftemp2 * 1.00;
    temp3 = ftemp3 * 1.00;
    temp4 = ftemp4 * 1.00;
    temp5 = ftemp5 * 1.00;

    temp1cels = (temp1 - 32.00) * 5 / 9;
    temp2cels = (temp2 - 32.00) * 5 / 9;
    temp3cels = (temp3 - 32.00) * 5 / 9;
    temp4cels = (temp4 - 32.00) * 5 / 9;
    temp5cels = (temp5 - 32.00) * 5 / 9;

    cout << setw(15) << right << "Fahrenheit" << setw(15) << right << "Celsius" << endl;
    cout << setw(15) << fixed << right << setprecision(2) << temp1 << setw(15) << fixed << right << setprecision(2) << temp1cels << endl;
    cout << setw(15) << fixed << right << setprecision(2) << temp2 << setw(15) << fixed << right << setprecision(2) << temp2cels << endl;
    cout << setw(15) << fixed << right << setprecision(2) << temp3 << setw(15) << fixed << right << setprecision(2) << temp3cels << endl;
    cout << setw(15) << fixed << right << setprecision(2) << temp4 << setw(15) << fixed << right << setprecision(2) << temp4cels << endl;
    cout << setw(15) << fixed << right << setprecision(2) << temp5 << setw(15) << fixed << right << setprecision(2) << temp5cels << endl;

    return 0;
}

/*
 * /home/jimdalftheorange/CLionProjects/Activity4/cmake-build-debug/Activity4
Enter five temperature values in Fahrenheit:
12
32
64
0
9
     Fahrenheit        Celsius
          12.00         -11.11
          32.00           0.00
          64.00          17.78
           0.00         -17.78
           9.00         -12.78

Process finished with exit code 0

 *
 *
 */
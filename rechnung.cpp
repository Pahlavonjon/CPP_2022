#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void PRINT_INVOICE(double gpu_price, int quantity,string Store,int gpu_selection){
    double invoice = 0;
    invoice = (gpu_price)*(quantity);
    switch (Store){
        case "PC BYTE":
            cout <<"\n\n PC BYTE Computer Store\n\n";
            break;
        case "PC CASE GEAR":
            cout <<"\n\n PC CASE GEAR Computer Hardware Store\n\n";
            break;
        case "Umart"
            cout <<"\n\n Umart Computer Store\n\n";
            break;
    }
    cout <<" Date:  \n";
    cout <<" GPU: "<<gpu_selection<<"\n";
    cout <<" Quantity: "<< quantity<<"\n\n";
    cout <<" Total:   $"<<setprecision(2)<<invoice<<"\n\n";

}
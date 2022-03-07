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

void PC_BYTE(){ // discounts?
    int gpu_stock_shop_A_current[5] = {40,60,100,100,12};
    int gpu_stock_shop_A_original[5] = {40,60,100,100,12};
    double gpu_price_shop_A[5] = {249,329,499,699,1499};
    int user_selection = 0;
    int user_quantity_selection = 1;
    int pricing = 0;
    string other_store_selection;
    int gpu_limit = 101;
    int gpu = 3050;
    cout <<"\n\n Welcome to PC BYTE store. Select a card: \n";
    bool correct_gpu_selection = false;
    while (correct_gpu_selection == false){
        for (int u = 0; u < 5; u++){
            cout <<"A "<<gpu<<" is $"<<gpu_price_shop_A[u]<<", and there are "<<gpu_stock_shop_A_current<<" "<<gpu<<" left!\n";
            gpu += 10;
        }
        cin>> user_selection;
        switch (user_selection){
            case 3050:
                pricing = gpu_price_shop_A[0];
                correct_gpu_selection = true;
                break;
            case 3060:
                pricing = gpu_price_shop_A[1];
                correct_gpu_selection = true;
                break;
            case 3070:
                pricing = gpu_price_shop_A[0];
                correct_gpu_selection = true;
                break;
            case 3080:
                pricing = gpu_price_shop_A[1];
                correct_gpu_selection = true;
                break;
            case 3090:
                pricing = gpu_price_shop_A[0];
                correct_gpu_selection = true;
                break;
            }
    }
    cout <<"\n Enter quantity: \n";
    cin >> user_quantity_selection;

    // might need to copy the switch statement above as it is only used to check gpu validity
    switch (user_selection){
            case 3050:
                pricing = gpu_price_shop_A[0];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[0]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[0]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3050 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[0] < (0.2*(gpu_stock_shop_A_original[0]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A[0] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC CASE GEAR\n";
                            cout <<" Umart\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC CASE GEAR"){
                                        other_store_selection = true;
                                        PC_CASE_GEAR();
                                    }
                                    else if (other_store_selection == "Umart"){
                                        other_store_selection = true;
                                        Umart_Croydon();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING";
                                        cout <<" PC CASE GEAR\n";
                                        cout <<" Umart\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[0] -= user_quantity_selection;
                break;
            case 3060:
                pricing = gpu_price_shop_A[1];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[1]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[1]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3060 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[1] < (0.2*(gpu_stock_shop_A_original[1]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A_current[1] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC CASE GEAR\n";
                            cout <<" Umart\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC CASE GEAR"){
                                        other_store_selection = true;
                                        PC_CASE_GEAR();
                                    }
                                    else if (other_store_selection == "Umart"){
                                        other_store_selection = true;
                                        Umart_Croydon();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING";
                                        cout <<" PC CASE GEAR\n";
                                        cout <<" Umart\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[1] -= user_quantity_selection;
                break;
            case 3070:
                pricing = gpu_price_shop_A[2];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[2]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[2]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3070 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[2] < (0.2*(gpu_stock_shop_A_original[2]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A_current[2] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC CASE GEAR\n";
                            cout <<" Umart\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC CASE GEAR"){
                                        other_store_selection = true;
                                        PC_CASE_GEAR();
                                    }
                                    else if (other_store_selection == "Umart"){
                                        other_store_selection = true;
                                        Umart_Croydon();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING";
                                        cout <<" PC CASE GEAR\n";
                                        cout <<" Umart\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[2] -= user_quantity_selection;
                break;
            case 3080:
                pricing = gpu_price_shop_A[3];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[3]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[3]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3080 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[3] < (0.2*(gpu_stock_shop_A_original[3]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A_current[3] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC CASE GEAR\n";
                            cout <<" Umart\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC CASE GEAR"){
                                        other_store_selection = true;
                                        PC_CASE_GEAR();
                                    }
                                    else if (other_store_selection == "Umart"){
                                        other_store_selection = true;
                                        Umart_Croydon();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING";
                                        cout <<" PC CASE GEAR\n";
                                        cout <<" Umart\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[3] -= user_quantity_selection;
                break;
            case 3090:
                pricing = gpu_price_shop_A[4];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[4]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[4]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3090 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[4] < (0.2*(gpu_stock_shop_A_original[4]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A_current[4] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC CASE GEAR\n";
                            cout <<" Umart\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC CASE GEAR"){
                                        other_store_selection = true;
                                        PC_CASE_GEAR();
                                    }
                                    else if (other_store_selection == "Umart"){
                                        other_store_selection = true;
                                        Umart_Croydon();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING";
                                        cout <<" PC CASE GEAR\n";
                                        cout <<" Umart\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[4] -= user_quantity_selection;
                break;
            }
    
    PRINT_INVOICE(pricing,user_quantity_selection,"PC BYTE",user_selection);

}

void PC_CASE_GEAR(){
    int gpu_stock_shop_A_current[5] = {5,20,240,80,200};
    int gpu_stock_shop_A_original[5] = {5,20,240,80,200};
    double gpu_price_shop_A[5] = {249,329,499,699,1499};
    int user_selection = 0;
    int user_quantity_selection = 1;
    double pricing = 0;
    string other_store_selection;
    int gpu_limit = 280;
    int gpu = 3050;
    cout <<"\n\n Welcome to PC CASE GEAR store. Select a card: \n";
    bool correct_gpu_selection = false;
    while (correct_gpu_selection == false){
        for (int u = 0; u < 5; u++){
            cout <<"A "<<gpu<<" is $"<<gpu_price_shop_A[u]<<", and there are "<<gpu_stock_shop_A_current<<" "<<gpu<<" left!\n";
            gpu += 10;
        }
        cin>> user_selection;
        switch (user_selection){
            case 3050:
                pricing = gpu_price_shop_A[0];
                correct_gpu_selection = true;
                break;
            case 3060:
                pricing = gpu_price_shop_A[1];
                correct_gpu_selection = true;
                break;
            case 3070:
                pricing = gpu_price_shop_A[0];
                correct_gpu_selection = true;
                break;
            case 3080:
                pricing = gpu_price_shop_A[1];
                correct_gpu_selection = true;
                break;
            case 3090:
                pricing = gpu_price_shop_A[0];
                correct_gpu_selection = true;
                break;
            }
    }
    cout <<"\n Enter quantity: \n";
    cin >> user_quantity_selection;

    // might need to copy the switch statement above as it is only used to check gpu validity
    switch (user_selection){
            case 3050:
                pricing = gpu_price_shop_A[0];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[0]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[0]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3050 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[0] < (0.2*(gpu_stock_shop_A_original[0]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A[0] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC BYTE\n";
                            cout <<" Umart\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC BYTE"){
                                        other_store_selection = true;
                                        PC_BYTE();
                                    }
                                    else if (other_store_selection == "Umart"){
                                        other_store_selection = true;
                                        Umart_Croydon();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING\n";
                                        cout <<" PC BYTE\n";
                                        cout <<" Umart\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[0] -= user_quantity_selection;
                break;
            case 3060:
                pricing = gpu_price_shop_A[1];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[1]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[1]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3060 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[1] < (0.2*(gpu_stock_shop_A_original[1]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A_current[1] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC BYTE\n";
                            cout <<" Umart\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC BYTE"){
                                        other_store_selection = true;
                                        PC_BYTE();
                                    }
                                    else if (other_store_selection == "Umart"){
                                        other_store_selection = true;
                                        Umart_Croydon();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING\n";
                                        cout <<" PC BYTE\n";
                                        cout <<" Umart\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[1] -= user_quantity_selection;
                break;
            case 3070:
                pricing = gpu_price_shop_A[2];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[2]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[2]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3070 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[2] < (0.2*(gpu_stock_shop_A_original[2]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A_current[2] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC BYTE\n";
                            cout <<" Umart\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC BYTE"){
                                        other_store_selection = true;
                                        PC_BYTE();
                                    }
                                    else if (other_store_selection == "Umart"){
                                        other_store_selection = true;
                                        Umart_Croydon();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING\n";
                                        cout <<" PC BYTE\n";
                                        cout <<" Umart\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[2] -= user_quantity_selection;
                break;
            case 3080:
                pricing = gpu_price_shop_A[3];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[3]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[3]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3080 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[3] < (0.2*(gpu_stock_shop_A_original[3]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A_current[3] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC BYTE\n";
                            cout <<" Umart\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC BYTE"){
                                        other_store_selection = true;
                                        PC_BYTE();
                                    }
                                    else if (other_store_selection == "Umart"){
                                        other_store_selection = true;
                                        Umart_Croydon();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING";
                                        cout <<" PC BYTE\n";
                                        cout <<" Umart\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[3] -= user_quantity_selection;
                break;
            case 3090:
                pricing = gpu_price_shop_A[4];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[4]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[4]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3090 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[4] < (0.2*(gpu_stock_shop_A_original[4]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A_current[4] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC BYTE\n";
                            cout <<" Umart\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC BYTE"){
                                        other_store_selection = true;
                                        PC_BYTE();
                                    }
                                    else if (other_store_selection == "Umart"){
                                        other_store_selection = true;
                                        Umart_Croydon();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING";
                                        cout <<" PC BYTE\n";
                                        cout <<" Umart\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[4] -= user_quantity_selection;
                break;
            }
    
    PRINT_INVOICE(pricing,user_quantity_selection,"PC CASE GEAR",user_selection);

}

void Umart_Croydon(){
    int gpu_stock_shop_A_current[5] = {5,20,240,80,200};
    int gpu_stock_shop_A_original[5] = {5,20,240,80,200};
    double gpu_price_shop_A[5] = {249,329,499,699,1499};
    int user_selection = 0;
    int user_quantity_selection = 1;
    double pricing = 0;
    string other_store_selection;
    int gpu_limit = 280;
    int gpu = 3050;
    cout <<"\n\n Welcome to PC CASE GEAR store. Select a card: \n";
    bool correct_gpu_selection = false;
    while (correct_gpu_selection == false){
        for (int u = 0; u < 5; u++){
            cout <<"A "<<gpu<<" is $"<<gpu_price_shop_A[u]<<", and there are "<<gpu_stock_shop_A_current<<" "<<gpu<<" left!\n";
            gpu += 10;
        }
        cin>> user_selection;
        switch (user_selection){
            case 3050:
                pricing = gpu_price_shop_A[0];
                correct_gpu_selection = true;
                break;
            case 3060:
                pricing = gpu_price_shop_A[1];
                correct_gpu_selection = true;
                break;
            case 3070:
                pricing = gpu_price_shop_A[0];
                correct_gpu_selection = true;
                break;
            case 3080:
                pricing = gpu_price_shop_A[1];
                correct_gpu_selection = true;
                break;
            case 3090:
                pricing = gpu_price_shop_A[0];
                correct_gpu_selection = true;
                break;
            }
    }
    cout <<"\n Enter quantity: \n";
    cin >> user_quantity_selection;

    // might need to copy the switch statement above as it is only used to check gpu validity
    switch (user_selection){
            case 3050:
                pricing = gpu_price_shop_A[0];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[0]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[0]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3050 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[0] < (0.2*(gpu_stock_shop_A_original[0]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A[0] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC BYTE\n";
                            cout <<" PC CASE GEAR\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC BYTE"){
                                        other_store_selection = true;
                                        PC_BYTE();
                                    }
                                    else if (other_store_selection == "PC CASE GEAR"){
                                        other_store_selection = true;
                                        PC_CASE_GEAR();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING\n";
                                        cout <<" PC BYTE\n";
                                        cout <<" PC CASE GEAR\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[0] -= user_quantity_selection;
                break;
            case 3060:
                pricing = gpu_price_shop_A[1];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[1]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[1]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3060 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[1] < (0.2*(gpu_stock_shop_A_original[1]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A_current[1] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC BYTE\n";
                            cout <<" PC CASE GEAR\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC BYTE"){
                                        other_store_selection = true;
                                        PC_BYTE();
                                    }
                                    else if (other_store_selection == "PC CASE GEAR"){
                                        other_store_selection = true;
                                        PC_CASE_GEAR();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING\n";
                                        cout <<" PC BYTE\n";
                                        cout <<" PC CASE GEAR\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[1] -= user_quantity_selection;
                break;
            case 3070:
                pricing = gpu_price_shop_A[2];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[2]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[2]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3070 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[2] < (0.2*(gpu_stock_shop_A_original[2]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A_current[2] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC BYTE\n";
                            cout <<" PC CASE GEAR\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC BYTE"){
                                        other_store_selection = true;
                                        PC_BYTE();
                                    }
                                    else if (other_store_selection == "PC CASE GEAR"){
                                        other_store_selection = true;
                                        PC_CASE_GEAR();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING\n";
                                        cout <<" PC BYTE\n";
                                        cout <<" PC CASE GEAR\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[2] -= user_quantity_selection;
                break;
            case 3080:
                pricing = gpu_price_shop_A[3];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[3]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[3]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3080 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[3] < (0.2*(gpu_stock_shop_A_original[3]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A_current[3] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC BYTE\n";
                            cout <<" PC CASE GEAR\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC BYTE"){
                                        other_store_selection = true;
                                        PC_BYTE();
                                    }
                                    else if (other_store_selection == "PC CASE GEAR"){
                                        other_store_selection = true;
                                        PC_CASE_GEAR();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING";
                                        cout <<" PC BYTE\n";
                                        cout <<" Umart\n";
                                        getline(cin,other_store_selection);
                                        // how does the user enter the store?
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[3] -= user_quantity_selection;
                break;
            case 3090:
                pricing = gpu_price_shop_A[4];
                cout <<"\n Enter quantity: \n";
                cin >> user_quantity_selection;

                    while ((user_quantity_selection < 1) || (user_quantity_selection > gpu_stock_shop_A_current[4]) || (user_quantity_selection > gpu_limit)){
                        while (user_quantity_selection > gpu_stock_shop_A_current[4]){
                            cout <<"\n Not enough in stock!\n enter a smaller quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > 1){
                            cout <<"\n Enter valid quantity: ";
                            cin >> user_quantity_selection;
                        }
                        while (user_quantity_selection > gpu_limit){
                            cout <<"\n The total stock of RTX 3090 in this store is less that %10, gpu limit of 1 is enforced. Enter 1\n";
                            cin >> user_quantity_selection;

                        }
                    }
                        if (gpu_stock_shop_A_current[4] < (0.2*(gpu_stock_shop_A_original[4]))){
                                gpu_limit = 1;
                        }
                        if (gpu_stock_shop_A_current[4] == 0){
                            cout << "\n\n Oh no there is no gpu in stock!   Try visiting other stores below:\n";
                            cout <<" PC BYTE\n";
                            cout <<" PC CASE GEAR\n";
                            getline(cin,other_store_selection);
                                bool other_store_selection = false;
                                while (other_store_selection == false){
                                    if (other_store_selection == "PC BYTE"){
                                        other_store_selection = true;
                                        PC_BYTE();
                                    }
                                    else if (other_store_selection == "PC CASE GEAR"){
                                        other_store_selection = true;
                                        PC_CASE_GEAR();
                                    }
                                    else {
                                        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING";
                                        cout <<" PC BYTE\n";
                                        cout <<" PC CASE GEAR\n";
                                        getline(cin,other_store_selection);
                                    }
                                }
                            }
                        gpu_stock_shop_A_current[4] -= user_quantity_selection;
                break;
            }
    
    PRINT_INVOICE(pricing,user_quantity_selection,"Umart",user_selection);
}

int main(){
    string user_store_selection;
    cout <<"\n Type which store to enter: \n";
    cout <<" PC BYTE\n";
    cout <<" PC CASE GEAR\n";
    cout <<" 3 Umart\n";
    getline(cin,user_store_selection);
    bool store_selection = false;
    while (store_selection == false){
    if (user_store_selection == "PC BYTE"){
        store_selection = true;
        PC_BYTE();
    }
    else if (user_store_selection == "PC CASE GEAR"){
        store_selection = true;
        PC_CASE_GEAR();
    }
    else if (user_store_selection == "Umart"){
        store_selection = true;
        Umart_Croydon();
    }
    else {
        cout <<"ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING";
        getline(cin,user_store_selection);
    }
    }
}
#include <stdio.h>
int main(){
    #include <stdio.h>

//double comp_tax(double salary)

    double tax;
    if(salary < 0.0){
        tax = -1.0;
    }
    else if(salary < 15000.00){
        tax = 0.15 * salary;
    }
    else if(salary < 30000.00){
        tax = (salary - 15000.00) * 0.18 + 2250.00;
    }
    else if(salary < 50000.00){
        tax = (salary - 30000.00) * 0.22 + 5400.00;
    }
    else if(salary < 80000.00){
        tax = (salary - 50000.00) * 0.27 + 11000.00;
    }
    else if(salary < 150000.00){
        tax = (salary - 80000.00) * 0.33 + 21600.00;
    }
    else{
        tax = -1.00;
    }
    return tax;
}
























    return 0;
}
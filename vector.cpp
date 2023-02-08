#include <iostream>
#include <vector>
#include "easy_list.h"
using namespace std;
void itc_rev_list(vector <int> &mass){
    if(mass.size()==0){

    }else{
 for(int i = 0; i < mass.size()/2; i++){
        mass[i] = mass[i] + mass[mass.size()-i-1];
        mass[mass.size()-i-1] = mass[i] - mass[mass.size()-i-1];
        mass[i] = mass[i] - mass[mass.size()-i-1];
    }
    }
    }


 void itc_rev_par_list(vector <int> &mass){
     if(mass.size()==0){

    }else{
    for(int i = 0; i < mass.size() - mass.size() % 2; i+=2){
        mass[i] = mass[i] + mass[i + 1];
        mass[i + 1] = mass[i] - mass[i + 1];
        mass[i] = mass[i] - mass[i + 1];
    }
    }
 }
void itc_rshift_list(vector <int> &mass){
     if(mass.size()==0){
    }else{
        int a = mass[mass.size()-1];
        for(int i=mass.size()-1; i>0;i--){
            mass[i] = mass[i-1];
        }
        mass[0] = a;

}
}
void itc_super_shift_list(vector <int> &mass, int n){
    int a;
      if(mass.size()==0){
     }else{
       if (n > 0){
         for(int i = 0; i < n; i++){
                a = mass[ mass.size() - 1];
                for(int i =  mass.size() - 1; i > 0; i--){
                    mass[i] = mass[i - 1];
                }
                mass[0] = a;
            }
        }
        if (n < 0){
            n = n*-1;
            for( int i = 0; i < n; i++){
                a = mass[0];
                for(int i = 0; i <  mass.size() - 1; i++){
                    mass[i] = mass[i + 1];
                }
                mass[ mass.size() - 1] = a;
            }
        }

    }
 }

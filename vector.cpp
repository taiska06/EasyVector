#include <iostream>
#include <vector>
#include "easy_list.h"
using namespace std;

void itc_rev_list(vector <int> &mass){
 for(int i = 0; i < mass.size(); i++){
        mass[i] = mass[i] + mass[mass.size()-i-1];
        mass[mass.size()-1-i] = mass[i] - mass[mass.size()-i-1];
        mass[i] = mass[i] - mass[mass.size()-i-1];
    }}
 void itc_rev_par_list(vector <int> &mass){
    for(int i = 0; i < mass.size() - mass.size() % 2; i+=2){
        mass[i] = mass[i] + mass[i + 1];
        mass[i + 1] = mass[i] - mass[i + 1];
        mass[i] = mass[i] - mass[i + 1];
    } }
void itc_rshift_list(vector <int> &mass){
    int a = mass[mass.size() - 1];
    for(int i = mass.size() - 1; i > 0; i--){
        mass[i] = mass[i - 1];
    }
    mass[0] = a;
}
 void itc_super_shift_list(vector <int> &mass, int n){
    int t;
    if (n < 0){
        n = -n;
        for(int b = 0; b < n; b++){
            t = mass[0];
            for(int i = 0; i < mass.size() - 1; i++){
                mass[i] = mass[i + 1];
            }
            mass[mass.size() - 1] = t;
        } }
    else{
        for(int b = 0; b < n; b++){
            t = mass[mass.size() - 1];
            for(int i = mass.size() - 1; i > 0; i--){
                mass[i] = mass[i - 1];
            }
            mass[0] = t;
        }} }


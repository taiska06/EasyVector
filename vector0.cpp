#include <iostream>
#include <vector>
#include "easy_list.h"
using namespace std;
void itc_even_index_list (const vector <int> &mass, vector <int> &mass2){
    for(int i=0; i<mass.size();i++)
        if(i%2==0)
            mass2.push_back(mass[i]);
}
void itc_even_parts_list(const vector <int> &mass, vector <int> &mass2){
  for(int i=0; i<mass.size();i++)
        if(mass[i]%2==0)
            mass2.push_back(mass[i]);

}
int itc_positive_list(const vector <int> &mass){
    int a=0;
    for(int i=0; i<mass.size();i++)
        if(mass[i]>0)
             a++;
    return a;
}
int itc_sl_list(const vector <int> &mass){
int max=0;
for (int i = 0; i < mass.size(); i++) {
        if (mass[i] < mass[i+1]) {
           max++;
        }
        }
  return max;
}
bool itc_same_parts_list(const vector <int> &mass){
    int a=0;
for (int i = 0; i <mass.size(); i++) {
        if ((mass[i]>=0 && mass[i+1]>=0) || (mass[i]<0 && mass[i+1]<0)) {
            a++;
        }
        }
    if(a>0)
        return true;
    return false;

}

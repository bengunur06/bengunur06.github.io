#include <iostream>
#include <string>
#include <fstream>
#include <pthread.h>
#include <cstdio>
#include "stdio.h"
#include <vector>
#include <thread>
#include <sstream>
#include <math.h>
#include <cmath>
#include<dirent.h>
using namespace std;


int main() 
{ 

 struct dirent *epdf;

DIR *dpdf;
std::vector<std::string> filenames;
dpdf = opendir("/data/files");
//if (dpdf != NULL) {
   while (epdf == readdir(dpdf)) {
      filenames.push_back(std::string(epdf->d_name));
   
   cout<<"found ";
}

int a=filenames.size();

vector<ifstream*> fff;

for(int i =0;i<filenames.size();++i)
{
    ifstream * in=new ifstream;
    fff.push_back(in);
    fff[i]->open(filenames[i]);
    cout<<"opened this file"<<filenames[i]<<endl;
}





  
   /* std::ifstream file;
    file.open("input.txt");
    std::ifstream ff1;
    ff1.open("input.txt");
    std::string str; 
    while (std::getline(file, str))
    {
       line++;
    }
    cout<<"line count:"<<line<<endl;

    if(line%X==0){
        cout<<"division is integer each thread will read "<<line/X<<endl;
        shouldread=line/X;

    }
 */



    }
    


#include<stdio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
#define MAX_STR_SIZE 65535
#define SOURCE_FILE "data.txt"
#define OUT_FILE "datatable.csv"
int intnum[801];
int numsize;
int i=0;
int j=0;
int k=0;

int main(){
    ifstream infile(SOURCE_FILE); 
    ofstream outfile(OUT_FILE, ios::trunc); 
    string temp;
    if (!infile.is_open()) 
    { 
        cout << "open file failed!" << endl; 
    }
    while(getline(infile,temp)) 
    { 		
	intnum[j]=0;	
	for(i=0;i<MAX_STR_SIZE;i++){
	    if(temp[i]=='\0'){
		numsize=i;
		break;
	    }
	}
        for(i=0;i<numsize;i++){
	    intnum[j]=intnum[j]*10+(temp[i]-48);
	}
	j++;
    }
	double C=945;
	double q=0.1;
	double ki=0.16;
	double kq=0.32;
	double gamma=1;
	int N[801];
	double Nhat[802];
	double p,y,error;
	p=31.5;
	for (i=0;i<301;i++)
	    	N[i]=30;
	for (i=301;i<451;i++)
	    	N[i]=10;
	for (i=451;i<801;i++)
	    	N[i]=30;
	Nhat[0]=10;
	for (k=0;k<=800;k++){	
		//y=intnum[k];
		//y=945;
		y=N[k]*p;
		error=(y-Nhat[k]*p)/(1+p*p);
    	if (Nhat[k]>1){
    		Nhat[k+1]=gamma*error*p*0.1+Nhat[k];
	}
        else if (Nhat[k]==1 && error*p>=0){
        	Nhat[k+1]=gamma*error*p*0.1+Nhat[k];
	}
    	else{Nhat[k+1]=Nhat[k];}

        if (p>1 && p<C){
    		p=0.1*(ki*(C-y)-kq*q)/Nhat[k]+p;
	} 
        else if (p==1 && (ki*(C-y)-kq*q)/Nhat[k]>0){
        	p=0.1*(ki*(C-y)-kq*q)/Nhat[k]+p;
	}
        else if (p==C && (ki*(C-y)-kq*q)/Nhat[k]<0){
        	p=0.1*(ki*(C-y)-kq*q)/Nhat[k]+p;
	}    
    	else{p=p;}
	} 
    for(i=0;i<=800;i++){
	outfile<<i<<','<<Nhat[i]<<endl;
    }
    infile.close();
    outfile.close();
    return 0; 
} 

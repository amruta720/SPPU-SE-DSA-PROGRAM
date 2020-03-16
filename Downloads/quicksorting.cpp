#include<iostream>
using namespace std;


typedef struct student{
  char name[30];
  int marks;
}student;

int main(){
  int total;
  float avgMarks=0.0;
  int maxMarks,minMarks,mostMarks;
  int absent=0;
  int most[51];
  for(int i=0;i<51;i++){
    most[i]=0;
  }

  cout<<"Enter the no of students: ";
  cin>>total;

  student db[total];
  for(int i=0;i<total;i++){
    cout<<"Enter the name and marks:\n";
    cin>>db[i].name>>db[i].marks;
  }
  cout<<endl;
  //setting maxMarks and minMarks as the marks of first student in the array
  maxMarks=db[0].marks;
  minMarks=db[0].marks;


  for(int i=0;i<total;i++){
    cout<<"Name: "<<db[i].name<<endl;
    cout<<"Marks: "<<db[i].marks<<endl<<endl;

    //average marks
    avgMarks+=db[i].marks;

    //minimum Marks
    if(maxMarks<=db[i].marks){
      maxMarks=db[i].marks;
    }

    //maximum Marks
    if(minMarks>=db[i].marks){
      minMarks=db[i].marks;
    }
    //absent
    if(db[i].marks==-1){
      absent+=1;
    }
    //most scored Marks
    most[db[i].marks]=most[db[i].marks]+1;
  }
  //calculating the average marks
  avgMarks/=total;

  //most scored Marks
  mostMarks=0;
  for(int i=0;i<51;i++){
    if(most[i]>=most[mostMarks]){
      mostMarks=i;
    }
  }

  cout<<"Average marks is "<<avgMarks<<endl;
  cout<<"Minimum marks is "<<minMarks<<endl;
  cout<<"Maximum marks is "<<maxMarks<<endl;
  cout<<most[mostMarks]<<"student scored "<<mostMarks<<endl;
  cout<<"Total number of absent student is "<<absent<<endl;
}


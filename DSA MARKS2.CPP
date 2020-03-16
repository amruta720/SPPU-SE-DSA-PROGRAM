#include<iostream>
using namespace std;
class test
{
	int j,i,n,m[30],sum,p,cnt,rn,k,count[7];
	int max,min;
	float avg;
	public:
		test()
		{
			i=sum=p=0;
	     cnt=j=max=min=0;
	}
 void input();
 void average();	
 void absent_students();
 void highest_lowest();
 void most_scored();	
};
	void test::input()
	{
	cout<<"\nEnter no of students:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	cout<<"\nEnter  roll no";
	cin>>i;
	cout<<"\nEnter marks";
	cin>>m[i];	
	cout<<i<<"\t"<<m[i];
}}
	void test::average()
	{
		int sum;
			float avg;
		cout<<"\naverage of the class is:";
		for(i=1;i<=n;i++)
		{
	 if(m[i]!=-1)
		{
			sum=sum+m[i];
			p++;
		}}
		avg=sum/(float)p;
		cout<<"\naverage="<<avg;
	}
	void test::absent_students()
	{
		 int cnt=0;
		for(i=0;i<n;i++)
		{
	if(m[i]==-1)
	{
        cnt++; 
		cout<<"\nroll no"<<"\t"<<i<<"\t"<<"is absent";
		}
		}
		cout<<"\nno of absent students:"<<cnt;
	}
	void test::highest_lowest()
	{   
	int i,j,m[i];
	 int max;
	 int min;
	 max=m[1];
		for(i=1;i<=n;i++)
		{
			if(m[i]==-1)
			{
			cout<<"\n";	
			}
			else if(m[i]>=max)
				{
				 max=m[i];
				 rn=i;
				}
			
	}
		cout<<"\nMaximum score is:"<<"\t"<<max<<"\t"<<"scored by roll no"<<"\t"<<rn;
		min=m[0];
		for(j=0;j<=n;j++)
		{
			if(m[j]==-1)
			{
				cout<<"\n";
			}
			else if(m[j]<=min)
			{
				min=m[j];
				rn=j;
			}
	}
		cout<<"\nMinimum marks are"<<min<<"\t"<<"scored by roll no"<<"\t"<<rn;
	}
	void  test::most_scored()
	{
        for(i=0;i<=20;i++)
		{
		
		 count[i]=0;
	}
		for(i=0;i<=20;i++)
		{
		 for(j=0;j<n;j++)
		 {
		 	if(m[j]==i)
		 	{
		 		count[i]=count[i]+1;
			 }
		 }
		}
	cout<<"\nmarks scored by most of the students:";
	k=0;
	j=0;
	int max=count[j];
	for(i=0;i<=20;i++)
	{
		if(count[i]>=max)
		{
			max=count[i];
			k=i;
		}
		}	
		cout<<"\nmaximum marks"<<k<<"scored by"<<max<<"students";
		
	}
	
	
	
	
	int main()
	{
		test t;
		cout<<"\nmarks of students in the test are:";
		t.input();
	    t.average();
	    t.absent_students();
	    t.highest_lowest();
	    t.most_scored();
	    return 0;
	}








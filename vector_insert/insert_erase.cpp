#include"includes.h"

int main(){
  int arr[]={110,120,130,140};
  vector<int>v(arr,arr+4);
  cout<<"Initial size of vector: "<<v.size()<<endl;
  
  cout<<"Before Insertion:\n";
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
  cout<<endl;
  
  v.insert(v.begin()+2,125);

  cout<<"After Insertion:\n";
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
  cout<<endl;

  v.erase(v.begin()+2);

  cout<<"After Erasure:\n";
  for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
  cout<<endl;
  return 0;
}
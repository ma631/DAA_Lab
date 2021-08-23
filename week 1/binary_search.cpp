#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
	 int c, first, last, mid, key;
	int n;
	cin>>n;
	int array[n];
 
  for (c = 0; c < n; c++){
    cin>>array[c];
}

  cout<<"Enter value to find: ";
  cin>>key;

  first = 0;
  last = n - 1;
  mid = (first+last)/2;

  while (first <= last) {
    if (array[mid] <key)
      first = mid + 1;
    else if (array[mid] == key) {
      cout<<"present.\n"<<endl;
      break;
    }
    else
      last = mid - 1;

    mid = (first + last)/2;
  }
  if (first > last)
    cout<<"Not present\n"<<endl;

	}
 
  return 0;
}

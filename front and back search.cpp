// CPP program to implement front and back 
// search 
#include<iostream> 
using namespace std; 

bool search(string arr[4][3], int n, string x[1][3]) 
{ 
	// Start searching from both ends 
	int front = 0, back = n - 1; 

	// Keep searching while two indexes 
	// do not cross. 
		while (front <= back) 
	{ 
	
	
		
		int l = 0;
	    	int loop;
		for (int j=0;j<3;j++)
		{
			
		
				if (arr[front][j] == x[0][j] || arr[back][j] == x[0][j]) {
				    if(arr[front][j] == x[0][j])
				    {
				    	 loop=front;
					}
					if(arr[back][j] == x[0][j])
				    {
				    	loop=back;
					}
		            l++; }
	
		}
		if(l == 3)
		{
			
			return true;
		}
	
	
	 	front++; 
		back--;	
	} 
	
	
	
	
	return false; 
} 

int main() 
{ 
string arr[4][3] = {{"Thokar","city Terminal","5"}, {"canal","uet","9"}, {"uet","emporium","9"}, {"packages", "fortress", "5"}}; 
string x[1][3] = {{"Thokar","city Terminal","5"}}; 
int n = sizeof(arr)/sizeof(arr[0]); 
if (search(arr, n, x)) 

	cout << "Yes";
	
else
	cout << "No"; 
return 0; 
} 


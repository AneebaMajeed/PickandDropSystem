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
	int r=4;
	
	while (front <= back) 
	{ 
	
	for (int i=0;i<4;i++){
		r=r-1;
		int l = 0;
		for (int j=0;j<3;j++)
		{
				if (arr[i][j] == x[0][j] || arr[r][j] == x[0][j]) 
		            l++; 
	
		}
		if(l == 3)
		{
			
			return true;
		}
		front++; 
		back--;	
	}
	 
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


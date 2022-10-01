#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 14, 15, 15};
    
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = i+1; j < 10; j++)
        {
            if(arr[i] != arr[j])
            {
                cout << arr[i] << " ";
                break;
            }
            
            else
            {
                cout << "Array already unique!";
                break;
            }
            
        }
        
    }
    
    

    return 0;
}

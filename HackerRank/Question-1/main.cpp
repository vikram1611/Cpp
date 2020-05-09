#include <iostream>

#include <map>
#include <vector>
#include <algorithm>
using namespace std;

std::map<char, vector<char>> genrateAdjacentKey(string keypad){
    
    std::map<char, vector<char>> key_map;
    key_map[keypad.at(0)] = vector<char>({keypad.at(1), keypad.at(3), keypad.at(4)});
    key_map[keypad.at(1)] = vector<char>({keypad.at(0), keypad.at(2), keypad.at(3), keypad.at(4), keypad.at(5)});
    key_map[keypad.at(2)] = vector<char>({keypad.at(1), keypad.at(4), keypad.at(5)});
    key_map[keypad.at(3)] = vector<char>({keypad.at(0), keypad.at(1),keypad.at(4), keypad.at(6), keypad.at(7)});
    key_map[keypad.at(4)] = vector<char>({keypad.at(0), keypad.at(1), keypad.at(2),keypad.at(3), keypad.at(5), keypad.at(6), keypad.at(7), keypad.at(8)});
    key_map[keypad.at(5)] = vector<char>({keypad.at(1), keypad.at(2), keypad.at(4), keypad.at(7), keypad.at(8)});
    key_map[keypad.at(6)] = vector<char>({keypad.at(3), keypad.at(4), keypad.at(7)});
    key_map[keypad.at(7)] = vector<char>({keypad.at(3), keypad.at(4), keypad.at(5), keypad.at(6), keypad.at(8)});
    key_map[keypad.at(8)] = vector<char>({keypad.at(4), keypad.at(5), keypad.at(7)});
    
    cout<<"key_map[keypad.at(0)] "<<key_map[keypad.at(0)]<<endl;
    return key_map;
    
}

int entryTime(string s, string keypad){
    
    
    if (s.length() == 0) 
        return 0;
    
    std::map<char, vector<char>> key_map = genrateAdjacentKey(keypad);
    
    int steps = 0;
    char pre = s.at(0);
    
    for (int i = 1; i < s.length(); i++) {
            char num = s.at(i);
            if (pre == num) 
                continue;
            
            if (std::find(key_map[pre].begin(), key_map[pre].end(), num) != key_map[pre].end())
                steps += 1;
            else 
                steps += 2;
                
            pre = num;
    }
  
   return steps;
    
}

int main()
{
	int time_val = entryTime("423692", "923857614");
    cout<<time_val<<endl;
	return 0;
}

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
     sort(people.begin(), people.end());
        
        int boatRequired = 0;
        int lightestPerson = 0;
        int heaviestPerson = people.size()-1;

        //WHILE THERE IS SOMEONE TO CARRY
        while (lightestPerson <= heaviestPerson){
            if(people[lightestPerson] + people[heaviestPerson] <= limit){
                --heaviestPerson;
                ++lightestPerson;
            }
            else{
                --heaviestPerson;
            }
            ++boatRequired;
        }

        return boatRequired;
    }    
    
};
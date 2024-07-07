int numWaterBottles(int numBottles, int numExchange) {
        
     int val = (numBottles -1) / (numExchange-1);
     return numBottles+val;

    }
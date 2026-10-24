class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int cal[]={31,28,31,30,31,30,31,31,30,31,30,31};
        string start= max(arriveAlice,arriveBob);
        string end= min(leaveAlice,leaveBob);
        if (start>end) return 0;
        int startMonth= stoi(start.substr(0,2));
        int startDay= stoi(start.substr(3,2));
        int endMonth= stoi(end.substr(0,2));
        int endDay= stoi(end.substr(3,2));
        int startDays=startDay;
        int endDays=endDay;
        for(int i=0;i<startMonth-1;i++){
            startDays+=cal[i];
        }

        for(int i=0;i<endMonth-1;i++){
            endDays+=cal[i];
        }
        return endDays-startDays+1;
        

    }
};
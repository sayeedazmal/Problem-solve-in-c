#include<stdio.h>


int main(){

    int opp_team_ran, current_ran,target_ran,n,bal_reamining;
    double current_ran_rate,target_ran_rate,over_played,over_reamining;

    scanf("%d",&n);
    while(n--){
        scanf("%d %d %d",&opp_team_ran,&current_ran,&bal_reamining);

        target_ran = opp_team_ran+1;
        over_played = (300 - bal_reamining)/6.0;
        current_ran_rate = current_ran/over_played;
        over_reamining= bal_reamining/6.0;
        target_ran_rate = (target_ran-current_ran)/over_reamining;

        printf("%0.2lf %0.2lf\n", current_ran_rate, target_ran_rate);
    }

}

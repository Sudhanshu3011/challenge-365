#include<stdio.h>
#include<stdlib.h>

struct Process {
    int processID;
    int arrivalTime;
    int burstTime;
    int remainingBurstTime;
};

void fcfs(struct Process *processes, int n);
void roundRobin(struct Process *processes, int n, int quantum);

int main() {
    int n, quantum;
    
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    struct Process *processes = (struct Process*) malloc(n * sizeof(struct Process));
    
    printf("Enter arrival time and burst time for each process:\n");
    for (int i = 0; i < n; i++) {
        printf("Process %d: ", i + 1);
        scanf("%d %d", &processes[i].arrivalTime, &processes[i].burstTime);
        processes[i].processID = i + 1;
        processes[i].remainingBurstTime = processes[i].burstTime;
    }
    
    printf("Enter the time quantum for Round Robin: ");
    scanf("%d", &quantum);
    
    printf("\nFCFS Scheduling:\n");
    fcfs(processes, n);
    
    printf("\nRound Robin Scheduling:\n");
    roundRobin(processes, n, quantum);
    
    free(processes);
    
    return 0;
}

void fcfs(struct Process *processes, int n) {
    int currentTime = 0;
    float totalWaitTime = 0;
    
    printf("Process ID\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++) {
        int waitTime = currentTime - processes[i].arrivalTime;
        if (waitTime < 0)
            waitTime = 0;
        totalWaitTime += waitTime;
        currentTime += processes[i].burstTime;
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].processID, processes[i].arrivalTime,
               processes[i].burstTime, waitTime, currentTime - processes[i].arrivalTime);
    }
    printf("Average Waiting Time: %.2f\n", totalWaitTime / n);
}

void roundRobin(struct Process *processes, int n, int quantum) {
    int *remainingTime = (int*) malloc(n * sizeof(int));
    int currentTime = 0;
    float totalWaitTime = 0;
    int *finished = (int*) calloc(n, sizeof(int));
    
    printf("Process ID\tBurst Time\tWaiting Time\tTurnaround Time\n");
    
    while (1) {
        int done = 1;
        
        for (int i = 0; i < n; i++) {
            if (finished[i] == 0) {
                done = 0;
                if (processes[i].remainingBurstTime > 0) {
                    if (processes[i].remainingBurstTime > quantum) {
                        currentTime += quantum;
                        processes[i].remainingBurstTime -= quantum;
                    } else {
                        currentTime += processes[i].remainingBurstTime;
                        processes[i].remainingBurstTime = 0;
                        totalWaitTime += currentTime - processes[i].arrivalTime - processes[i].burstTime;
                        finished[i] = 1;
                        printf("%d\t\t%d\t\t%d\t\t%d\n", processes[i].processID, processes[i].burstTime,
                               currentTime - processes[i].arrivalTime - processes[i].burstTime,
                               currentTime - processes[i].arrivalTime);
                    }
                }
            }
        }
        
        if (done == 1)
            break;
    }
    
    printf("Average Waiting Time: %.2f\n", totalWaitTime / n);
    
    free(remainingTime);
    free(finished);
}

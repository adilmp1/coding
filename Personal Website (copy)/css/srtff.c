#include <stdio.h>
#include <stdlib.h>

struct Process
{
    int pid;
    int arrival_time;
    int burst_time;
    int remaining_time;
};

void sjf(struct Process *processes, int n)
{
    int current_time = 0;
    int completed = 0;
    int *waiting_time = malloc(n * sizeof(int));
    int *turnaround_time = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        waiting_time[i] = 0;
        turnaround_time[i] = 0;
        processes[i].remaining_time = processes[i].burst_time;
    }
    while (completed < n)
    {
        int shortest_job = -1;
        int shortest_time = 99999;
        for (int i = 0; i < n; i++)
        {
            if (processes[i].arrival_time <= current_time && processes[i].remaining_time < shortest_time && processes[i].remaining_time > 0)
            {
                shortest_job = i;
                shortest_time = processes[i].remaining_time;
            }
        }
        if (shortest_job == -1)
        {
            current_time++;
        }
        else
        {
            processes[shortest_job].remaining_time--;
            current_time++;
            if (processes[shortest_job].remaining_time == 0)
            {
                completed++;
                waiting_time[shortest_job] = current_time - processes[shortest_job].arrival_time - processes[shortest_job].burst_time;
                turnaround_time[shortest_job] = current_time - processes[shortest_job].arrival_time;
            }
        }
    }
    int total_waiting_time = 0;
    int total_turnaround_time = 0;
    printf("Process\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < n; i++)
    {
        total_waiting_time += waiting_time[i];
        total_turnaround_time += turnaround_time[i];
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", processes[i].pid, processes[i].arrival_time, processes[i].burst_time, waiting_time[i], turnaround_time[i]);
    }
    printf("Average Waiting Time: %f\n", (float)total_waiting_time / (float)n);
    printf("Average Turnaround Time: %f\n", (float)total_turnaround_time / (float)n);
    free(waiting_time);
    free(turnaround_time);
}

int main()
{
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    struct Process *processes = malloc(n * sizeof(struct Process));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the arrival time and burst time of process %d: ", i + 1);
        scanf("%d%d", &processes[i].arrival_time, &processes[i].burst_time);
        processes[i].pid = i + 1;
    }
    sjf(processes, n);
    free(processes);
    return 0;
}
#include<stdio.h>
int main(){
    int accuracy, role, confidence, dataset, status ;
    double modelScore, average, minDataset;

    printf("Enter Accuracy level: (0-100)\n");
    scanf("%d" , &accuracy);
    printf("Enter Confidence level:  (0-100)\n");
    scanf("%d" , &confidence);
    printf("Enter Dataset Size: \n");
    scanf("%d" , &dataset);
    printf("Enter your Role: \n");
    scanf("%d" , &role);
    printf("Enter Status: \n");
    scanf("%d" , &status);

    if ((dataset/1000.0) < 10)
    minDataset = dataset/1000.0;
    else
    minDataset = 10;
    printf("%.2f\n" , minDataset);
    modelScore = (accuracy * 0.5) + (confidence * 0.3) + (minDataset*2);
    printf("Model Score : %.2f\n" , modelScore);

    // (bitwise: 1 = TRAINED, 2 = VALIDATED, 4 = APPROVED, 8 =
    // DEPRECATED)
    if(status & 8)
    printf("Rejected : Model Depreciated \n");
    else if(!(status & 1))
    printf("Rejected : Not Trained \n");
    else if(!(status & 2))
    printf("Rejected : Not Validated\n");
    else if(!(status & 4))
    printf("Pending: Awaiting Approval\n");
    else if(accuracy<70 || confidence<60)
    printf("Rejected: Performace too Low\n");
    else if(dataset<5000)
    printf("Rejected : dataset too Small\n");
    else if(role ==1)
    printf("Denired: interns cannot Deploy\n");
    else if(role==2 && modelScore<80)
    printf("Denied: Engineers need Higher Score\n");
    else
    printf("Approved for Deployment\n");

    average = (accuracy+confidence)/2.0;
    printf("%.2f\n" , average);
    if(modelScore>average)
    printf("Model Score is above the Average of confidence and Accuracy!\n");
    else
    printf("Model Score is below the Average of confidence and Accuracy\n");

    printf("---Sizes of variables---\n");
    printf("Size of Confidence Variable is : %zu\n" , sizeof(confidence));
    printf("Size of Accuracy Variable is : %zu\n" , sizeof(accuracy));
    printf("Size of Role Variable is : %zu\n" , sizeof(role));
    printf("Size of Dataset Variable is : %zu\n" , sizeof(dataset));
    printf("Size of Status Variable is : %zu\n" , sizeof(status));
    printf("Size of ModelScore Variable is : %zu\n" , sizeof(modelScore));
    printf("Size of Average Variable is : %zu\n" , sizeof(average));
}
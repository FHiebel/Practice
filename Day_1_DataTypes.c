//Day 1 Data Types
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    char* *s2 = malloc(sizeof(char*) * 10000);
    // Read and save an integer, double, and String to your variables.
    scanf("%d",&i2);
    scanf("%lf",&d2);

    for(int s2_i = 0; s2_i < 10000; s2_i++){
       s2[s2_i] = (char *)malloc(10240 * sizeof(char));
       scanf("%s",s2[s2_i]);
    }
    // Print the sum of both integer variables on a new line.
    printf("%i\n",i+i2);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n",d+d2);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
        printf("%s",s);
    for(int s2_ii = 0; s2_ii < 10000; s2_ii++){
        printf("%s",s2[s2_ii]);
                printf(" ");
    }


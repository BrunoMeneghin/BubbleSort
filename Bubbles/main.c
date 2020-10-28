//
//  main.c
//  Bubbles
//
//  Created by Bruno Meneghin on 27/10/20.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("BUBBLE SORT\n");
    
#pragma mark: UTFPR - UNIVERSIDADE TECNOLÓGICA FEDERAL DO PARANÁ - REMAKE in C - year: 2010
    double *alloc = NULL;
    double inBubble;
    double bubble[5] = {9.0, 8.1, 19.7, 4.1, 3.3};
    
    for (int i=0; i<5; i++) {
        for (int j=0; j<4; j++) {
            if (bubble[j] > bubble[j+1]) {
                inBubble = bubble[j];
                bubble[j] = bubble[j+1];
                bubble[j+1] = inBubble;
            }
        }
        
        alloc = &inBubble;
    }
    
    for(int i=0; i<5; i++) {
        printf("%.1f | ", bubble[i]);
    }
    
    printf("Alloc: %.2lf: ", *alloc);
    printf("Alloc address memory: %p ", (void*)&inBubble);
   
    return 0;
}

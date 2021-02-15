#include<stdio.h>
#include<stdlib.h>

int main() {
    long i,n,k,rq,cq,rOb,cOb,up,down,right,left,upLeft,upRight,downLeft,downRight;
    
    scanf("%ld %ld",&n,&k);
    scanf("%ld %ld",&rq,&cq);
    
    // determine left, right, down, up, ...
    left = cq-1;
    right = n-cq;
    down = rq-1;
    up = n-rq;
    
    if(left<up) {
        upLeft = left;
    } else {
        upLeft = up;
    }
    
    if(right<up) {
        upRight = right;
    } else {
        upRight = up;
    }
    
    if(left<down) {
        downLeft = left;
    } else {
        downLeft = down;
    }
    
    if(right<down) {
        downRight = right;
    } else {
        downRight = down;
    }
    
    for(i=0;i<k;i++) {
        scanf("%ld %ld",&rOb,&cOb);
        
        // check if obstacle is on the position that the queen can reach 
        
        // same row and obstacle is on the right side
        if(rOb == rq && cOb > cq) { 
            if(cOb-cq-1 < right) // counter >= 2 obstacles qualified this case
                right = cOb-cq-1;
        }
        // same row and obstacle is on the left side
        else if(rOb == rq && cOb < cq) {
            if(cq-cOb-1 < left)
                left = cq-cOb-1;
        }
        // same col and obstacle is on the top side
        else if(cOb == cq && rOb > rq) {
            up = rOb-rq-1;
        }
        // same col and obstacle is on the bottom side
         else if(cOb == cq && rOb < rq) {
            if(rq-rOb-1 < down)    
                down = rq-rOb-1;
        }
        // on the upLeft side
        else if(cOb < cq && rOb > rq) {
            // check if obstacle is on the diagonal line
            if(cq-cOb == rOb-rq) { 
                if(rOb-rq-1 < upLeft)
                    upLeft = rOb-rq-1;
            }
        }
        // on the downLeft side
        else if(cOb < cq && rOb < rq) {
            if(cq-cOb == rq-rOb) { 
                if(rq-rOb-1 < downLeft)
                    downLeft = rq-rOb-1;
            }
        }
        // on the upRight side
        else if(cOb > cq && rOb > rq) {
            if(cOb-cq == rOb-rq) {
                if(rOb-rq-1 < upRight)
                    upRight = rOb-rq-1;
            }
        }
        // on the upDown side
        else if(cOb > cq && rOb < rq) {
            if(cOb-cq == rq-rOb) {
                if(rq-rOb-1 < downRight)
                    downRight = rq-rOb-1;
            }
        }
    }
    
    printf("%ld\n",up+left+right+down+upLeft+downLeft+upRight+downRight);
    return 0;
}

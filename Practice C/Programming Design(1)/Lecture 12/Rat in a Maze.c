// TODO: fill the route matrix with 0's or 1‘s.
// If there isn't any route, return false; otherwise, return true.
bool visit(char maze[][n], int route[][n], int originX, int originY) {

// TODO: fill the route matrix with 0's or 1‘s.
// If there isn't any route, return false; otherwise, return true.
bool visit(char maze[][n], int route[][n], int originX, int originY) {

        route[originX][originY] == 1;
        int end1 =4, end2 =4;
        int success =0;
        if(originX == 4 && originY == 4)
        {
            success = 1;    
        }      
        if(success != 1 && maze[originX+1][originY] =='r')
        { 
            originX = originX + 1;
            visit(maze, route, originX,originY) ;                
        }
        if(success != 1 && maze[originX][originY+1] =='r')
        {  
            
            originY = originY+1;
            visit(maze, route, originX,originY) ;   
        }
        if(success != 1 && maze[originX-1][originY] =='r')
        {
            
            originX =  originX -1;
            visit(maze, route, originX,originY) ;
                 
        }
        if(success != 1 && maze[originX][originY-1] =='r')
        {   
            originY =  originY - 1; 
            visit(maze, route, originX,originY) ;              
        }
        if(success != 1)
        { 
            route[originX][originY] == 0;       
        }
        if(success == 1)
            return true;
        else 
            return false;
      
}

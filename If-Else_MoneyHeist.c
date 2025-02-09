#include <stdio.h>

int main() {
     int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
       scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
        scanf("%d %d",&k,&l);
    scanf("%d %d",&m,&n);
    scanf("%d %d",&o,&p);
    if(k==0){
        a=a+l;
        if(a>9){
       a=a-10;
    }
    }
    else if(m==0){
         a=a+n;
        if(a>9){
       a=a-10;
    }
   }
    else if(o==0){
         a=a+p;
        if(a>9){
       a=a-10;
    }
   }
    if(k==1){
       b=b+l;
        if(b>9){
       b=b-10;
    }
    }
   else if(m==1){
     b=b+n;
        if(b>9){
       b=b-10;
    }
}
   else if(o==1){
         b=b+p;
        if(b>9){
       b=b-10;
    }
 }
   if(k==2){
      c=c+l;
        if(c>9){
       c=c-10;
    }
   }
    else if(m==2){
        c=c+n;
        if(c>9){
       c=c-10;
    }
    }
   else if(o==2){
        c=c+p;
        if(c>9){
       c=c-10;
    }
   }
    if(k==3){
        d=d+l;
        if(d>9){
       d=d-10;
    }
    }
     else if(m==3){
        d=d+n;
        if(d>9){
       d=d-10;
    }
    }
  else if(o==3){
       d=d+p;
        if(d>9){
       d=d-10;
    }
   
    }
    if(k==4){
        e=e+l;
        if(e>9){
       e=e-10;
    }
}
    else if(m==4){
        e=e+n;
        if(e>9){
       e=e-10;
    }
   }
    else if(o==4){
        e=e+p;
        if(e>9){
       e=e-10;
    }
   
    }
    if(k==5){
        f=f+l;
        if(f>9){
       f=f-10;
}
  }
     else if(m==5){
        f=f+n;
        if(f>9){
       f=f-10;
    }
}
    else if(o==5){
        f=f+p;
        if(f>9){
       f=f-10;
    }
}
    if(k==6){
        g=g+l;
        if(g>9){
       g=g-10;
    }
}
    else if(m==6){
        g=g+n;
        if(g>9){
       g=g-10;
    }
}
     else if(o==6){
        g=g+p;
        if(g>9){
       g=g-10;
    }
 }
    if(k==7){
        h=h+l;
        if(h>9){
       h=h-10;
    }
 }
    else if(m==7){
        h=h+n;
        if(h>9){
       h=h-10;
    }
 }
   else if(o==7){
        h=h+p;
        if(h>9){
       h=h-10;
    }
}
    if(k==8){
        i=i+l;
        if(i>9){
       i=i-10;
    }
}
    else if(m==8){
        i=i+n;
        if(i>9){
       i=i-10;
    }
}
   else if(o==8){
        i=i+p;
        if(i>9){
       i=i-10;
    }
  }
    if(k==9){
        j=j+l;
        if(j>9){
       j=j-10;
    }
  }
    else if(m==9){
        j=j+n;
        if(j>9){
       j=j-10;
    }
   
    }
   else if(o==9){
        j=j+p;
        if(j>9){
       j=j-10;
    }
    
    }  
    printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,i,j);
    return 0;
}
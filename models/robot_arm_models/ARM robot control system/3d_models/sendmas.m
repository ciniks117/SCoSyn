function f=sendmas(in_data,s) 


        x=(length(in_data));


    sign=0;	
	tmp=x/255;
	 htmp=uint16(( floor(tmp))) ;    
	ltmp=(x-(htmp*255));
    htmp=uint8(htmp);
    ltmp=uint8(ltmp);            
        masa(1)=1;    
        masa(2)=2;
        masa(3)=100;
        masa(4)=100;      
        masa(5)=htmp;
        masa(6)=ltmp;
        masa(7)=sign;
        masa(8)=8;
        masa(9)=9 ;
        
        fwrite(s,masa) ;
     
        
for num=1:length(in_data)
    
for m=1:6    
dat=rad2deg(in_data(num,m))*100;
x=(dat);


    sign=0;
	if (x>=0) 
        sign=0;
   
    else
        sign=1;
    end
	
	x=(abs(x));
	tmp=x/255;
	 htmp=uint16(( floor(tmp))) ;    
	ltmp=(x-(htmp*255));
    
    htmp=uint8(htmp);
    ltmp=uint8(ltmp);
  
    
    
%     if num==1
%         
%         masd(1,m)=1;    
%         masd(2,m)=2;
%         masd(3,m)=30+(m-1);
%         masd(4,m)=uint8(num);
%         masd(5,m)=htmp;
%         masd(6,m)=ltmp;
%         masd(7,m)=sign;
%         masd(8,m)=8;
%         masd(9,m)=9; 
%         
%     else
%     
%     
        masd(1,(6*num)+m-6)=1;    
        masd(2,(6*num)+m-6)=2;
        
        if(num>255)
             masd(3,(6*num)+m-6)=40+(m-1);
             masd(4,(6*num)+m-6)=uint8(num-255);
        else
             masd(3,(6*num)+m-6)=30+(m-1);
             masd(4,(6*num)+m-6)=uint8(num);
        end
        
        masd(5,(6*num)+m-6)=htmp;
        masd(6,(6*num)+m-6)=ltmp;
        masd(7,(6*num)+m-6)=sign;
        masd(8,(6*num)+m-6)=8;
        masd(9,(6*num)+m-6)=9; 

%    end
   
  
end    
    
end

 y = masd(:);
 y = y';
 
 fwrite(s,y) ;
%f=y;
 disp('TX COMPLETED !!!!!!!')
end
         
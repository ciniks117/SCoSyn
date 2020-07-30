% 
%    global index;
%    global pval;
%    global newfile;
%    global sind;

 function [pv1,pv2,pv3]=get_values(newfile,sind) 
   open_system(newfile);
   b = find_system(newfile,'Type','Block');  
    for i=1:length(b)
       prefix = strsplit(char(b(i)),'/');
       if length(prefix)>2
           continue;
       end

       if strcmp(prefix(2),sind(1))
          handle1 = get_param(b{i},'handle');
          block = get(handle1);
       end
       if strcmp(prefix(2),sind(2))
          handle2 = get_param(b{i},'handle');
       end
       if strcmp(prefix(2),sind(3))
          handle3 = get_param(b{i},'handle');
       end
    end
    
       pv1=get_param(handle1,block.BlockType);
       pv2=get_param(handle2,block.BlockType);
       pv3=get_param(handle3,block.BlockType);
       
       %newval=str2num(newval);
      close_system(newfile);
 end

function f=inv_kinem(x,P,O)
x1=x(1);
x2=x(2);
x3=x(3);
x4=x(4);
x5=x(5);
x6=x(6);

T =[
    sin(x5)*(sin(x1)*sin(x4) - cos(x4)*(cos(x1)*cos(x2)*sin(x3) + cos(x1)*cos(x3)*sin(x2))) - cos(x5)*(cos(x1)*sin(x2)*sin(x3) - cos(x1)*cos(x2)*cos(x3)), sin(x6)*(cos(x4)*sin(x1) + sin(x4)*(cos(x1)*cos(x2)*sin(x3) + cos(x1)*cos(x3)*sin(x2))) + cos(x6)*(cos(x5)*(sin(x1)*sin(x4) - cos(x4)*(cos(x1)*cos(x2)*sin(x3) + cos(x1)*cos(x3)*sin(x2))) + sin(x5)*(cos(x1)*sin(x2)*sin(x3) - cos(x1)*cos(x2)*cos(x3))), cos(x6)*(cos(x4)*sin(x1) + sin(x4)*(cos(x1)*cos(x2)*sin(x3) + cos(x1)*cos(x3)*sin(x2))) - sin(x6)*(cos(x5)*(sin(x1)*sin(x4) - cos(x4)*(cos(x1)*cos(x2)*sin(x3) + cos(x1)*cos(x3)*sin(x2))) + sin(x5)*(cos(x1)*sin(x2)*sin(x3) - cos(x1)*cos(x2)*cos(x3))), 100*sin(x1) + 400*cos(x1)*cos(x2) + 115*sin(x5)*(sin(x1)*sin(x4) - cos(x4)*(cos(x1)*cos(x2)*sin(x3) + cos(x1)*cos(x3)*sin(x2))) - 115*cos(x5)*(cos(x1)*sin(x2)*sin(x3) - cos(x1)*cos(x2)*cos(x3)) - 326*cos(x1)*sin(x2)*sin(x3) + 326*cos(x1)*cos(x2)*cos(x3)
                                                    cos(x5)*(cos(x2)*sin(x3) + cos(x3)*sin(x2)) + cos(x4)*sin(x5)*(cos(x2)*cos(x3) - sin(x2)*sin(x3)),                                                                                       - cos(x6)*(sin(x5)*(cos(x2)*sin(x3) + cos(x3)*sin(x2)) - cos(x4)*cos(x5)*(cos(x2)*cos(x3) - sin(x2)*sin(x3))) - sin(x4)*sin(x6)*(cos(x2)*cos(x3) - sin(x2)*sin(x3)),                                                                                         sin(x6)*(sin(x5)*(cos(x2)*sin(x3) + cos(x3)*sin(x2)) - cos(x4)*cos(x5)*(cos(x2)*cos(x3) - sin(x2)*sin(x3))) - cos(x6)*sin(x4)*(cos(x2)*cos(x3) - sin(x2)*sin(x3)),                                                                                     400*sin(x2) + 326*cos(x2)*sin(x3) + 326*cos(x3)*sin(x2) + 115*cos(x5)*(cos(x2)*sin(x3) + cos(x3)*sin(x2)) + 115*cos(x4)*sin(x5)*(cos(x2)*cos(x3) - sin(x2)*sin(x3)) + 501
 sin(x5)*(cos(x1)*sin(x4) + cos(x4)*(cos(x2)*sin(x1)*sin(x3) + cos(x3)*sin(x1)*sin(x2))) - cos(x5)*(cos(x2)*cos(x3)*sin(x1) - sin(x1)*sin(x2)*sin(x3)), sin(x6)*(cos(x1)*cos(x4) - sin(x4)*(cos(x2)*sin(x1)*sin(x3) + cos(x3)*sin(x1)*sin(x2))) + cos(x6)*(cos(x5)*(cos(x1)*sin(x4) + cos(x4)*(cos(x2)*sin(x1)*sin(x3) + cos(x3)*sin(x1)*sin(x2))) + sin(x5)*(cos(x2)*cos(x3)*sin(x1) - sin(x1)*sin(x2)*sin(x3))), cos(x6)*(cos(x1)*cos(x4) - sin(x4)*(cos(x2)*sin(x1)*sin(x3) + cos(x3)*sin(x1)*sin(x2))) - sin(x6)*(cos(x5)*(cos(x1)*sin(x4) + cos(x4)*(cos(x2)*sin(x1)*sin(x3) + cos(x3)*sin(x1)*sin(x2))) + sin(x5)*(cos(x2)*cos(x3)*sin(x1) - sin(x1)*sin(x2)*sin(x3))), 100*cos(x1) - 400*cos(x2)*sin(x1) + 115*sin(x5)*(cos(x1)*sin(x4) + cos(x4)*(cos(x2)*sin(x1)*sin(x3) + cos(x3)*sin(x1)*sin(x2))) - 115*cos(x5)*(cos(x2)*cos(x3)*sin(x1) - sin(x1)*sin(x2)*sin(x3)) - 326*cos(x2)*cos(x3)*sin(x1) + 326*sin(x1)*sin(x2)*sin(x3)
                                                                                                                                                     0,                                                                                                                                                                                                                                                         0,                                                                                                                                                                                                                                                         0,                                                                                                                                                                                                                                                             1];
 
%Td=diag(T);
%Td(4,:)=[];
M=T([1:3],[1:3]);
M=M(:);
Tps=T([1:3],4);
f=[
    %Td-O;
    M-O;
    Tps-P;
    ];
%f=T([1:3],4)-P
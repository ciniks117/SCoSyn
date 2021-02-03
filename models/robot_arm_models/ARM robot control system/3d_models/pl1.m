% figure(15) 
% grid on
% 
% plot3(simout(:,1), simout(:,3), simout(:,2))

figure(1) 
grid on
subplot(2,1,1);

plot(tout,[simout(:,1) simout(:,2) simout(:,3)])
title('���������� �������'); 

ylim([-50 simout(1,1)+50])                      
legend(' ��� X', '��� Y', '��� Z')        
grid on

subplot(2,1,2);

plot(tout,[simout(:,4) simout(:,8) simout(:,12)])
title('���������� �������');                              
ylim([-1.5 1.5])                      
legend('1:1', '2:2', '3:3')  
grid on

figure(3) 
title('���������� �������');
subplot(2,2,[1 3])

plot3(simout(:,1), simout(:,3), simout(:,2))

grid on

subplot(2,2,2)
plot(simout(:,3), simout(:,2))
grid on
xlabel('��� Z'); 
ylabel('��� Y'); 

subplot(2,2,4)

plot(simout(:,1), simout(:,2))
grid on
xlabel('��� X'); 
ylabel('��� Y'); 


p=mtit('���������� �������','fontsize',14,'color',[0 0 0],'xoff',-.1,'yoff',.0);
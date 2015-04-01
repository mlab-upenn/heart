% clear all
% % % close all
% % clc
% 
% function [node_name,path_names,node_param,path_param,pacemaker_defaults]=setup_case2none
%  load case2_brad_WB
% % % % % % % % % % % % load pacemaker
% % % % % % % % load type_1
for i=1:size(node_table,1)
    node_name{i}=sprintf('NA%d_%s',i,node_table{i,1});
end
node_param = zeros(size(node_table,1),8)+Inf;

Tclk_h = 1;

path_table(3,10) = {2000};path_table(3,11) = {2000};

node_param(:,2) = round(cell2mat(node_table(:,4))/Tclk_h);    %defining TERP_default
node_param(:,4) = round(cell2mat(node_table(:,6))/Tclk_h);    %defining TRRP_default
node_param(:,6) = round(cell2mat(node_table(:,8))/Tclk_h);    %defining Trest_default
node_param(:,1) = round(cell2mat(node_table(:,3))/Tclk_h);    %defining TERP_default
node_param(:,3) = round(cell2mat(node_table(:,5))/Tclk_h);    %defining TRRP_default
node_param(:,5) = round(cell2mat(node_table(:,7))/Tclk_h);    %defining Trest_default

node_param(:,7:8) = round(cell2mat(node_table(:,10))/Tclk_h);    %defining Trest_default
% % % % node_param(:,8) = round(cell2mat(node_table(:,7))/Tclk_h);    %defining Trest_default


path_param = zeros(size(node_table,1),size(node_table,1),7)+Inf;
path_names=[];
for ii=1:size(path_table,1)
    path_param(cell2mat(path_table(ii,3)),cell2mat(path_table(ii,4)),1:7)= [cell2mat(path_table(ii,8)) cell2mat(path_table(ii,9)) ...
                                                 cell2mat(path_table(ii,10)) cell2mat(path_table(ii,11)) min([cell2mat(path_table(ii,9)) ...
                                                 cell2mat(path_table(ii,11))]) round(cell2mat(path_table(ii,12))./cell2mat(path_table(ii,6))) ...
                                                 round(cell2mat(path_table(ii,12))./cell2mat(path_table(ii,7)))];            
    path_names{ii}=sprintf('PA%d_%dto%d',ii,path_table{ii,3},path_table{ii,4});
end

path_param(2,4,7) = 3000;

pacemaker_defaults = cell2mat(pace_para(:,4));


% 'done'
% 
% break
% 
% ds=[(ScopeData1.signals(1).values) (ScopeData1.signals(2).values) (ScopeData1.signals(3).values) (ScopeData1.signals(4).values) (ScopeData1.signals(5).values)].';
% for ii=1:5, subplot(6,1,ii), hold on, stairs(ds(ii,:),'rx-'), grid on, end
% pm = (2*(ScopeData2.signals(1).values) -2*(ScopeData2.signals(2).values) +1*(ScopeData2.signals(3).values) -1*(ScopeData2.signals(4).values)).';
% subplot(6,1,6), hold on, stairs(pm(:),'rx-')
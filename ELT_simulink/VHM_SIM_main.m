% function VHM_SIM_main
clear all
global Config
sys_name='case2mod_new';

% Initialize GUI
VHM_SIM_GUI;

Config.delay=0.001;
Tclk_h=1;
open_system(sprintf('%s/pacemaker_DDD/pacem_aut',sys_name));
set_param(sys_name,'StopTime','50000');

load(sprintf('%s.mat',sys_name));
% [node_name,path_names,node_param,path_param,pacemaker_defaults]=setup_case2none;
setup_case2none;

color_opt_node={[0 1 0],[1 0 0],[1 1 0]}; 
color_opt_path={'Blue','Green','Yellow','Black','Red'};
set_param(sys_name,'simulationcommand','start');


c=repmat(color_opt_node{1},size(node_param,1),1);
set(Config.node_pos,'CData',c);
t=0;
while 1
t=t+1;
 pause(Config.delay)
 
 % change node color
for i=1:size(node_param,1)
    rto = get_param(sprintf('%s/%s/node_aut',sys_name,node_name{i}),'RuntimeObject');
    node_c=rto.OutputPort(2).Data;
    if node_c~=0

        c(i,:)=color_opt_node{node_c};
    end
end
set(Config.node_pos,'CData',c);

% change path color
for i=1:size(path_param,1)
    rto=get_param(sprintf('%s/%s/path_aut',sys_name,path_names{i}),'RuntimeObject');
    path_c=rto.OutputPort(3).Data;
    if path_c~=0
    set(Config.path_path_plot(i),'Color',color_opt_path{path_c});
    end
end


end






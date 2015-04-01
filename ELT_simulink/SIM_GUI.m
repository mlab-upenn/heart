function SIM_GUI
close all
load('case2_brad_WB.mat');
pos = get(0, 'screensize'); %get the screensize
W=pos(3);
H=pos(4);
WIDTH=1200;
HEIGHT=670;
Config.Handle=figure('Units', 'Pixels', 'Position', [20 H-740 WIDTH HEIGHT],...
	'Resize','off','Name','Penn Virtual Heart Model V3.0','NumberTitle','Off');

Config.TOP_axe=axes('Units','Pixels','Position',[20,130,530,530],'Xlim',[0 530],'Ylim',[0 530],'NextPlot','add');
p=imread('EP.jpg');
Config.im=imagesc(p);

set(Config.TOP_axe,'XTick',[],'YTick',[],'ZTick',[]);
Config.node_pos=scatter([],[],'LineWidth',5);
Config.probe_pos=scatter([],[],'LineWidth',3,'Marker','square');

set(Config.node_pos,'XData',node_pos(:,1),'YData',node_pos(:,2));
if ~isempty(probe_pos)
set(Config.probe_pos,'XData',probe_pos(:,1),'YData',probe_pos(:,2));
end
% set(Config.path_1,'String',node_table(:,1));
% set(Config.path_2,'String',node_table(:,1));

for i=1:size(path_table,1)
    Config.path_path_plot(i)=line([node_pos(path_table{i,3},1),node_pos(path_table{i,4},1)],[node_pos(path_table{i,3},2),node_pos(path_table{i,4},2)],'LineWidth',3);
end

Config.disp=uicontrol('Style','checkbox','String','display image','Position',[20,100,100,20],'Value',1,'Callback',@disp_img);


end


function disp_img(hObject,eventdata,handles)
global Config

if get(Config.disp,'Value')
    set(Config.im,'Visible','on');
else
    set(Config.im,'Visible','off');
end


end

function pace_panel(hObject,eventdata,handles)
global Config
global egm_table
global pace_panel_para

Config.pace_panel=figure('Units', 'Pixels', 'Position', [50 130 500 170],...
	'Resize','off','Name','Pace panel','NumberTitle','Off');
uicontrol('Style','text','Position',[20,140,70,20],'String','S1 period');
Config.s1=uicontrol('Style','edit','Position',[20,120,70,20],'BackgroundColor','white','String','600');
pace_panel_para.s1=sscanf(get(Config.s1,'String'),'%d');

uicontrol('Style','text','Position',[20,70,70,20],'String','S1 number');
Config.s1n=uicontrol('Style','edit','Position',[20,50,70,20],'BackgroundColor','white','String','7');
pace_panel_para.s1n=sscanf(get(Config.s1n,'String'),'%d');

uicontrol('Style','text','Position',[100,140,70,20],'String','S2 period');
Config.s2=uicontrol('Style','edit','Position',[100,120,70,20],'BackgroundColor','white','String','450');
pace_panel_para.s2=sscanf(get(Config.s2,'String'),'%d');

uicontrol('Style','text','Position',[100,70,70,20],'String','S2 number');
Config.s2n=uicontrol('Style','edit','Position',[100,50,70,20],'BackgroundColor','white','String','1');
pace_panel_para.s2n=sscanf(get(Config.s2n,'String'),'%d');

uicontrol('Style','text','Position',[180,140,70,20],'String','Pulse width');
Config.pulse_w=uicontrol('Style','edit','Position',[180,120,70,20],'BackgroundColor','white','String','4');
pace_panel_para.pulse_w=sscanf(get(Config.pulse_w,'String'),'%d');

uicontrol('Style','text','Position',[260,140,70,20],'String','Amplitude');
Config.pulse_a=uicontrol('Style','edit','Position',[260,120,70,20],'BackgroundColor','white','String','20');
pace_panel_para.pulse_a=sscanf(get(Config.pulse_a,'String'),'%d');

uicontrol('Style','text','Position',[180,70,70,20],'String','pace probe');
Config.pace_probe=uicontrol('Style','popupmenu','Position',[180,50,70,20],'BackgroundColor','white');
set(Config.pace_probe,'String',egm_table(:,1));
pace_panel_para.pace_probe=egm_table{get(Config.pace_probe,'Value'),2};

Config.pace_deliver=uicontrol('Style','togglebutton','Position',[400,40,80,30],'String','Deliver','Callback',@pace_deliver);
pace_panel_para.state=1;
pace_panel_para.pace_state=1;

end




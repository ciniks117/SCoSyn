function [body_param] = getSM1GBodies(Src_mdl)
% getSM1GBodies - Get key parameters for bodies in a Simscape Multibody 1G model

% Copyright 2014-2019 The MathWorks Inc.

body_param=[];          % INITIALIZE STRUCTURE
load_system(Src_mdl);   % LOAD MODELS

% FIND BLOCKS
body_paths = find_system(Src_mdl,'FollowLinks','on','LookUnderMasks','all','regexp','on','ReferenceBlock','mblibv.*/Bodies/Body');

% BODY PARAMETER NAMES (1G, body_param STRUCTURE)
BodyParameters={...
    'Name','Name';...
    'Position','Position';...
    'Orientation','Orientation';...
    'Handle','Handle';...
    'Mass','Mass';...
    'MassUnits','MassUnits';...
    'Inertia','MomentsOfInertia';...
    'InertiaUnits','MomentsOfInertiaUnits';...
    'GraphicsFileName','ExtGeomFileName';...
    'WorkingFrames','FramesStr';...
    'CG','CGFrameStr';...
    'AttachedToCS','AttachedToCS';...
    'BodyColor','GraphicDiffuseColor'};

% LOOP OVER BODY BLOCKS
for i=1:length(body_paths)
    % GET PARAMETER INFO FROM BODY BLOCK
    for j=1:length(BodyParameters)
        body_param(i).(char(BodyParameters{j,2})) = get_param(char(body_paths(i)),char(BodyParameters{j,1}));
    end
    body_param(i).BlockPath = body_paths(i);
    
    % EXTRACT FRAME DATA TO SUBFIELDS IN Frames FIELD
    frames_temp = strsplit([body_param(i).CGFrameStr '#' body_param(i).FramesStr],'#');
    for k=1:length(frames_temp)
        frame_data_temp = strsplit(char(frames_temp(k)),'$');
        body_param(i).Frames.(char(frame_data_temp(2))) = frame_data_temp;
    end
end

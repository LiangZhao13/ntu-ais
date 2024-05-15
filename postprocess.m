clear 
clc


out = resampleData('new_data_4.mat');
save new_revised_data_4.mat out

function out = resampleData(fileName)
data = load(fileName);
out = data.out;

nrows = length(out.tout);
sample_t = 200; % sample time = sample_t*0.05 s, in this case, 10 s

new_x = [];
new_y = [];
new_chi = [];
new_chi_d = [];
new_tout = [];
new_speed = [];
new_propeller = [];
new_omega_chi = [];
new_beta = [];
new_phi = [];
new_theta= [];
new_u = [];
new_v = [];
new_w = [];

for i = 1: sample_t: nrows
    new_beta = [new_beta; out.beta(i)];
    new_phi = [new_phi; out.phi(i)];
    new_theta = [new_theta; out.theta(i)];
    new_u = [new_u; out.u(i)];
    new_v = [new_v; out.v(i)];
    new_w = [new_w; out.w(i)];
    new_x= [new_x; out.x(i)];
    new_y= [new_y; out.y(i)];
    new_chi = [new_chi; out.chi(i)];
    new_chi_d = [new_chi_d; out.chi_d(i)];
    new_tout = [new_tout; out.tout(i)];
    new_speed = [new_speed; out.speed(i)];
    new_propeller = [new_propeller; out.propeller(i, 1) out.propeller(i, 2)];
    new_omega_chi = [new_omega_chi; out.omega_chi(i)];
end
out.x = new_x;
out.y = new_y;
out.chi = new_chi;
out.chi_d = new_chi_d;
out.tout = new_tout;
out.speed = new_speed;
out.propeller = new_propeller;
out.omega_chi = new_omega_chi;
out.beta = new_beta;
out.phi = new_phi;
out.theta = new_theta;
out.u = new_u;
out.v = new_v;
out.w = new_w;

end


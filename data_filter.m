clear
clc


data = load('new_revised_data_4.mat');
out = data.out;

filterPoint = 362613;

out.x(filterPoint:end) = [];
out.y(filterPoint:end) = [];
out.chi(filterPoint:end) = [];
out.chi_d(filterPoint:end) = [];
out.omega_chi(filterPoint:end) = [];
out.propeller(filterPoint:end, :) = [];
out.speed(filterPoint:end) = [];
out.tout(filterPoint:end) = [];
out.beta(filterPoint:end) = [];
out.phi(filterPoint:end) = [];
out.theta(filterPoint:end) = [];
out.u(filterPoint:end) = [];
out.v(filterPoint:end) = [];
out.w(filterPoint:end) = [];


save new_revised_data_4_filtered.mat
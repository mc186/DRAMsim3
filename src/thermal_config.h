#ifndef THERMALCONFIG_H
#define THERMALCONFIG_H

#ifndef M_PI
const double M_PI = 3.141592653;
#endif

const double T0 = 273.15;  // [C]

const double R_TSV = 5e-6;  // [m]

/* Thermal conductance */
const double Ksi = 148.0;  // Silicon
const double Kcu = 401.0;  // Copper
const double Kin = 1.5;    // insulator
const double Khs = 4.0;    // Heat sink

/* Thermal capacitance */
const double Csi = 1.66e6;  // Silicon
const double Ccu = 3.2e6;   // Copper
const double Cin = 1.65e6;  // insulator
const double Chs = 2.42e6;  // Heat sink

/* Layer Hight */
const double Hsi = 400e-6;   // Silicon
const double Hcu = 5e-6;     // Copper
const double Hin = 20e-6;    // Insulator
const double Hhs = 1000e-6;  // Heat sink

/* Hybrid bonding parameters */
// Cu-Cu hybrid bond has ~20% better thermal conductivity than solder/MR-MUF
// Reference: MDPI Electronics 2025 thermal review
const double Kcu_hybrid = 401.0 * 1.2;  // Enhanced Cu conductivity for hybrid bond
const double Hsi_hybrid = 30e-6;        // Thinner die for hybrid bonding (30um vs 50um)
const double Hin_hybrid = 2e-6;         // Thinner bond interface for hybrid (2um vs 20um)

// Maximum supported die layers for thermal simulation
const int MAX_DIE_LAYERS = 20;

#endif

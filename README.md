# RadioSaber  

RadioSaber is a state-of-the-art 5G RAN slicing algorithm designed to achieve high spectrum efficiency, ensure weighted fairness among slices subject to their Service Level Agreements (SLA), and allow slices to customize their scheduling policies. For more details, refer to our paper published in **NSDI'2023**.  

---

## Table of Contents  
- [Overview of RadioSaber](#overview-of-radiosaber)  
- [Software Installation](#software-installation)  
- [How to Run RadioSaber](#how-to-run-radiosaber)  
- [Configuration File](#configuration-file)  
- [Experiments and Reproducibility](#experiments-and-reproducibility)  
  - [Spectrum Efficiency and Fairness (Section 6.1)](#spectrum-efficiency-and-fairness-section-61)  
- [Contact](#contact)  

---

## Overview of RadioSaber  

RadioSaber is built upon **LTE-Sim**, an open-source framework for simulating Radio Access Networks (RAN) in LTE. LTE-Sim simulates the entire software stack in RAN, including:  

- PDCP, RLC, MAC, and RRC layers.  
- Channel propagation models in the physical layer.  
- Diverse applications with varying QoS requirements.  
- User mobility scenarios.  

### Key Features:  
- **100 MHz downlink bandwidth** for cells.  
- Allocation of **Resource Block Groups (RBGs)** instead of individual Resource Blocks (RBs).  
- Support for **subband CQI report mechanisms**.  
- Use of **real channel quality traces** collected with Software Defined Radios (SDR).  

RadioSaber focuses primarily on flow scheduling in the MAC layer.  

---

## Software Installation  

RadioSaber is currently tested and supported in an **Ubuntu environment**.  

### Prerequisites:  
Install the required library:  
```bash
sudo apt-get install libjsoncpp-dev
## How to Run RadioSaber  

After building RadioSaber, you can run experiments using the following command:  

```bash
${PATH-TO-RADIOSABER}/LTE-Sim SingleCellWithI [radius] [inter-slice scheduler] [frame struct] [mobility speed] [random seed] [config file]
Parameters:
radius: The coverage area of the cell (default: 1).
inter-slice scheduler:
1: No-Slicing (global proportional fairness scheduler without slicing).
7: NVS (a channel-agnostic inter-slice scheduler from MobiCom '10).
8: Sequential (channel-aware inter-slice scheduler with lower time complexity).
9: RadioSaber (our channel-aware inter-slice scheduler).
10: Upperbound (an impractical scheme offering upper-bound on spectrum efficiency).
11: NVS-Nongreedy (NVS for inter-slice scheduling with non-greedy enterprise scheduling).
frame struct: Set to 1 for FDD.
mobility speed: Speed of UEs (irrelevant if using CQI traces).
random seed: Random seed for reproducibility.
config file: JSON-based configuration file for scheduling algorithms and parameters.
Configuration File
The configuration file is in JSON format and includes:

Scheduling algorithm.
Number of UEs.
Weight of each slice.
Application and flow parameters for UEs in each slice.
Experiments and Reproducibility
Spectrum Efficiency and Fairness (Section 6.1)
To run experiments for spectrum efficiency and fairness, execute the following steps:

Change to the experiment directory:

bash
Copy code
cd ${PATH-TO-RADIOSABER}/NSDI23-radiosaber-experiments/exp-customization
Run the experiment script:

bash
Copy code
./run_backlogged.sh
Use the appropriate configuration files:

For slices with the same weights:
bash
Copy code
./exp-backlogged-20slicesdiffw/config.json
For slices with different weights:
bash
Copy code
./exp-backlogged-20slicesdiffw/config
Generate throughput and radio resource distribution graphs:

bash
Copy code
./plot_throughput.py
Contact
For any inquiries, feel free to contact 202151137@iiitvadodara.ac.in.

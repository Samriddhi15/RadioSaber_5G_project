## 🏆 Project Status
**Group Number:** Gr13EC431

### Group Members:
- **Manasi Pandey**  - 202151087@iiitvadodara.ac.in  

- **Meshram Gargee Namdeo**  - 202151093@iiitvadodara.ac.in  

- **Samriddhi Meena**  - 202151137@iiitvadodara.ac.in  

- **Waghmare Shravani Sunil** - 202151180@iiitvadodara.ac.in  

- **Komal Yadav** - 202152317@iiitvadodara.ac.in  

---

### Mentor
**Dr. Bhupendra Kumar**

---
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

## How to run RadioSaber
Since RadioSaber is built upon LTE-Sim, there is a lot legacy code we won't use. After you've built RadioSaber, run the following command to start an experiment:

```
${PATH-TO-RADIOSABER}/LTE-Sim SingleCellWithI [radius] [inter-slice scheduler] [frame struct] [mobility speed] [random seed] [config file]
```

Parameters:

* radius: the radius of the coverage area of a cell, the default value is 1
* inter-slice scheduler:
  * 1: No-Slicing, a global proportional fairness scheduler without any notion of slicing
  * 7: NVS, a channel-agnostic inter-slice scheduler proposed in [Mobicom10](https://dl.acm.org/doi/10.1145/1859995.1860023)
  * 8: Sequential, a channel-aware inter-slice scheduler that has lower time complexity and lower spectrum efficiency
  * 9: RadioSaber, our channel-aware inter-slice scheduler
  * 10: Upperbound, an impractical scheme that offers an upper-bound on the spectrum efficiency that any inter-slice scheduler can achieve
  * 11: NVS-Nongreedy, the inter-slice scheduler applies NVS while enterprise schedulers apply a non-greedy proportional fairness algorithm proposed by [Mobicom18](https://dl.acm.org/doi/abs/10.1145/3241539.3241552)
* frame struct: the cellular applies FDD or TDD. It must be set to 1 to apply FDD
* mobility speed: the mobility speed of UEs. If the simulator uses collected CQI traces instead of simulating the channel quality, then it doesn't matter.
* random seed: random seed
* config file: a JSON-based configuration file

Config File:

The config file is in JSON file format. It configures the scheduling algorithm, number of UEs, the weight of every slice, and how UEs in every slice instantiate applications and flows.

## Experiments and Reproducibility
### Spectrum Efficiency and Fairness(Sec 6.1):
* Change the working directory: ```cd ${PATH-TO-RADIOSABER}/NSDI23-radiosaber-experiments/exp-customization```, and run this experiment with ```./run_backlogged.sh```

* For slices with the same weights, the config file is: ```./exp-backlogged-20slicesdiffw/config.json```
For slices with different weights, the config file is: ```./exp-backlogged-20slicesdiffw/config ```

* After experiments finish, run ```./plot_throughput.py``` to get the throughput and radio resource distribution graph
## Contact
Contact 202151087@iiitvadodara.ac.in for assistance this is how readme code is written, give my content in this way

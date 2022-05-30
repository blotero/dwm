# My dwm rice

## Installation instructions

Clone the repo and move to the directory:
```bash
git clone https://github.com/blotero/dwm.git
cd dwm
```

Make and clean dwm itself:
```bash
sudo make clean install
```

Then, move into dwmblocks (if you want bar support) and compile it:

```bash
cd dwmblocks
sudo make clean install
```

## Look and feel:
This dwm rice supports most of the highly popular layouts, including: tile, bstack, bstackhoriz, centeredmaster, centeredfloatingmaster, deck, fibonacci (dwindle, spiral), grid, nrowgrid.

![image](https://user-images.githubusercontent.com/43280129/144339050-1769adf6-3295-45b0-a5e9-d522508e706d.png)

![image](https://user-images.githubusercontent.com/43280129/144339454-18957a21-5498-47fe-97b8-3e5d571c8da7.png)


It also supports gap dynamical management from vanitygaps, in fact, this project is nothing but a customized and slightly modified patch from the *vanitygaps* project, which you can patch by yourself from: https://dwm.suckless.org/patches/vanitygaps/.

This project also uses dwmblocks for bar management, by modifying the xsetroot -name <Literally any UTF-8 text you want> directly and ellegantly. Any configuration for this feature can be done in the dwm/dwmblocks/blocks.h file, and all scrips for getting date, system resources, kernel, packages, etc, where disposed in the dwm/dwmblocks/scripts/ directory. This bar feature was originally developed in: https://github.com/torrinfail/dwmblocks

Learn to hack your own patches on your dwm rice following suckless' oficial guidlines: https://suckless.org/hacking/
This rice, though powerful, tries to keep minimal and *suckless like*, therefore, it doesn't have clicky support for the top bar, however, if you want to, you can take a look to all available popular patches for dwm on: https://dwm.suckless.org/patches/

## Configuration


### Disk size monitor

Your dwmblocks bar will display several interestvariables from your system. It will verify by default the size on your partition /dev/sda3, however, if you want to change this value, simply modify file in ```~/dwm/dwmblocks/scripts/disk.sh``` as follows:

```bash
#!/bin/sh

available=$(df -h /dev/sda3 | tail -1 | awk '{print $ 4}')
used=$(df -h /dev/sda3 | tail -1 | awk '{print $ 5}')

echo $available 

```

In the final echo command, you might choose to deliver your desired information. By default, only available space is printed.

### System volume

System volume is displayed through the amixer tool, therefore, it is a dependency for correct work of the top bar. Feel free to choose whatever audio system client tool you want and parse it as needed in file ```~/dwm/dwmblocks/scripts/volume.sh```.

### Additional configuration

All other hackeable features related with keyboard shortcuts, layout management and behaviour, etc, can be configured in the same exact way as the original suckless dwm project. Documentation is available at: https://dwm.suckless.org/customisation/. 



## Patches used:
Vanitygaps:


## Follow the original project:
Dynamic window manager official website from suckless: https://dwm.suckless.org/
Raw dwm source repository: https://git.suckless.org/





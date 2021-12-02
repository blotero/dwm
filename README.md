#My dwm rice

##Installation instructions

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

##Look and feel:
This dwm rice supports most of the highly popular layouts, including: tile, bstack, bstackhoriz, centeredmaster, centeredfloatingmaster, deck, fibonacci (dwindle, spiral), grid, nrowgrid.
It also supports gap management from vanitygaps, in fact, this project is nothing but a customized and slightly modified patch from the *vanitygaps* project, which you can patch by yourself from: https://dwm.suckless.org/patches/vanitygaps/.

This project also uses dwmblocks for bar management, by modifying the xsetroot -name <Literally any UTF-8 text you want> directly and ellegantly. Any configuration for this feature can be done in the dwm/dwmblocks/blocks.h file, and all scrips for getting date, system resources, kernel, packages, etc, where disposed in the dwm/dwmblocks/scripts/ directory. This bar feature was originally developed in: https://github.com/torrinfail/dwmblocks

Learn to hack your own patches on your dwm rice following suckless' oficial guidlines: https://suckless.org/hacking/
This rice, though powerful, tries to keep minimal and *suckless like*, therefore, it doesn't have clicky support for the top bar, however, if you want to, you can take a look to all available popular patches for dwm on: https://dwm.suckless.org/patches/

## Patches used:
Vanitygaps:


##Follow the original project:
Dynamic window manager official website from suckless: https://dwm.suckless.org/
Raw dwm source repository: https://git.suckless.org/


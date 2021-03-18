Welcome to QuarryDB!
----------


QuarryDB is an open source database editor made for Tridentu OS (KDE Version).

It can also run on Kubuntu, KDE Neon or any OS that supports the following:

1. QT5
2. KDE
3. SQLite (or any supported SQL RDBMS of your choice)


NOTE: Tridentu OS is coming soon. There are issues making the baseline OS for testing, but that will be ironed out as time goes by.

## Installation

Currently there is no packages available on any package manager. however, this **WILL** ship on the following managers:

1. Guix

Guix will be the default PM for Tridentu Linux. 

2. Pacman

Only supported via platforms that use KDE (such as Manjaro)

3. Synaptic

Will be usable via Kubuntu and KDE Neon.

To install for now, just clone the repository and follow the build instructions below.

## Building QuarryDB

### On Unix:

```bash
cd <project_name_path>
mkdir build
cd build
cmake -DCMAKE_INSTALL_PREFIX=$KDEDIRS -DCMAKE_BUILD_TYPE=Debug ..
make
make install  or  su -c 'make install'  or  sudo make install
```
where `$KDEDIRS` points to your KDE installation prefix.

Note: you can use another build path. Then cd in your build dir and:

```bash
export KDE_SRC=path_to_your_src
cmake $KDE_SRC -DCMAKE_INSTALL_PREFIX=$KDEDIRS -DCMAKE_BUILD_TYPE=Debug
```
## Licensing

QuarryDB is open sourced under the GNU Public License (V2).

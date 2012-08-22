
# lycheeJS ADK (v0.1)

The lycheeJS ADK (App Development Kit) is the enhanced build
environment for the [lycheeJS JavaScript Game library](https://github.com/martensms/lycheeJS)
and allows cross-compiling your JavaScript games to different
native platform builds.


# Roadmap

Please take a look at the [lycheeJS Roadmap](https://github.com/martensms/lycheeJS#roadmap)
that also contains the roadmap of the lycheeJS ADK.


# Development Environment

The recommended development environment is [Ubuntu 12.04 64Bit](http://ubuntu.com/download)
with an underlying machine setup:

- CPU supports either the complete amd64 or the intel64 (IA-32e, EM64T) instruction set.
- GPU **and** installed driver supports OpenGL 2.1 (at least OpenGL 2.0).


**How to verify the correct OpenGL version:**

The installed OpenGL version should be higher than 2.1. You can verify the OpenGL version
string of your graphics card by executing the following line in your shell:

```bash

$ glxinfo | grep "OpenGL version"

OpenGL version string: 4.2.11627 Compatibility Profile Context

```


# Getting Started


## Step 1: Download

You first need to download and install the required lycheeJS-ADK files,
therefore you can choose of two methods:

**Method 1: Cloning the git repository**

```bash
git clone git://github.com/martensms/lycheeJS-adk.git ~/Desktop/lycheeJS-adk;
```

**Method 2: Downloading via zip file**

[Download the zip file](https://github.com/martensms/lycheeJS-adk/zipball/master)
and unpack the contents inside the zip files' root folder it to your *~/Desktop/lycheeJS-adk* folder.

(So that the adk script is located at *~/Desktop/lycheeJS-adk/adk*)


## Step 2: Setup

After you have plain installation of the lycheeJS ADK, you need to
setup your environment and install the dependend libararies, development
headers and such.

The setup process will require either *apt-get* or *aptitude* being
installed on your system. If you choose to install lycheeJS via git, you
will also need to manually install git via *sudo aptitude install git*.

```bash
	cd ~/Desktop/lycheeJS-adk;
	chmod +x ./adk; # in case you downloaded the zip file.
	./adk setup
```


## Step 3: Your first native build

You can now start creating native builds.

The build process itself requires a few minutes at the first time, due to
building all required V8 libraries and snapshots.

A simple start point of learning how to develop games with lycheeJS is
to try out the code of the Boilerplate or the Jewelz Game.

So, you can build the Jewelz Game via:

```bash
	cd ~/Desktop/lycheeJS-adk;
	./adk clean && ./adk build linux ./external/lycheeJS/game/jewelz
```

### Creating Debug Builds

If you want to create debug builds, just move to the *init.js* of your
game and uncomment the ```lychee.debug = true``` line. V8GL automatically
is now build in debug mode.


## Step 4: Testing the native build

You can start testing the native build via:

```bash
	cd ~/Desktop/lycheeJS-adk;
	./out/linux/start.sh
```


# License

The lycheeJS-ADK is dual licensed under GPL and the lycheeJS-ADK-EULA.

Projects hosted in the ./external folder are licensed under different
terms, so they (should) all have a License file included.


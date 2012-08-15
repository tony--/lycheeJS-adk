
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


## Step 1: Installing the lycheeJS ADK

You first need to install the ADK.

**Method 1: Cloning the git repository:**

```bash
$ git clone git://github.com/martensms/lycheeJS-adk.git /path/to/adk/
```

**Method 2: Downloading via zip file**

[Download the zip file](https://github.com/martensms/lycheeJS-adk/zipball/master)
and unpack it.


## Step 2: Setup the lycheeJS ADK

After you have plain installation of the lycheeJS ADK, you need to
setup your environment and install the dependend libararies, development
headers and such.

The setup process will require either *apt-get* or *aptitude* being
installed on your system.

```bash
	cd /path/to/adk
	./adk setup
```


## Step 3: Your first native build

If your environment was correctly setup, you can now create native builds.

A simple start point of learning how to develop with lycheeJS is the
boilerplate, so we are going to build it via:

```bash
	cd /path/to/adk
	./adk build linux ./external/lycheeJS/game/boilerplate
```


# Testing

## Testing the Game Mode

After you have created a native build, you can test the game mode.
(it automatically loads the ./game/Main.js and the ./init.js)

```bash
	cd out/linux
	./start
```

## Testing the API or Bindings

```bash
	./out/linux/start ./v8gl/test/gl/icosahedron.js
```


# License

The lycheeJS-ADK is dual licensed under GPL and the lycheeJS-ADK-EULA.

Projects hosted in the ./external folder are licensed under different
terms, so they (should) all have a License file included.


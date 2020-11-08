# AppImageLauncher
makes your Linux desktop AppImage ready™
<p align="center">
<img src="https://github.com/TheAssassin/AppImageLauncher/raw/master/resources/icons/hicolor/128x128/apps/AppImageLauncher.png"/>
</p>

Integrate AppImages to your application launcher with one click, wherefrom you can manage, update and remove them.
Double-click AppImages to open them, without having to make them executable first.

AppImageLauncher plays well with other applications managing AppImages, for example app stores.
However, it doesn't depend on any of those, and can run completely standalone.

<p align="center">
<img src="https://github.com/TheAssassin/AppImageLauncher/raw/master/resources/doc/screenshot.png"/>
</p>

> ### :smiley: Please also check the [wiki](https://github.com/TheAssassin/AppImageLauncher/wiki) for info on how to install and use AppImageLauncher.

## Features

### AppImage desktop integration

This core feature allows you to integrate AppImages you download into your application menu or launcher, to make it easier for you to launch them. It also takes care of moving them into a central location, where you can find them later.
Furthermore, it sets up the update and removal entries in the launcher for you.

### Update management

After desktop integration, the context menu of the AppImage's entry in the application launcher will have a clickable update entry that launches a little helper tool to apply updates.

### Remove AppImages from system

Click the entry in the context menu in the application launcher and the removal tool will ask you to confirm.
If you choose to do so, the desktop integration is undone, and the file is removed from your system.

### CLI

A CLI tool called `ail-cli` for automation, which provides basic operations, and can be used in scripts or generally from the terminal in headless environments. As of February 2020, only integration and unintegration are supported. More features planned!


## Differences between regular and Lite version

From version 1.4.0, there's a *Lite* edition of AppImageLauncher. It has all the AppImageLauncher you can get without having root access to your computer. AppImageLauncher Lite is shipped as an AppImage installable by a user from the command-line. Enter `./appimagelauncher-lite...AppImage install`. in a terminal, and it integrates itself in the users' home directory.

**Traditional packages are highly recommended *if possible*, as they provide many more features and provide a much better overall experience.**

## About the project

Currently, AppImages and Linux desktops don't work very well together. Since AppImages are normal executables, it'd suffice if desktop environments like Plasma, GNOME, Xfce, ... assisted users in making those files executable.
Unfortunately, some desktop environments consider this a security risk, and would rather have users use the app stores they include.

The ability to easily run them isn't all that's needed to provide a good AppImage desktop experience. Making them accessible from the application menus and launchers is a level of "desktop integration" that can't be provided by the AppImages themselves, even though some AppImages ship with a "desktop integration script" prompting the user to do so. There are too many impliciations requiring external software, especially regarding cleanup and removal of AppImages. If applications are simply made executable, they're still spread all over the users' personal files and folders. The average user will not find a "Downloads" directory full of AppImages with cryptic filenames to be friendly.

Therefore, new, system-side solutions have been developed to perform the desktop integration.
A historic solution is [appimaged](https://github.com/AppImage/AppImageKit), a daemon users could install to performs everything in the background, automagically, without notifying the user in any way.
It would scan a predefined set of directories including `~/Downloads` and `~/.bin`, makes AppImages which are found executable and performs the desktop integration. This is rather inefficient, as appimaged's operations and monitoring produced a lot of file I/O. Also, many users don't like the lack of control. It might even be a security hazard.

AppImageLauncher is a new and the first solution integrating with the system to intercept all attempts to open an AppImage.

Being the launcher for AppImages, AppImageLauncher can control how the system treats AppImages.
It can perform the desktop integration, AppImage removal (also called "uninstallation" sometimes, but as AppImages are not really installed, this term doesn't fit very well), and could be used for even more tasks in the future.


## Media and publications

### :movie_camera: :vhs: Videos & Podcasts

Tutorials:

- https://invidio.us/watch?v=D2WA2zdLvVk


Podcasts:

- https://dlnxtend.com/11
  - also: https://invidio.us/watch?v=yaZygqyN_KE
- https://dlnxtend.com/14


### :page_facing_up: Articles

A few articles have been written about AppImageLauncher already:

  - [https://www.linuxuprising.com/2018/04/easily-run-and-integrate-appimage-files.html](Linux Uprising) (English)
  - [https://linux-os.net/appimagelauncher-ejecuta-e-integra-facilmente-aplicaciones-en-appimage/](Linux-OS.net) (Spanish)
    - same article also available [https://blog.desdelinux.net/appimagelauncher-ejecuta-e-integra-facilmente-aplicaciones-en-appimage/](here).
  - [https://www.edivaldobrito.com.br/integrador-appimagelauncher-no-linux/](Edvaldo Brito) (Portuguese)
  - [https://404.g-net.pl/2018/08/appimagelauncher/](przystajnik) (Polish)
  - [https://linuxmint.hu/blog/2018/12/appimage](Linux Mint Magyar Közösség) (Hungarian)
  - [https://medium.com/@freeyourdesktopblog/install-manage-appimages-with-appimagelauncher-2a2078c55f37](FreeYourDesktop) (English)
    - please note that AppImageLauncher could *not* be "installed" via AppImage at that time, only recently was a Lite version added, that now can be installed from an AppImage (more info to follow.)
  - [https://forum.pardus.org.tr/t/appimagelauncher-tek-tiklama-ile-appimage-sisteminizle-butunlestiriniz/11275](Pardus forum) (Turkish)
  - [https://linuxteamvietnam.us/cach-chay-ung-dung-dinh-dang-appimage-tren-linux/](Linux Team Vietnam) (Vietnamese)
    - Contains a few wrong assumptions: as soon as AppImageLauncher is installed, you do not have to make AppImages executable, you can just double-click them (or otherwise open them, e.g., from your file- or web-browsers' downloads)
  - [https://www.reallinuxuser.com/15-best-things-to-do-after-installing-zorin-os-15/](RealLinuxUser) (English)
  - [https://manjaro.site/how-to-install-appimage-launcher-on-ubuntu-19-04/](manjaro.site) (English)
  - [https://cubiclenate.com/2020/01/09/appimagelauncher-appimage-manager-on-opensuse/](CubicleNate's Techpad) (English)
    - see also: [https://cubiclenate.com/2020/01/10/noodlings-lighting-the-emby-server-with-kdenlive/](CubicleNate's Techpad)
  - [https://chrisrmiller.com/2019/05/29/integrate-appimages-into-your-linux-distro/](CHRIS R MILLER) (English)
  - [https://dolys.fr/forums/topic/gerer-les-appimage-sous-linux/](doLys Forum) (French)
  - [https://linux-user.gr/t/eykolh-chrhsh-efarmogwn-appimage/2066](LINUXUSER) (Greek)

## Installation

### System-wide Installation

AppImageLauncher integrates deeply into the system. Therefore, an installation via native system packages is the preferred way to install AppImageLauncher. This way, AppImageLauncher's package can perform the necessary steps to have your system use it for all AppImage invocations.

Compatibility table (likely incomplete.) Please, feel free to open PRs to add distributions.

| Release filename | Build system | Compatible distributions (incomplete) |
| ---------------- | ------------ | ------------------------------------- |
| `appimagelauncher-<version>.xenial_(amd64,i386).deb` | Ubuntu Xenial | Ubuntu Xenial (16.04), Debian Stretch (9), Netrunner 17.01 |
| `appimagelauncher-<version>.bionic_(amd64,i386).deb` | Ubuntu Bionic | Ubuntu Bionic (18.04), Ubuntu Disco (19.04), Ubuntu Eoan (19.10) and newer, Debian buster (10) and newer, Netrunner 19.01, 19.08 and newer |
| ~~`appimagelauncher-<version>.disco_(amd64,i386).deb`~~  | ~~Ubuntu Disco~~  | ~~Ubuntu Disco (19.04)~~ |
| ~~`appimagelauncher-<version>.eoan_(amd64,i386).deb`~~   | ~~Ubuntu Eoan~~   | ~~Ubuntu Eoan (19.10) and newer~~ |
| ~~`appimagelauncher-<version>.buster_(amd64,i386).deb`~~ | ~~Debian Buster~~ | ~~Debian Buster (10) and newer, Netrunner 19.01 and 19.08~~ |
| `appimagelauncher-<version>.(i386,x86_64).rpm`       | Ubuntu Xenial | openSUSE Leap 42 and newer, possibly openSUSE Tumbleweed, SUSE Enterprise Linux, RHEL 7, CentOS 7 |

  - Ubuntu Trusty (14.04) and newer
    - **Important:** Ubuntu Bionic (and newer) broke with the backwards compatibility of its `libcurl` packages, therefore users of these systems need to install the special `bionic` package
  - Debian stable (Jessie, 8) and newer
  - Netrunner 17 and newer
  - openSUSE Leap 42 and newer
  - openSUSE Tumbleweed

The installation of packages on systems with a set of packages similar to one of the listed ones (e.g., Linux Mint, Fedora, etc.) should work as well.

**Note:** For Ubuntu 19.04 and newer as well as derivatives, there's two PPAs (personal package archives) available providing a simple way to install and update AppImageLauncher (thanks [Peter Jonas](https://github.com/shoogle) for creating and maintaining them):

  - stable (provides all releases): https://launchpad.net/~appimagelauncher-team/+archive/ubuntu/stable
  - daily (latest and greatest but possibly unstable): https://launchpad.net/~appimagelauncher-team/+archive/ubuntu/daily

Manjaro and Netrunner Rolling users can install AppImageLauncher with a distribution-provided package called `appimagelauncher`.

Arch Linux, Manjaro, Antergos and Netrunner Rolling users can use AUR to install AppImageLauncher by installing [appimagelauncher-git](https://aur.archlinux.org/packages/appimagelauncher-git) (thanks @NuLogicSystems for setting up the build).

Other systems derived from the listed ones, such as for instance Linux Mint (Ubuntu), should support AppImageLauncher as well.
If they don't, please don't hesitate to create an issue.

**Note:** Feel free to request support for other distributions by [opening an issue](https://github.com/TheAssassin/AppImageLauncher/issues/new).

### Build from source

Build instructions can be found in [BUILD.md](BUILD.md).


## How it works

AppImageLauncher is responsible for the desktop integration.
When the user launches an AppImage, the software checks whether it has been integrated already.
If not, it displays a dialog prompting the user whether to run the AppImage once, or move it to a predefined location and adding it to the application menus, launchers, etc.


## Technical background information

Details about how AppImageLauncher registers itself in the system can be found on [this wiki page](https://github.com/TheAssassin/AppImageLauncher/wiki/Idea).

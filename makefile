Windows:
	@g++ Main.cpp -o game.exe -IC:/raylib/raylib/src -LC:/raylib/raylib/src -lraylib -lopengl32 -lgdi32 -lwinmm
WindowsInstallUrl:
	@echo https://raysan5.itch.io/raylib
	@echo just click link download and run, USE DEFAULT PATH OR THE OTHER WINDOWS COMMANDS WONT WORK!
Linux:
	@g++ Main.cpp -o game $(pkg-config --cflags --libs raylib)
LinuxInstallCommands:
	@echo Arch:s udo pacman -S gcc raylib pkgconf
	@echo Debian/Ubuntu: sudo apt install g++ libraylib-dev pkg-config
	@echo Fedora: sudo dnf install gcc-c++ raylib-devel pkgconf-pkg-config
	@echo Gentoo: sudo emerge dev-lang/gcc media-libs/raylib
WindowsRun:
	@./game.exe
LinuxRun:
	@./game

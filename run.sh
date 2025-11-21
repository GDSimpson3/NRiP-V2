# INSTRUCTIONS

# sh run.sh

echo "To run this program, please have CMAKE Installed"
echo "This program was built on a MAC, other OS's may not function as intended"
echo "UBUNTU/LINUX, and MacOS ONLY terminal color codes"

# Clear the old build and make a folder
rm -rf build
mkdir build
cd build 

# initialise cmake build dir here
cmake ..

# build it
make

# run the excecutable file
./nrip2
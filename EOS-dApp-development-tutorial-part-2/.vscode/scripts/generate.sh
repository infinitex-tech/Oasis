echo "Current working directory -" $1
cd $1

eosiocpp -g $2.abi $2.cpp
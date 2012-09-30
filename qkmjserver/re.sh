cd ../
git pull 
cd qkmjclient
rm qkmj
make
cd ../qkmjserver
rm mjgps 
make
./mjgps 7000

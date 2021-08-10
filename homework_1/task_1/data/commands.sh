wc -l data.dat
grep -Evi -e '\<(dolor|dalor)\>' data.dat | wc -l
wc -w data.dat
grep -o -F " mol" data.dat | wc -l
cd test_folder
ls *.txt | wc -l
#!/bin/bash
wget https://dd.b.pvp.net/latest/set1-lite-en_us.zip
wget https://dd.b.pvp.net/latest/set2-lite-en_us.zip
wget https://dd.b.pvp.net/latest/set3-lite-en_us.zip

unzip set1-lite-en_us.zip -d set1
unzip set2-lite-en_us.zip -d set2
unzip set3-lite-en_us.zip -d set3

mv set1/en_us/data/set1-en_us.json ./set1-en_us.json
mv set2/en_us/data/set2-en_us.json ./set2-en_us.json
mv set3/en_us/data/set3-en_us.json ./set3-en_us.json

wget https://dd.b.pvp.net/latest/core-en_us.zip
unzip core-en_us.zip -d core
mv core/en_us/data/globals-en_us.json ./core-en_us.json

rm -rf set1 set2 set3 core
rm set1-lite-en_us.zip set2-lite-en_us.zip set3-lite-en_us.zip core-en_us.zip
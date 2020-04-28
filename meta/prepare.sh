#!/bin/bash
wget https://dd.b.pvp.net/latest/set1-lite-en_us.zip
wget https://dd.b.pvp.net/latest/set2-lite-en_us.zip
unzip set1-lite-en_us.zip -d set1
unzip set2-lite-en_us.zip -d set2
mv set1/en_us/data/set1-en_us.json ./set1-en_us.json
mv set2/en_us/data/set2-en_us.json ./set2-en_us.json
rm -rf set1 set2
rm set1-lite-en_us.zip set2-lite-en_us.zip
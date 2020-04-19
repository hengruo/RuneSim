#!/bin/bash
wget https://dd.b.pvp.net/latest/set1-lite-en_us.zip
unzip set1-lite-en_us.zip -d set1
mv set1/en_us/data/set1-en_us.json ./set1-en_us.json
rm -rf set1
rm set1-lite-en_us.zip
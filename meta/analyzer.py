from typing import List
import ujson as json

data1 = json.load(open("set1-en_us.json"))
data2 = json.load(open("set2-en_us.json"))

data = data1 + data2

types = set()
subtypes = set()
suptypes = set()
keywords = set()

for id, item in enumerate(data):
    subtypes.add(item['subtype'])
    suptypes.add(item['supertype'])
    types.add(item['type'])
    for k in item['keywords']:
        keywords.add(k)

print(types)
print(subtypes)
print(suptypes)
print(keywords)
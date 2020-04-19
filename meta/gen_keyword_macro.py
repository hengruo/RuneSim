keywords = [
    "K_FEARSOME",
    "K_BURST",
    "K_OVERWHELM",
    "K_LIFESTEAL",
    "K_EPHEMERAL",
    "K_REGENERATION",
    "K_SKILL",
    "K_BARRIER",
    "K_CANT_BLOCK",
    "K_FLEETING",
    "K_CHALLENGER",
    "K_DOUBLE_ATTACK",
    "K_ELUSIVE",
    "K_SLOW",
    "K_FAST",
    "K_QUICK_ATTACK",
    "K_IMBUE",
    "K_LAST_BREATH",
    "K_TOUGH",
    "K_TRAP"
]

lines = ["#define K_NONE 0x00000000000000"]
i = 1
for key in keywords:
    lines.append("#define {} {}".format(key, "{0:#0{1}x}".format(i, 18)))
    i = i << 1

lines.append("")
lines.append("#define CHECK_K_NONE(X) (X == 0)")

for key in keywords:
    lines.append("#define CHECK_{}(X) (({} & (X)) != 0)".format(key, key))

for line in lines:
    print(line)

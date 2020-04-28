# RuneSim

RuneSim is a simulator of *Legends of Runeterra*.

## How to Build
1. Install googletest v1.10.0 (recommend in `/usr/local/`)
2. `mkdir build && cd build`
3. `cmake .. && make`
4. `(sudo) make install`

*Build succeeded on macOS 10.15.4 and Ubuntu 20.04.*

## Roadmap
- [x] basic game workflow 
- [ ] complete all cards
- [ ] simple Web GUI
- [ ] Python wrapper for RL

## Development Guide
If you are using CLion, please import the code style file 
`misc/RuneSim.xml` to avoid dirty commits full of whitespaces.

Please feel free to create a new issue to ask questions 
or provide suggestions.

## Disclaimer
*RuneSim* is only used for research. Under no circumstances shall 
any person or organization use the code of *RuneSim* for commecial 
activities. Each of contributors shouldn't be liable for any damages to 
*Riot Games, Inc.* that arise from any commecial activity using *RuneSim* 
conducted by other people or organization.

## Credits
### Main Contributors
- [setoidz](https://github.com/setoidz)

### Contributors

### Used Open-source Projects
- [googletest](https://github.com/google/googletest)
- [json](https://github.com/nlohmann/json)

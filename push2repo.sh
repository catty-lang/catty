#!/usr/bin/bash
# push2repo ci script for pushing to the repo quickly 

make clean
cargo clean
git commit -m $1
git push
git pull

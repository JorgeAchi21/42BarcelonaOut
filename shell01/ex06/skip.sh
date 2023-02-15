#! /bin/zsh
ls -l | awk '{if (NR % 2) print}'

#!/bin/bash
docker run -it \
  --user $(id -u):$(id -g) \
  -v $(pwd):/workspace \
  -v /etc/passwd:/etc/passwd:ro \
  -v /etc/group:/etc/group:ro \
  -e HOME=/workspace \
c-learning

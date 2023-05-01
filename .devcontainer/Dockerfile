FROM debian:bullseye-slim

# Update local package cache & TODO ???
RUN apt-get update -qq && export DEBIAN_FRONTEND=noninteractive
# Basic packages
RUN apt-get install -y --no-install-recommends \
    git

# Install C and C++ project build tools
RUN apt-get install -y --no-install-recommends \
    gcc g++

# Add extra C and C++ libraries
RUN apt-get install -y --no-install-recommends \
    libc6-dev
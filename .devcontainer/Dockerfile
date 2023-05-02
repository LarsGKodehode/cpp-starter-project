FROM debian:bullseye-slim

# Update local package cache and configure the interface for automation
RUN apt-get update -qq && export DEBIAN_FRONTEND=noninteractive

# Basic packages
RUN apt-get install -y --no-install-recommends \
    git

# Install C and C++ compilers
RUN apt-get install -y --no-install-recommends \
    gcc g++

# Install project tools
RUN apt-get install -y --no-install-recommends \
    cmake ninja-build

# If you need extra packages for your project add them to
# this layer
RUN apt-get install -y --no-install-recommends \
    libc6-dev
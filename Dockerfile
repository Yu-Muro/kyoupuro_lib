FROM ubuntu:latest as dev

CMD ["/bin/bash", "-b"]

ARG DEBIAN_FRONTEND=noninteractive
ENV TZ=Asia/Tokyo

RUN apt-get update && apt-get upgrade -y\
	&& apt-get autoremove -y\
	&& apt-get clean

RUN apt install -y build-essential procps curl file git time tzdata tree software-properties-common

RUN add-apt-repository ppa:ubuntu-toolchain-r/ppa -y
RUN apt-get update

RUN add-apt-repository ppa:deadsnakes/ppa -y
RUN apt-get update

RUN apt install -y gcc-12 g++-12 clang python3.11 python3-pip
RUN apt install -y pypy3 nodejs npm

# 一般的なコマンドで使えるように設定
# e.g. python3.8 main.py => python main.py
RUN update-alternatives --install /usr/bin/gcc gcc /usr/bin/gcc-12 30 && \
	update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-12 30 && \
	update-alternatives --install /usr/bin/python python /usr/bin/python3.11 30 && \
	update-alternatives --install /usr/bin/pip pip /usr/bin/pip3 30 && \
	update-alternatives --install /usr/bin/pypy pypy /usr/bin/pypy3 30 && \
	update-alternatives --install /usr/bin/node node /usr/bin/nodejs 30

# AtCoderでも使えるPythonライブラリをインストール
RUN pip install -U pip && \
	pip install numpy scipy scikit-learn numba networkx

# C++でAtCoder Library(ACL)を使えるようにする
RUN git clone https://github.com/atcoder/ac-library.git /lib/ac-library
ENV CPLUS_INCLUDE_PATH /lib/ac-library

# Pythonでの競技プログラミング用データ構造をインストール
RUN pip install git+https://github.com/hinamimi/ac-library-python && \
	pip install git+https://github.com/hinamimi/python-sortedcontainers

# コンテスト補助アプリケーションをインストール
RUN pip install online-judge-tools
RUN npm install -g atcoder-cli

WORKDIR /root/src

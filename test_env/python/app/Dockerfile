FROM python:3
USER root

ENV DEBCONF_NOWARNINGS=yes

RUN apt update
RUN apt upgrade -y
RUN apt autoremove
RUN apt install -y locales && \
    localedef -f UTF-8 -i ja_JP ja_JP.UTF-8

ENV LANG ja_JP.UTF-8
ENV LANGUAGE ja_JP:ja
ENV LC_ALL ja_JP.UTF-8
ENV TZ JST-9
ENV TERM xterm

RUN apt install -y vim less
RUN apt install -y build-essential cmake
RUN pip install --upgrade pip
RUN pip install --upgrade setuptools

RUN mkdir /root/docs/
RUN mkdir /root/src/
COPY ./docs/requirements.txt /root/docs/

RUN pip install -r /root/docs/requirements.txt
WORKDIR /root/src/
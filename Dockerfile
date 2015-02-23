FROM golang:1.4.2-wheezy
MAINTAINER Daniel Huckstep <darkhelmet@darkhelmetlive.com>

RUN go get github.com/darkhelmet/serve

ADD . /jittery

WORKDIR /jittery

EXPOSE 80

CMD serve -port 80 -dir /jittery

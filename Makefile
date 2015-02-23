build:
	docker build -t darkhelmetlive/jittery:latest .

run:
	docker run --rm -it --publish-all darkhelmetlive/jittery:latest

push:
	docker push darkhelmetlive/jittery:latest

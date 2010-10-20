# Existential operator

    solipsism = true if mind? and not world?
    speed ?= 140

Instead of

    var solipsism, speed;
    if ((typeof mind !== "undefined" && mind !== null) && !(typeof world !== "undefined" && world !== null)) {
      solipsism = true;
    }
    speed = (typeof speed !== "undefined" && speed !== null) ? speed : 140;
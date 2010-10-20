# String/RegExp Interpolation

    author = "Wittgenstein"
    quote  = "A picture is a fact. -- #{author}"

    sentence = "#{ 22 / 7 } is a decent approximation of π"
    sep   = "[.\\/\\- ]"
    dates = /\d+#{sep}\d+#{sep}\d+/g

Instead of

    var author, quote;
    author = "Wittgenstein";
    quote = ("A picture is a fact. -- " + (author));

    var dates, sentence, sep;
    sentence = ("" + (22 / 7) + " is a decent approximation of π");
    sep = "[.\\/\\- ]";
    dates = (new RegExp("\\d+" + (sep) + "\\d+" + (sep) + "\\d+", "g"));
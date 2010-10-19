# Pattern matching

    weatherReport = (location) ->
      # Make an Ajax request to fetch the weather...
      [location, 72, "Mostly Sunny"]

    [city, temp, forecast] = weatherReport "Berkeley, CA"

Instead of

    var _ref, city, forecast, temp, weatherReport;
    weatherReport = function(location) {
      return [location, 72, "Mostly Sunny"];
    };
    _ref = weatherReport("Berkeley, CA");
    city = _ref[0];
    temp = _ref[1];
    forecast = _ref[2];
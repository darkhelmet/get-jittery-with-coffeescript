# Instead of

    math = {
      root: Math.sqrt,
      square: square,
      cube: function(x) {
        return x * square(x);
      }
    };
    cubes = (function() {
      _result = []; _ref = list;
      for (_i = 0, _len = _ref.length; _i < _len; _i++) {
        num = _ref[_i];
        _result.push(math.cube(num));
      }
      return _result;
    })();
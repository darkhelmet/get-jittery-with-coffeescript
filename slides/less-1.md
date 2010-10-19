# Less to write

    math =
      root:   Math.sqrt
      square: square
      # Simple function definition with implicit return value
      cube:   (x) -> x * square x

    # Array comprehension
    cubes = math.cube num for num in list
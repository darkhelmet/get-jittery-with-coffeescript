# Array slicing

    numbers = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
    threeToSix = numbers[3..6]
    copy = numbers[0...numbers.length]

Instead of

    var copy, numbers, threeToSix;
    numbers = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
    threeToSix = numbers.slice(3, 6 + 1);
    copy = numbers.slice(0, numbers.length);
{
  "test_cases": [
    {
      "input": {
        "n": 5,
        "arr": [1, 3, 5, 7, 9],
        "x": 5
      },
      "expected": {
        "ceil": 5,
        "floor": 5
      }
    },
    {
      "input": {
        "n": 5,
        "arr": [1, 3, 5, 7, 9],
        "x": 6
      },
      "expected": {
        "ceil": 7,
        "floor": 5
      }
    },
    {
      "input": {
        "n": 5,
        "arr": [1, 3, 5, 7, 9],
        "x": 10
      },
      "expected": {
        "ceil": -1,
        "floor": 9
      }
    },
    {
      "input": {
        "n": 5,
        "arr": [1, 3, 5, 7, 9],
        "x": 0
      },
      "expected": {
        "ceil": 1,
        "floor": -1
      }
    },
    {
      "input": {
        "n": 5,
        "arr": [1, 3, 5, 7, 9],
        "x": 1
      },
      "expected": {
        "ceil": 1,
        "floor": 1
      }
    },
    {
      "input": {
        "n": 5,
        "arr": [1, 3, 5, 7, 9],
        "x": 9
      },
      "expected": {
        "ceil": 9,
        "floor": 9
      }
    }
  ]
}
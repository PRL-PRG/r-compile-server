check(function(x = print("hi")) repeat(x))
check(function(x = TRUE, y = print("hi")) repeat({ if (x) break() else y }))
check(function(x = TRUE, y = print("hi")) repeat({ if (x) next() else y }))
check(function(x = TRUE, y = break()) repeat({ if (x) y else 1 }))

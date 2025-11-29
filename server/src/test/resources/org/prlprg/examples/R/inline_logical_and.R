check(function(x = TRUE, y = FALSE) x && y)
check(function(x = TRUE, y = FALSE, z = NA) x && y && z)
check(function(x = TRUE, y = FALSE) x && y && (x && y))

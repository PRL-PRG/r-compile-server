# expecting a guard
check({ invisible(1) })

# no guard
check({ invisible(1) }, bc.optLevel(3))

# guard and regular function call
check(function(...) invisible(...))

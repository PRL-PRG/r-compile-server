# test SETTER_CALL with special
setClass('C', slots = list(x = 'numeric'))
o <- new('C', x = 1)
o@x <- 42
str(o)

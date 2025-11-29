# test SETTER_CALL with builtin
check({
  x <- 1:3
  names(x)[3] <- 'a'
  x
})

# # test SETTER_CALL with special
# check({
#   setClass('C', slots = list(x = 'numeric'))
#   o <- new('C', x = 1)
#   o@x <- 42
#   str(o)
# })

# # test SETTER_CALL with closure
# check({
#   x <- data.frame(a=1)
#   colnames(x) <- 'b'
#   x
# })

check(function(x = NULL) {
  .Call("bar")
  .Call("foo", x, 1, TRUE)
})

check({
  setClass("A", slots = list(x = "numeric"))
  a <- new("A", x = 42)
  a@x <- 43
})

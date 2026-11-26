# Static calls of builtins pass the arguments with the tags of the R call, as GNU-R does. An S3
# method of an object target sees the subscript untagged, and a method whose first parameter isn't
# named like the builtin's still gets the object.
`[<-.foo` <- function(x, ..., value) {
  attr(x, "seen") <- c("tags:", names(list(...)))
  x
}
`[.foo` <- function(x, ...) c("tags:", names(list(...)))
as.character.foo <- function(obj, ...) c("obj:", class(obj))
f <- function(o) {
  o[1] <- 3
  list(attr(o, "seen"), o[1], as.character(o))
}
o <- structure(list(), class = "foo")
r <- NULL
for (k in 1:12) r <- f(o)
r

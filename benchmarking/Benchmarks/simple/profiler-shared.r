id <- function(a) {
  # prevent inlining
  while (F) a;
  while (F) a;
  a
}
add <- function(a, b) {
  id(a)+id(b)
}
test <- function() {
  s = 0
  for (num in 1:500000) {
    s = add(s, num)
  }
  s
}

execute <- function(n) {
  slow = T
  if (slow) {
    poison=structure(1, class="foo")
    add(poison, poison)
    add(poison, poison)
  }

  for (i in 1:n)
    test()

  body(execute) <<- body(execute)
  body(id) <<- body(id)
  body(add) <<- body(add)
  body(test) <<- body(test)
}


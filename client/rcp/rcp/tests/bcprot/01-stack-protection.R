source("helpers.R")

# INCLNK_stack_commit at STARTASSIGN / STARTASSIGN2.
#
# A complex assignment may mutate a value that an enclosing expression already
# pushed on the node stack. GNU R prevents that by committing the deferred link
# counts at STARTASSIGN, which raises the refcount of every boxed stack slot
# below R_BCProtTop; the assignment's MAYBE_SHARED() test then sees the value as
# shared and duplicates instead of mutating in place.
#
# The give-away in every case below is that `v` (computed from the operand that
# was pushed *before* the assignment) must show the pre-assignment value, while
# the variable itself shows the post-assignment one. If the commit is missing,
# both show the post-assignment value.

# --- STARTASSIGN, same frame -----------------------------------------------

.check_all("add.subassign",
  quote(function() {
    x <- c(1, 2)
    v <- x + { x[1] <- 99; 0 }
    list(v = v, x = x)
  }),
  list(v = c(1, 2), x = c(99, 2)))

.check_all("add.subassign2",
  quote(function() {
    x <- c(1, 2)
    v <- x + { x[[2]] <- 99; 0 }
    list(v = v, x = x)
  }),
  list(v = c(1, 2), x = c(1, 99)))

# Control: the assignment happens *before* the operand is pushed, so here the
# mutated value is the correct answer. Guards against a "fix" that just always
# duplicates.
.check_all("add.subassign.reversed",
  quote(function() {
    x <- c(1, 2)
    v <- { x[1] <- 99; 0 } + x
    list(v = v, x = x)
  }),
  list(v = c(99, 2), x = c(99, 2)))

.check_all("add.subassign.matrix",
  quote(function() {
    m <- matrix(c(1, 2, 3, 4), 2)
    v <- m + { m[1, 1] <- 99; 0 }
    list(v = v, m = m)
  }),
  list(v = matrix(c(1, 2, 3, 4), 2), m = matrix(c(99, 2, 3, 4), 2)))

# An explicit second binding: `y` must survive whatever the assignment does.
.check_all("add.subassign.aliased",
  quote(function() {
    x <- c(1, 2)
    y <- x
    v <- x + { x[1] <- 99; 0 }
    list(v = v, x = x, y = y)
  }),
  list(v = c(1, 2), x = c(99, 2), y = c(1, 2)))

.check_all("add.attr.assign",
  quote(function() {
    x <- c(1, 2)
    v <- x + { attr(x, "k") <- "z"; 0 }
    list(v = v, vk = attr(v, "k"), xk = attr(x, "k"))
  }),
  list(v = c(1, 2), vk = NULL, xk = "z"))

.check_all("add.names.assign",
  quote(function() {
    x <- c(1, 2)
    v <- x + { names(x) <- c("a", "b"); 0 }
    list(vn = names(v), xn = names(x))
  }),
  list(vn = NULL, xn = c("a", "b")))

.check_all("add.dollar.assign",
  quote(function() {
    l <- list(a = c(1, 2))
    v <- l$a + { l$a[1] <- 99; 0 }
    list(v = v, a = l$a)
  }),
  list(v = c(1, 2), a = c(99, 2)))

# User-defined replacement function: the setter call goes through
# applyClosure, so the mutation happens in a nested frame.
.check_all("add.user.replacement",
  quote(function() {
    `bump<-` <- function(x, value) { x[1] <- value; x }
    x <- c(1, 2)
    v <- x + { bump(x) <- 99; 0 }
    list(v = v, x = x)
  }),
  list(v = c(1, 2), x = c(99, 2)))

# --- builtin / special argument lists ---------------------------------------
# Builtin arguments are consed into a pairlist that also lives on the stack.

.check_all("builtin.sum",
  quote(function() {
    x <- c(1, 2)
    v <- sum(x, { x[1] <- 99; 0 })
    list(v = v, x = x)
  }),
  list(v = 3, x = c(99, 2)))

.check_all("builtin.c",
  quote(function() {
    x <- c(1, 2)
    v <- c(x, { x[1] <- 99; numeric(0) })
    list(v = v, x = x)
  }),
  list(v = c(1, 2), x = c(99, 2)))

.check_all("builtin.max.three",
  quote(function() {
    x <- c(1, 2)
    v <- max(x, { x[1] <- 99; 0 }, 0)
    list(v = v, x = x)
  }),
  list(v = 2, x = c(99, 2)))

# --- through a closure call --------------------------------------------------

.check_all("closure.arg",
  quote(function() {
    x <- c(1, 2)
    v <- x + identity({ x[1] <- 99; 0 })
    list(v = v, x = x)
  }),
  list(v = c(1, 2), x = c(99, 2)))

# --- STARTASSIGN2 (`<<-`), mutation happens in a *callee* frame --------------
# Here the commit that matters is the one in the callee's STARTASSIGN2; it has
# to protect the *caller's* stack slot.

.check_all("superassign.callee",
  quote(function() {
    x <- c(1, 2)
    h <- function() { x[1] <<- 99; 0 }
    v <- x + h()
    list(v = v, x = x)
  }),
  list(v = c(1, 2), x = c(99, 2)))

.check_all("superassign.callee.two.levels",
  quote(function() {
    x <- c(1, 2)
    g <- function() { x[1] <<- 99; 0 }
    h <- function() g()
    v <- x + h()
    list(v = v, x = x)
  }),
  list(v = c(1, 2), x = c(99, 2)))

.check_all("superassign.callee.dollar",
  quote(function() {
    l <- list(a = c(1, 2))
    h <- function() { l$a[1] <<- 99; 0 }
    v <- l$a + h()
    list(v = v, a = l$a)
  }),
  list(v = c(1, 2), a = c(99, 2)))

.check_all("superassign.callee.aliased",
  quote(function() {
    x <- c(1, 2)
    y <- x
    h <- function() { x[1] <<- 99; 0 }
    v <- x + h()
    list(v = v, x = x, y = y)
  }),
  list(v = c(1, 2), x = c(99, 2), y = c(1, 2)))

# --- nesting and loops -------------------------------------------------------

# Two INCLNKSTK windows open at once.
.check_all("nested.windows",
  quote(function() {
    x <- c(1, 2)
    v <- x + { y <- c(3, 4); y + { y[1] <- 99; 0 } }
    list(v = v, x = x)
  }),
  list(v = c(4, 6), x = c(1, 2)))

.check_all("while.body",
  quote(function() {
    x <- c(1, 2)
    v <- NULL
    i <- 0
    while (i < 1) { v <- x + { x[1] <- 99; 0 }; i <- i + 1 }
    list(v = v, x = x)
  }),
  list(v = c(1, 2), x = c(99, 2)))

.check_all("repeat.body",
  quote(function() {
    x <- c(1, 2)
    v <- NULL
    repeat { v <- x + { x[1] <- 99; 0 }; break }
    list(v = v, x = x)
  }),
  list(v = c(1, 2), x = c(99, 2)))

# --- stress: repeat the pattern so a single leaked/dropped link count grows
# --- into a visible difference rather than being absorbed by refcount slack.

.check_all("stress.repeated",
  quote(function(n) {
    bad <- 0L
    for (i in seq_len(n)) {
      x <- c(1, 2)
      y <- x
      v <- x + { x[1] <- 99; 0 }
      if (!identical(v, c(1, 2))) bad <- bad + 1L
      if (!identical(y, c(1, 2))) bad <- bad + 1L
    }
    bad
  }),
  0L,
  mkargs = function() list(200L))

.summary("01-stack-protection.R")

#? stdlib
`ftable` <- function (x, ...) 
UseMethod("ftable")

# Examples
## Start with a contingency table.
ftable(Titanic, row.vars = 1:3)
ftable(Titanic, row.vars = 1:2, col.vars = "Survived")
ftable(Titanic, row.vars = 2:1, col.vars = "Survived")

. <- integer()
(f04 <- ftable(Titanic, col.vars= .))
(f10 <- ftable(Titanic, col.vars= 1, row.vars= .))
(f01 <- ftable(Titanic, col.vars= ., row.vars= 1))
(f00 <- ftable(Titanic, col.vars= ., row.vars= .))
stopifnot(
  dim(f04) == c(32,1),
  dim(f10) == c(1,4),
  dim(f01) == c(4,1),
  dim(f00) == c(1,1))

## Start with a data frame.
x <- ftable(mtcars[c("cyl", "vs", "am", "gear")])
x
ftable(x, row.vars = c(2, 4))

## Start with expressions, use table()'s "dnn" to change labels
ftable(mtcars$cyl, mtcars$vs, mtcars$am, mtcars$gear, row.vars = c(2, 4),
       dnn = c("Cylinders", "V/S", "Transmission", "Gears"))


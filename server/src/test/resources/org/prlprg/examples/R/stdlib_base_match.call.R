#? stdlib
`match.call` <- function (definition = sys.function(sys.parent()), call = sys.call(sys.parent()), 
    expand.dots = TRUE, envir = parent.frame(2L)) 
{
    if (!missing(definition) && is.null(definition)) {
        definition <- sys.function(sys.parent())
    }
    .Internal(match.call(definition, call, expand.dots, envir))
}

# Examples
match.call(get, call("get", "abc", i = FALSE, p = 3))
## -> get(x = "abc", pos = 3, inherits = FALSE)
fun <- function(x, lower = 0, upper = 1) {
  structure((x - lower) / (upper - lower), CALL = match.call())
}
fun(4 * atan(1), u = pi)


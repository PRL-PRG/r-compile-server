#? stdlib
`autoload` <- function (name, package, reset = FALSE, ...) 
{
    if (!reset && exists(name, envir = .GlobalEnv, inherits = FALSE)) 
        stop("an object with that name already exists")
    m <- match.call()
    m[[1L]] <- as.name("list")
    newcall <- eval(m, parent.frame())
    newcall <- as.call(c(as.name("autoloader"), newcall))
    newcall$reset <- NULL
    if (is.na(match(package, .Autoloaded))) 
        assign(".Autoloaded", c(package, .Autoloaded), envir = .AutoloadEnv)
    do.call(delayedAssign, list(name, newcall, .GlobalEnv, .AutoloadEnv))
    invisible()
}

# Examples
require(stats)
autoload("interpSpline", "splines")
search()
ls("Autoloads")
.Autoloaded

x <- sort(stats::rnorm(12))
y <- x^2
is <- interpSpline(x, y)
search() ## now has splines
detach("package:splines")
search()
is2 <- interpSpline(x, y+x)
search() ## and again
detach("package:splines")


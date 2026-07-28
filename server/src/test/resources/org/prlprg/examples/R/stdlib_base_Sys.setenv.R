#? stdlib
`Sys.setenv` <- function (...) 
{
    x <- list(...)
    nm <- names(x)
    if (is.null(nm) || "" %in% nm) 
        stop("all arguments must be named")
    .Internal(Sys.setenv(nm, as.character(unlist(x))))
}

# Examples
print(Sys.setenv(R_TEST = "testit", "A+C" = 123))  # `A+C` could also be used
Sys.getenv("R_TEST")
Sys.unsetenv("R_TEST") # on Unix-alike may warn and not succeed
Sys.getenv("R_TEST", unset = NA)


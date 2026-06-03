#? stdlib
`.make_S3_group_generic_env` <- function (parent = parent.frame()) 
{
    env <- new.env(parent = parent)
    assign("Math", function(x, ...) UseMethod("Math"), envir = env)
    assign("Ops", function(e1, e2) UseMethod("Ops"), envir = env)
    assign("matrixOps", function(x, y) UseMethod("matrixOps"), 
        envir = env)
    assign("Summary", function(..., na.rm = FALSE) UseMethod("Summary"), 
        envir = env)
    assign("Complex", function(z) UseMethod("Complex"), envir = env)
    env
}

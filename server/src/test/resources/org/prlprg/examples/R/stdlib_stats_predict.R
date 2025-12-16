#? stdlib
`predict` <- function (object, ...) 
UseMethod("predict")

# Examples
old <- Sys.getlocale("LC_COLLATE")
       invisible(Sys.setlocale("LC_COLLATE", "C"))
require(utils)

## All the "predict" methods found
## NB most of the methods in the standard packages are hidden.
## Output will depend on what namespaces are (or have been) loaded.
\dontdiff{
for(fn in methods("predict"))
   try({
       f <- eval(substitute(getAnywhere(fn)$objs[[1]], list(fn = fn)))
       cat(fn, ":\n\t", deparse(args(f)), "\n")
       }, silent = TRUE)
}
invisible(Sys.setlocale("LC_COLLATE", old))


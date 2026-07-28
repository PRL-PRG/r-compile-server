#? stdlib
`showMethods` <- function (f = character(), where = topenv(parent.frame()), classes = NULL, 
    includeDefs = FALSE, inherited = !includeDefs, showEmpty, 
    printTo = stdout(), fdef = getGeneric(f, where = where)) 
{
    if (missing(showEmpty)) 
        showEmpty <- !missing(f)
    con <- if (isFALSE(printTo)) 
        textConnection(NULL, "w")
    else printTo
    if (is.function(f)) {
        fdef <- f
        if (missing(where)) 
            where <- environment(f)
        f <- deparse1(substitute(f))
    }
    if (!is(f, "character")) 
        stop(gettextf("first argument should be the names of one of more generic functions (got object of class %s)", 
            dQuote(class(f))), domain = NA)
    if (length(f) == 0L) {
        f <- if (missing(where)) 
            getGenerics()
        else getGenerics(where)
    }
    if (length(f) == 0L) 
        cat(file = con, "no applicable functions\n")
    else if (length(f) > 1L) {
        for (ff in f) {
            ffdef <- getGeneric(ff, where = where)
            if (missing(where)) {
                if (isGeneric(ff)) 
                  Recall(ff, classes = classes, includeDefs = includeDefs, 
                    inherited = inherited, showEmpty = showEmpty, 
                    printTo = con, fdef = ffdef)
            }
            else if (isGeneric(ff, where)) {
                Recall(ff, where = where, classes = classes, 
                  includeDefs = includeDefs, inherited = inherited, 
                  showEmpty = showEmpty, printTo = con, fdef = ffdef)
            }
        }
    }
    else {
        out <- paste0("\nFunction \"", f, "\":\n")
        if (!is(fdef, "genericFunction")) 
            cat(file = con, out, "<not an S4 generic function>\n")
        else .showMethodsTable(fdef, includeDefs, inherited, 
            classes = classes, showEmpty = showEmpty, printTo = con)
    }
    if (isFALSE(printTo)) {
        txtOut <- textConnectionValue(con)
        close(con)
        txtOut
    }
    else invisible(printTo)
}

# Examples
require(graphics)

 setClass("track", slots = c(x="numeric", y="numeric"))
 ## First, with only one object as argument:
 setMethod("plot", signature(x="track", y="missing"),
           function(x,  y, ...) plot(slot(x, "x"), slot(x, "y"), ...))
 ## Second, plot the data from the track on the y-axis against anything
 ## as the x data.
 setMethod("plot", signature(y = "track"),
           function(x, y, ...) plot(x, slot(y, "y"), ...))
 setMethod("plot", "track",
           function(x, y, ...) plot(slot(x, "y"), y,  ...))

## Assuming the methods for plot
## are set up as in the example of help(setMethod),
## print (without definitions) the methods that involve class "track":
showMethods("plot", classes = "track")




if(no4 <- is.na(match("stats4", loadedNamespaces())))
   loadNamespace("stats4")
showMethods(classes = "mle") # -> a method for show()
if(no4) unloadNamespace("stats4")


#? stdlib
`.checkMFClasses` <- function (cl, m, ordNotOK = FALSE) 
{
    new <- vapply(m, .MFclass, "")
    new <- new[names(new) %in% names(cl)]
    if (length(new) == 0L) 
        return(invisible())
    old <- cl[names(new)]
    if (!ordNotOK) {
        old[old == "ordered"] <- "factor"
        new[new == "ordered"] <- "factor"
    }
    new[new == "ordered" & old == "factor"] <- "factor"
    new[new == "factor" & old == "character"] <- "character"
    if (!identical(old, new)) {
        wrong <- old != new
        if (sum(wrong) == 1) 
            stop(gettextf("variable '%s' was fitted with type \"%s\" but type \"%s\" was supplied", 
                names(old)[wrong], old[wrong], new[wrong]), call. = FALSE, 
                domain = NA)
        else stop(gettextf("variables %s were specified with different types from the fit", 
            paste(sQuote(names(old)[wrong]), collapse = ", ")), 
            call. = FALSE, domain = NA)
    }
    else invisible()
}

# Examples
sapply(warpbreaks, .MFclass) # "numeric" plus 2 x "factor"
sapply(iris,       .MFclass) # 4 x "numeric" plus "factor"

mf <- model.frame(Sepal.Width ~ Species,      iris)
mc <- model.frame(Sepal.Width ~ Sepal.Length, iris)

.checkMFClasses("numeric", mc) # nothing else
.checkMFClasses(c("numeric", "factor"), mf)

## simple .getXlevels() cases :
(xl <- .getXlevels(terms(mf), mf)) # a list with one entry " $ Species" with 3 levels:
stopifnot(exprs = {
  identical(xl$Species, levels(iris$Species))
  identical(.getXlevels(terms(mc), mc), xl[0]) # a empty named list, as no factors
  is.null(.getXlevels(terms(x~x), list(x=1)))
})


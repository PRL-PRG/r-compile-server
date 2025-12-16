#? stdlib
`C` <- function (object, contr, how.many, ...) 
{
    object <- as.factor(object)
    if (!nlevels(object)) 
        stop("object not interpretable as a factor")
    if (!missing(contr) && is.name(Xcontr <- substitute(contr))) 
        contr <- switch(as.character(Xcontr), poly = "contr.poly", 
            helmert = "contr.helmert", sum = "contr.sum", treatment = "contr.treatment", 
            SAS = "contr.SAS", contr)
    if (missing(contr)) {
        oc <- getOption("contrasts")
        contr <- if (length(oc) < 2L) 
            if (is.ordered(object)) 
                contr.poly
            else contr.treatment
        else oc[1 + is.ordered(object)]
    }
    if (missing(how.many) && missing(...)) 
        contrasts(object) <- contr
    else {
        if (is.character(contr)) 
            contr <- get(contr, mode = "function")
        if (is.function(contr)) 
            contr <- contr(levels(object), ...)
        contrasts(object, how.many) <- contr
    }
    object
}

# Examples
## reset contrasts to defaults
options(contrasts = c("contr.treatment", "contr.poly"))
tens <- with(warpbreaks, C(tension, poly, 1))
\donttest{attributes(tens)}
## tension SHOULD be an ordered factor, but as it is not we can use
aov(breaks ~ wool + tens + tension, data = warpbreaks)

## show the use of ...  The default contrast is contr.treatment here
summary(lm(breaks ~ wool + C(tension, base = 2), data = warpbreaks))


# following on from help(esoph)
model3 <- glm(cbind(ncases, ncontrols) ~ agegp + C(tobgp, , 1) +
     C(alcgp, , 1), data = esoph, family = binomial())
summary(model3)


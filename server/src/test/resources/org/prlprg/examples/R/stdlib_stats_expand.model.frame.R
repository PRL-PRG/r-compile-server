#? stdlib
`expand.model.frame` <- function (model, extras, envir = environment(formula(model)), 
    na.expand = FALSE) 
{
    cl <- getCall(model)
    f <- formula(model)
    ff <- foo ~ bar + baz
    gg <- if (is.call(extras)) 
        extras
    else str2lang(paste("~", paste(extras, collapse = "+")))
    ff[[2L]] <- f[[2L]]
    ff[[3L]][[2L]] <- f[[3L]]
    ff[[3L]][[3L]] <- gg[[2L]]
    environment(ff) <- envir
    if (!na.expand) {
        rval <- eval(call("model.frame", ff, data = cl$data, 
            subset = cl$subset, na.action = cl$na.action), envir)
    }
    else {
        rval <- eval(call("model.frame", ff, data = cl$data, 
            subset = cl$subset, na.action = I), envir)
        oldmf <- model.frame(model)
        keep <- match(rownames(oldmf), rownames(rval))
        rval <- rval[keep, ]
        class(rval) <- "data.frame"
    }
    return(rval)
}

# Examples
model <- lm(log(Volume) ~ log(Girth) + log(Height), data = trees)
expand.model.frame(model, ~ Girth) # prints data.frame like

dd <- data.frame(x = 1:5, y = rnorm(5), z = c(1,2,NA,4,5))
model <- glm(y ~ x, data = dd, subset = 1:4, na.action = na.omit)
expand.model.frame(model, "z", na.expand = FALSE) # = default
expand.model.frame(model, "z", na.expand = TRUE)


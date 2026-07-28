#? stdlib
`delete.response` <- function (termobj) 
{
    a <- attributes(termobj)
    y <- a$response
    if (!is.null(y) && y) {
        termobj[[2L]] <- NULL
        a$response <- 0
        a$variables <- a$variables[-(1 + y)]
        a$predvars <- a$predvars[-(1 + y)]
        if (length(a$factors)) 
            a$factors <- a$factors[-y, , drop = FALSE]
        if (length(a$offset)) 
            a$offset <- ifelse(a$offset > y, a$offset - 1, a$offset)
        if (length(a$specials)) 
            for (i in seq_along(a$specials)) {
                b <- a$specials[[i]]
                a$specials[[i]] <- ifelse(b > y, b - 1, b)
            }
        attributes(termobj) <- a
    }
    termobj
}

# Examples
ff <- y ~ z + x + w
tt <- terms(ff)
tt
delete.response(tt)
drop.terms(tt, 2:3, keep.response = TRUE)
tt[-1]
tt[2:3]
reformulate(attr(tt, "term.labels"))

## keep LHS :
reformulate("x*w", ff[[2]])
fS <- surv(ft, case) ~ a + b
reformulate(c("a", "b*f"), fS[[2]])

## using non-syntactic names:
reformulate(c("`P/E`", "`% Growth`"), response = as.name("+-"))

x <- c("a name", "another name")
tryCatch( reformulate(x), error = function(e) "Syntax error." )
## rather backquote the strings in x :
reformulate(sprintf("`%s`", x))

stopifnot(identical(      ~ var, reformulate("var")),
          identical(~ a + b + c, reformulate(letters[1:3])),
          identical(  y ~ a + b, reformulate(letters[1:2], "y"))
         )


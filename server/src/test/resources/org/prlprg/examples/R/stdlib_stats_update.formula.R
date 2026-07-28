#? stdlib
`update.formula` <- function (old, new, ...) 
{
    tmp <- .Call(C_updateform, as.formula(old), as.formula(new))
    formula(terms.formula(tmp, simplify = TRUE))
}

# Examples
update(y ~ x,    ~ . + x2) #> y ~ x + x2
update(y ~ x, log(.) ~ . ) #> log(y) ~ x
update(. ~ u+v, res  ~ . ) #> res ~ u + v


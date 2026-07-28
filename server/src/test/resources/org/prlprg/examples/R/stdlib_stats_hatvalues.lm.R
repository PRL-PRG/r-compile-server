#? stdlib
`hatvalues.lm` <- function (model, infl = lm.influence(model, do.coef = FALSE), 
    ...) 
infl$hat

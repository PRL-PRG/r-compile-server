#? stdlib
`alias` <- function (object, ...) 
UseMethod("alias")

# Examples\donttest{
op <- options(contrasts = c("contr.helmert", "contr.poly"))
npk.aov <- aov(yield ~ block + N*P*K, npk)
alias(npk.aov)
options(op)  # reset
}
